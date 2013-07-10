/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1676
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

class StampPads {
public:
    int bestCombo(vector<string> pads, vector<string> wishlist);
};

int StampPads::bestCombo(vector<string> pads, vector<string> wishlist) {
    int ret;
    return ret;
}


int test0() {
    vector<string> pads = {"a b c d e", "b c d e f", "c d e f g", "d e f g h", "e f g h i", "f g h i j", "g h i j k", "h i j k l", "i j k l m", "j k l m n", "k l m n o", "l m n o p", "m n o p q", "n o p q r", "o p q r s", "p q r s t", "q r s t a", "r s t a b", "s t a b c", "t a b c d"};
    vector<string> wishlist = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> pads = {"yellow red purple blue cyan", "red green orange magenta yellow", "brown black orange yellow tan"};
    vector<string> wishlist = {"orange", "yellow", "red", "blue", "magenta", "tan"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> pads = {"yellow red purple blue cyan", "red green orange magenta yellow", "brown black orange yellow tan"};
    vector<string> wishlist = {"orange", "yellow", "red", "blue", "tan"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
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
    vector<string> pads = {"yellow black blue green red", "yellow brown cyan magenta tan", "black grey fire maroon silver", "blue white neon tangerine rust", "green orange soot turquoise mint", "red cream opal chrome sky"};
    vector<string> wishlist = {"yellow", "black", "blue", "green", "red", "brown", "grey", "white", "orange", "cream"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> pads = {"red green orange magenta yellow"};
    vector<string> wishlist = {"silver"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> pads = {"d v h e o", "j h e k c", "b l h m k", "x g z h y", "z y d l e", "d u b g v", "t m d n c", "f u x p j", "v w c i x", "j f y k v", "u p q k v", "t k p m n", "l t p d b"};
    vector<string> wishlist = {"b", "i", "j", "u", "n", "l", "m", "y", "v", "w", "t", "k", "e", "x"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> pads = {"h a b f t", "h e b l z", "a c q k o", "r z e s c", "r n k j o", "n o f b s", "l i r f d", "d r i e s", "p h u c v", "r n y o c", "d s c x n", "z k q d b", "k j h l u", "d g w f x", "t u w m y"};
    vector<string> wishlist = {"h", "r", "i", "p", "y", "u", "s", "x", "c", "z", "n", "m", "k", "d", "e", "w", "q", "j", "b", "g"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> pads = {"a j b u c", "q y j l k", "z i m d o", "q v t w u", "q b j p f", "b l z d s", "g a f n q", "z e y s p", "n y x c e", "d j y x g"};
    vector<string> wishlist = {"u", "z", "s", "a", "b", "c", "d", "j", "e", "w", "f", "m", "k", "g"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> pads = {"g u a w d", "a u l x c", "o a m w l", "w b x k u", "u g x s t", "p a u i j", "l r p u v", "v i l e u", "d i r o p", "m b u k l", "c i h v t", "l y a h n", "n o g p v", "e r s a n", "i t r q c"};
    vector<string> wishlist = {"e", "i", "n", "u", "v", "l", "w", "y", "g", "j", "m", "d", "h", "o", "k", "t", "p", "q", "r", "x", "a"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> pads = {"r v z k a", "b x h p i", "k x s i z", "y g q d p", "z r t i l", "y d e u k", "b p i l v", "l j p g x", "i s n b u", "u t y s r", "i z g q v", "q r y d n", "i c z b u", "h a j u v"};
    vector<string> wishlist = {"l", "p", "n", "e", "q", "a", "b", "g", "v", "r", "h", "i"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> pads = {"t u e n l", "r g e s t", "w v l y f", "t q z i y", "d s y p u", "a t b k w", "r u o b q", "j v f k n", "m r x s u", "n h r s f", "z a m q b", "b y o c w", "h l t j m", "v x y z n"};
    vector<string> wishlist = {"m", "q", "z", "b", "x", "e", "a", "h", "n", "d", "i", "o", "p", "r", "c", "f"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> pads = {"k f p s t", "h u f m d", "r w o t p", "k d m p w", "g b f x a", "p e k y h"};
    vector<string> wishlist = {"e", "a", "y", "h", "f", "b", "d", "r", "k", "g", "m", "w", "s", "o", "u", "t"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> pads = {"q a b u e", "z d y e i", "c m u q i", "h v r s f", "b r z k q", "u e k i y", "m x a c d", "v s m w t"};
    vector<string> wishlist = {"c", "t", "d", "y", "b", "r", "x", "z", "e", "u", "q"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> pads = {"q s r a p", "h z v i j", "e m f n t", "k s t e j", "a e v p u", "r h q n e", "q m o r j", "b g a c p", "z b u w c", "n o z m j", "x p j s o", "a e n b j", "n j q v b", "e o q m y", "k q v i u", "w y t b d"};
    vector<string> wishlist = {"p", "n", "x", "w", "e", "o"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> pads = {"a u p r b", "v w x m y"};
    vector<string> wishlist = {"m", "w"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> pads = {"h q i j x", "p t f a q", "g k z a l", "a l c d g", "k l m y e", "r q m g c", "p h w v q", "y u w x g", "d v a b n", "a z f g b", "e w m x r", "d g h f v", "v g l j k", "g s n v a", "h e c d n"};
    vector<string> wishlist = {"q", "r", "w", "z", "g", "v", "s", "x", "h", "m", "t", "u", "o", "i", "f", "y", "a", "b", "c", "n", "p"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> pads = {"m e n z c", "v y d b o", "x g e n p"};
    vector<string> wishlist = {"x", "m", "d", "g", "v", "y", "c", "z", "n", "b", "e", "o"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> pads = {"d n e h y", "x h s u v", "c d e h l", "l v o s e", "j e g h k", "d k i a b", "r c j s l", "x t j m f", "p w j f r", "b q v t u", "p a u v b"};
    vector<string> wishlist = {"w", "e", "j", "f", "x", "m", "y", "u", "d"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> pads = {"e j c v f"};
    vector<string> wishlist = {"c", "v", "j"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> pads = {"z q r x a", "o l y u j", "z g w e h", "b r z t g", "n x a f d", "i d a q w"};
    vector<string> wishlist = {"o", "y", "g", "z", "f", "l", "t", "n", "w", "d", "e", "u", "x", "b", "h", "i", "a", "j", "q", "r"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> pads = {"e u b f m", "f p u l c", "b x d c v", "a l z d s", "a x j s b", "t s l h y", "p g n h i"};
    vector<string> wishlist = {"s", "n", "e", "c", "x", "l", "j", "h", "y", "a", "m"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> pads = {"c d j z b", "h i o d f", "d e u z c", "q x r n k", "q n d f z", "b z k x c", "q s u e g", "b l d s w", "s o u p q"};
    vector<string> wishlist = {"n", "j", "z", "w", "m", "o", "b", "p", "k", "l", "s", "q", "c"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> pads = {"d j n z e", "o i e y k", "l g r y v", "j o w p y", "o y e t w", "n u c f t", "j m q n h", "d y s c z", "s a l v r", "k j w c f", "e z u w v"};
    vector<string> wishlist = {"k", "z", "y", "m", "s", "l", "n", "o", "p", "i"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> pads = {"g b e f z", "k s p q t", "m x w g f", "a d o r b", "o h l f a", "b r w i j", "e a r l u", "d y p g i", "z q b s o", "z n m a o", "x t g u e", "c p w a q"};
    vector<string> wishlist = {"c", "h", "d", "t", "l", "n", "o", "m", "u", "p", "q"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> pads = {"g o r a s", "k m a s j", "y f i v z", "r b j a c"};
    vector<string> wishlist = {"z", "m", "b", "c", "f", "a", "i", "o", "y", "k", "r"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> pads = {"d j v h k", "b x e h m", "z t q n e", "c d r s z", "j b o i q", "t r s u b", "x r v e m", "b i p x q"};
    vector<string> wishlist = {"z", "h"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
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
    vector<string> pads = {"o g l f a", "s f e g a"};
    vector<string> wishlist = {"l", "a", "e", "f"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> pads = {"j o y t k", "u j e f g"};
    vector<string> wishlist = {"j", "o"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
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
    vector<string> pads = {"f d w t e", "z h a b c", "g a c b k", "t k l d n", "f v k n o"};
    vector<string> wishlist = {"n", "t", "k", "a", "b", "o", "c", "v", "w", "z", "g", "h"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> pads = {"u i j n q", "e x o w h", "y p n b g", "k e l g y", "p b c d r"};
    vector<string> wishlist = {"d", "j", "o", "n", "p", "k", "i", "c", "u", "l", "q", "w", "r", "e", "g", "h", "b", "x", "y"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
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
    vector<string> pads = {"p a j q b", "t w z j k", "j h n l c", "z e a k p", "n o q z a", "u p j s c", "w u r k l", "q v c l w", "l j p g h", "o c d e b", "g z m i a", "p n l m u"};
    vector<string> wishlist = {"a", "v", "z", "m", "w", "n", "k", "o", "b", "s", "c", "g", "h", "r", "p", "i", "t"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> pads = {"f p g i l", "k z o x f", "w h c g m"};
    vector<string> wishlist = {"k", "w", "c", "x", "l", "i", "z", "f", "g", "h", "m", "o", "p"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> pads = {"m k n c q", "t b c o j", "l v u d y", "x l i q o", "u o m g z", "k n s e l", "w y x t u", "r e d n y", "a u x o b", "y q h c e", "p v l g i", "t j o u i", "b q e a i", "v a o g s", "p o i j l", "b o k c t", "w z n e q", "r p a v x", "l t q j g", "r n k m o"};
    vector<string> wishlist = {"a", "d", "f", "g", "b", "h", "j", "t", "c", "i", "e", "s"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> pads = {"j m p e l", "f h d r v", "m y n o z", "l u j f r", "f m v o w", "a q v l j", "p q d m o", "u v o l j", "l m n o f", "p r i v q", "f l h w y", "y u a q r", "n s b c o", "z x p u e", "y v w z f", "s k f l b", "u r s h y"};
    vector<string> wishlist = {"q", "w", "y", "k", "r", "s", "x"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> pads = {"b a k x t", "l c e q x", "u z k v n", "g e s y f", "c g t s d", "d r t l m", "x s i l n", "f j t g u", "z t s n a", "t g u r o"};
    vector<string> wishlist = {"v", "u", "z", "g", "d", "b", "r", "x", "y", "c", "j", "e"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> pads = {"v b u x k", "l k e a z", "g w q i v", "d s p k j", "z l n x u", "n l b o q", "g t s o f", "z m a k d", "n t w i u", "a g v m n", "f a g b z", "i a s v h", "d q r i h", "g b u v a", "g m e w o", "m b v c g", "p x e u v", "w t k q u", "s i y c n"};
    vector<string> wishlist = {"k", "w", "b", "l", "j", "c", "f", "m", "y", "o", "n", "v", "p", "q", "z", "a", "r", "g", "s", "x", "i", "t", "h", "d"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> pads = {"l m p y x", "e r d m y", "b l e w a", "a b c f s", "f q t y l", "v q b g y"};
    vector<string> wishlist = {"x", "c", "s", "y", "l"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> pads = {"b q n f o", "z j h a m", "w i n k v", "f p y q e", "c d q r h", "q r t l u", "p c b l z", "b p m e n", "y e f a g", "u t p e q", "c l y s z", "e h l m n", "b t a n d", "i d z w j", "z o u p b", "h z s o i"};
    vector<string> wishlist = {"t", "j", "u", "v", "w", "r", "m", "y", "z", "b", "k", "l", "a", "c", "n", "d", "e", "f", "g", "q", "h", "i", "o", "p", "s"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> pads = {"b w s n p", "w y x d z", "e w o f z", "u q d p e", "q y t x d", "c x y o h", "b k y j p", "q h i t x", "w j m d p", "s j q a k", "b w z m u", "p o h n e", "i b c p l", "r o v b u", "i h s j k", "p b a g f", "d y g t c"};
    vector<string> wishlist = {"u", "i", "m", "j", "q", "f", "k"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> pads = {"u s x k d", "n b j o t", "w l v d a", "s r t e k", "y l x u z", "r k f p g", "o z f a e", "k e h c f", "d e t h a", "l g v m w", "s u m g w", "e w y v o", "e s m r p", "c d e x j", "n o j l x"};
    vector<string> wishlist = {"r", "k", "t"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
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
    vector<string> pads = {"y c z a u", "g m q b p", "m j g p l", "x g h f i", "s q f t y", "t s j e r"};
    vector<string> wishlist = {"m", "y", "u", "h", "x", "q", "i", "j", "l", "p", "c", "t"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> pads = {"u z a k r", "l g h x y", "h c n g i", "w m d x h", "h s o i j", "c y g h t", "n g p a e", "q m r s t", "i s l g j", "h j i p f", "g t o h b", "m c f s d", "b u c v r", "k a t x l", "a z s k o"};
    vector<string> wishlist = {"w", "q", "f"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> pads = {"m g j u f", "l p q d u", "f t r v b", "b p a n h", "d r b c x", "r m k v g", "x z o k n", "u h b j v", "x g t a j", "m o d r u", "w i e n x", "s z t c u", "e j x y q", "g d m i e", "u e w g v", "v u n d a", "u h m r q", "k h i w f", "t b p h a", "s t y c z"};
    vector<string> wishlist = {"x", "r", "e", "c", "v", "n", "o", "w", "y"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> pads = {"s j g v u", "v o u i w", "z j r g s", "l f z g d", "j m u z o", "s v n y p", "q b z d y", "t w k p u", "i v a u z", "i f e p b", "v u h z k", "f k i e l", "v h k r e", "e f m b n", "b r x u h", "p c x y v", "d y i h j", "i x b j f", "m p j i n", "w g k f z"};
    vector<string> wishlist = {"t", "c", "u", "o", "p", "l", "z", "i", "h", "v", "g", "k", "s", "b", "j", "m", "r", "w", "n", "f", "d", "x", "a"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> pads = {"y p k q r", "z x m c h", "l n z h u"};
    vector<string> wishlist = {"n", "x", "z", "k", "l", "y", "m", "c", "h"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> pads = {"w y g d o", "k w z r l", "u v p k c", "c t q r s", "p c m x t", "y n d z m", "f g h n a", "v n w s a"};
    vector<string> wishlist = {"s", "c", "y", "z", "u", "g"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> pads = {"o z n p m", "c q l m d", "m k d i n", "f v e k j", "h r y d q", "f t q y z", "v p o w q", "v y x q k", "n g u o x", "v o p k l"};
    vector<string> wishlist = {"k", "x", "t", "d", "q", "u", "z", "v", "l", "m", "w", "y", "r", "i", "c", "e", "f", "n", "g", "j", "h", "o"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> pads = {"y x l e g", "p b z a q", "l k f q r", "w t r f h", "z e m j p", "f g b z k", "y x d m s", "a y z v m", "z x l f n", "q s j y e", "b h l w r"};
    vector<string> wishlist = {"b", "v", "y", "z", "n", "t", "p", "l", "x", "q", "d", "a"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> pads = {"o j i z v", "c s p n q", "q c p u x", "n o l h u", "p f g e t", "r x y a h", "v k w i n", "l v y t z", "u j i v k"};
    vector<string> wishlist = {"f", "e", "c", "z", "j", "t", "p", "u"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> pads = {"l q a t u", "c r w k t", "k w p j o", "n r i e t"};
    vector<string> wishlist = {"t", "a", "n", "q", "i", "o", "u", "w", "j", "e", "k", "r", "c"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> pads = {"x y l b q", "c g a y q", "w y a p h", "z r y o a", "c f u q r", "d e i g n", "r j a s t", "d x g u c", "k q g y a", "x c n d o"};
    vector<string> wishlist = {"t", "b", "c", "n", "l", "k", "w", "j", "o", "y", "g", "p", "q", "m", "i", "h", "z"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> pads = {"c h q i j", "u m j p q", "b p r f c", "f d b q s", "a e s t b", "f s m u v", "s y m n i", "g h i w b", "n u e l v", "m s t g q", "e b r f t", "f g h r n", "o v l g c", "v h d k y"};
    vector<string> wishlist = {"s", "i", "f", "t", "e", "c", "n", "l", "u", "j"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> pads = {"r b h w g", "b e z p d", "f s u x r", "p o s b a", "t f q c g", "t n z u k", "e q v f w", "n d q v t", "y k u h p"};
    vector<string> wishlist = {"q", "i"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> pads = {"j p k c l", "f h r x g", "c p a h i", "u l b v i", "m p i z h", "h x r s j", "p v b w n", "l j m s w", "k l b c f", "g z l j k", "z y t q l", "q l e s z", "c h m y v"};
    vector<string> wishlist = {"e", "m", "g", "w", "p", "r", "n", "d", "q", "s", "i", "f", "x", "b", "v", "t", "u", "a"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> pads = {"p z g r u", "d o e t w", "s p g o t", "i p h c s", "d n g s h", "h v s x a"};
    vector<string> wishlist = {"c", "d", "z", "n", "v", "a"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> pads = {"h q l p y", "f t e u m", "b s c d a", "d y u t v", "r e c f g", "r l e k m", "p z j x d", "n c u k x", "g t q l v", "w u l h e", "r o y s t", "b i t v c", "q i z g f", "n r g z a", "u j q s p", "e i l r h", "t x f w m", "n e s d o", "f l z x a", "l u a w d"};
    vector<string> wishlist = {"p", "a", "q", "o", "u", "h", "i", "v", "j", "b", "k", "x", "r", "s", "y", "t", "l", "m", "n"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> pads = {"w t k p j", "b g c k w", "i j x t a", "a o z v u", "t y g b n", "m v u y g", "c x y h d", "s n c i l", "l g b u c", "y n g u z", "x y k m e", "u f a k x", "y k v r a", "v m f q x", "s p o b z", "d w y x q", "h g z e p", "c n w t x", "z v y o d", "b c w u y"};
    vector<string> wishlist = {"c", "u", "m", "r", "o", "y", "i", "p", "d", "j", "n", "v", "t", "x"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> pads = {"a i y d o", "t s k g e", "j u w i k", "u k l s j", "q s a c y", "q m d x a", "m s l h r", "s x q l n", "u r j s k", "e w v d p", "o l a b q", "f z g a m", "o g k b a", "c h g k t", "z v s n x", "z n b w c", "h p o u k", "t z o x m", "a w i v z", "u t v m y"};
    vector<string> wishlist = {"x", "b", "u", "c", "h", "j", "t", "v", "d", "g", "k", "w", "y", "z", "a", "i", "m", "l", "n", "e"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> pads = {"v c k x f", "g f a m l", "c k z a w", "u q j n s", "v a t g k", "g c t v r", "c i t n z", "c d z e b", "m d n r j", "c a r z g", "a w i z h", "p x h m a", "m u g s h", "a x b g o", "a u k c y", "o i s m k", "u h b d a", "s l v o b", "f z t k q", "i z y c d"};
    vector<string> wishlist = {"a", "y", "m", "n", "x", "b", "z", "e", "r", "h", "v", "p"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> pads = {"o c w q s", "p u z v o", "c j i k f", "k a t j y", "f z r q t", "e z g f r", "i l d n o", "j g t r u", "s d q t j", "x i a z l", "n l o p u", "m s d b j", "u l p s x", "l o q t m", "j c y m v", "t k h i x", "n o f p s", "m q g c r", "r m d t z", "b p i g y"};
    vector<string> wishlist = {"j", "c", "k"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> pads = {"a b c d ea", "a b c d eb", "a b c d ec", "a b c d ed", "a b c d ee", "a b c d ef", "a b c d eg", "a b c d eh", "a b c d ei", "a b c d ej", "a b c d ek", "a b c d el", "a b c d em", "a b c d en", "a b c d eo", "a b c d ep", "a b c d eq", "a b c d er", "a b c d es", "a b c d et"};
    vector<string> wishlist = {"ea", "eb", "ec", "ed", "ee", "ef", "eg", "eh", "ei", "ej", "ek", "el", "em", "en", "eo", "ep", "eq", "er", "es", "et"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> pads = {"a i y d o", "t s k g e", "j u w i k", "u k l s j", "q s a c y", "q m d x a", "m s l h r", "s x q l n", "u r j s k", "e w v d p", "o l a b q", "f z g a m", "o g k b a", "c h g k t", "z v s n x", "z n b w c", "h p o u k", "t z o x m", "a w i v z", "u t v m y"};
    vector<string> wishlist = {"x", "b", "u", "c", "h", "j", "t", "v", "d", "g", "k", "w", "y", "z", "a", "i", "m", "l", "n", "e"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> pads = {"aaaaaaaaa abbbbbbbb acccccccc adddddddd aeeeeeeee", "baaaaaaaa bbbbbbbbb bcccccccc bdddddddd beeeeeeee", "caaaaaaaa cbbbbbbbb ccccccccc cdddddddd ceeeeeeee", "daaaaaaaa dbbbbbbbb dcccccccc ddddddddd deeeeeeee", "eaaaaaaaa ebbbbbbbb ecccccccc edddddddd eeeeeeeee", "faaaaaaaa fbbbbbbbb fcccccccc fdddddddd feeeeeeee", "gaaaaaaaa gbbbbbbbb gcccccccc gdddddddd geeeeeeee", "haaaaaaaa hbbbbbbbb hcccccccc hdddddddd heeeeeeee", "iaaaaaaaa ibbbbbbbb icccccccc idddddddd ieeeeeeee", "jaaaaaaaa jbbbbbbbb jcccccccc jdddddddd jeeeeeeee", "kaaaaaaaa kbbbbbbbb kcccccccc kdddddddd keeeeeeee", "laaaaaaaa lbbbbbbbb lcccccccc ldddddddd leeeeeeee", "maaaaaaaa mbbbbbbbb mcccccccc mdddddddd meeeeeeee", "naaaaaaaa nbbbbbbbb ncccccccc ndddddddd neeeeeeee", "oaaaaaaaa obbbbbbbb occcccccc odddddddd oeeeeeeee", "paaaaaaaa pbbbbbbbb pcccccccc pdddddddd peeeeeeee", "qaaaaaaaa qbbbbbbbb qcccccccc qdddddddd qeeeeeeee", "raaaaaaaa rbbbbbbbb rcccccccc rdddddddd reeeeeeee", "saaaaaaaa sbbbbbbbb scccccccc sdddddddd seeeeeeee", "taaaaaaaa tbbbbbbbb tcccccccc tdddddddd teeeeeeee"};
    vector<string> wishlist = {"aaaaaaaaa", "baaaaaaaa", "caaaaaaaa", "daaaaaaaa", "eaaaaaaaa", "faaaaaaaa", "gaaaaaaaa", "haaaaaaaa", "iaaaaaaaa", "jaaaaaaaa", "kaaaaaaaa", "laaaaaaaa", "maaaaaaaa", "naaaaaaaa", "oaaaaaaaa", "paaaaaaaa", "qaaaaaaaa", "raaaaaaaa", "saaaaaaaa", "taaaaaaaa", "pbbbbbbbb", "qbbbbbbbb", "rbbbbbbbb", "sbbbbbbbb", "tbbbbbbbb"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> pads = {"aaaaaaaaaaaaaa bbbbbbbbbbb cccccccc ddddd coloro", "aaaaaaaaaaaaaa bbbbbbbbbbb cccccccc ddddd colora", "aaaaaaaaaaaaaa bbbbbbbbbbb cccccccc ddddd colorp", "aaaaaaaaaaaaaa bbbbbbbbbbb cccccccc ddddd colorb", "aaaaaaaaaaaaaa bbbbbbbbbbb cccccccc ddddd colorq", "aaaaaaaaaaaaaa bbbbbbbbbbb cccccccc ddddd colorc", "aaaaaaaaaaaaaa bbbbbbbbbbb cccccccc ddddd colorr", "aaaaaaaaaaaaaa bbbbbbbbbbb cccccccc ddddd colord", "aaaaaaaaaaaaaa bbbbbbbbbbb cccccccc ddddd colors", "aaaaaaaaaaaaaa bbbbbbbbbbb cccccccc ddddd colore", "aaaaaaaaaaaaaa bbbbbbbbbbb cccccccc ddddd colort", "aaaaaaaaaaaaaa bbbbbbbbbbb cccccccc ddddd colorf", "aaaaaaaaaaaaaa bbbbbbbbbbb cccccccc ddddd colorn", "aaaaaaaaaaaaaa bbbbbbbbbbb cccccccc ddddd colorg", "aaaaaaaaaaaaaa bbbbbbbbbbb cccccccc ddddd colorm", "aaaaaaaaaaaaaa bbbbbbbbbbb cccccccc ddddd colorh", "aaaaaaaaaaaaaa bbbbbbbbbbb cccccccc ddddd colorl", "aaaaaaaaaaaaaa bbbbbbbbbbb cccccccc ddddd colori", "aaaaaaaaaaaaaa bbbbbbbbbbb cccccccc ddddd colork", "aaaaaaaaaaaaaa bbbbbbbbbbb cccccccc ddddd colorj"};
    vector<string> wishlist = {"colora", "colorb", "colorc", "colord", "colore", "colorf", "colorg", "colorh", "colori", "colorj", "colork", "colorl", "colorm", "colorn", "coloro", "colorp", "colorq", "colorr", "colors", "colort"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> pads = {"uu tt vv mm yy", "t s k g e", "j u w i k", "u k l s j", "q s a c y", "q m d x a", "m s l h r", "s x q l n", "u r j s k", "e w v d p", "o l a b q", "f z g a m", "o g k b a", "c h g k t", "z v s n x", "z n b w c", "h p o u k", "t z o x m", "a w i v z", "a i y d o"};
    vector<string> wishlist = {"x", "b", "u", "c", "h", "j", "t", "v", "d", "g", "k", "w", "y", "z", "a", "i", "m", "l", "n", "e", "uu", "tt", "vv", "mm", "yy"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> pads = {"a b c d e", "a f x y z", "b g x y z", "c h x y z", "d i x y z", "e j x y z"};
    vector<string> wishlist = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j"};
    StampPads* pObj = new StampPads();
    clock_t start = clock();
    int result = pObj->bestCombo(pads, wishlist);
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=152347&rd=4598&pm=1676
********************************************************************************
#pragma warning( disable : 4786 ) 
 
#include <vector> 
#include <string> 
#include <algorithm> 
#include <cstdio> 
#include <set> 
#include <map> 
#include <functional> 
#include <deque> 
 
using namespace std; 
 
template< class T > class numerize { 
public: 
  map< T, int > refs; 
 
  int operator[]( const T &item ) { 
    if( refs.count( item ) ) 
      return refs[ item ]; 
    int next = refs.size(); 
    refs[ item ] = next; 
    return next; 
  } 
}; 
 
vector< string > tokenize( string in, string kar ) { 
  string::iterator cp = in.begin(); 
  vector< string > oot; 
  while( cp != in.end() ) { 
    while( cp != in.end() && count( kar.begin(), kar.end(), *cp ) ) 
      cp++; 
    if( cp != in.end() ) 
      oot.push_back( string( cp, find_first_of( cp, in.end(), kar.begin(), kar.end() ) ) ); 
    cp = find_first_of( cp, in.end(), kar.begin(), kar.end() ); 
  }; 
  return oot; 
}; 
 
 
numerize< string > nt; 
 
int colz[ 26 ]; 
 
int pds[ 20 ][ 5 ]; 
 
int bst = 30; 
int pdc; 
 
void doit( int x, int c ) { 
  if( x == pdc ) { 
    for( int i = 0; i < 25; i++ ) 
      if( colz[ i ] == 1 ) 
        return; 
    bst = min( bst, c ); 
  } else { 
    doit( x + 1, c ); 
    for( int i = 0; i < 5; i++ ) 
      colz[ pds[ x ][ i ] ]--; 
    doit( x + 1, c + 1 ); 
    for( int i = 0; i < 5; i++ ) 
      colz[ pds[ x ][ i ] ]++; 
  } 
} 
 
class StampPads { 
  public: 
  int bestCombo(vector <string> a, vector <string> b) { 
    for( int i = 0; i < b.size(); i++ ) 
      nt[ b[ i ] ]; 
    memset( colz, 0, sizeof( colz ) ); 
    for( int i = 0; i < b.size(); i++ ) 
      colz[ i ] = 1; 
    for( int i = 0; i < a.size(); i++ ) { 
      vector< string > tki = tokenize( a[ i ], " " ); 
      for( int j = 0; j < 5; j++ ) { 
        pds[ i ][ j ] = nt[ tki[ j ] ]; 
        if( pds[ i ][ j ] >= b.size() ) 
          pds[ i ][ j ] = 25; 
      } 
    } 
    pdc = a.size(); 
    doit( 0, 0 ); 
    if( bst == 30 ) 
      return -1; 
    return bst; 
  } 
}; 
 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/
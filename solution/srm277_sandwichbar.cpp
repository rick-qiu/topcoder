/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4806
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

class SandwichBar {
public:
    int whichOrder(vector<string> available, vector<string> orders);
};

int SandwichBar::whichOrder(vector<string> available, vector<string> orders) {
    int ret;
    return ret;
}


int test0() {
    vector<string> available = {"ham", "cheese", "mustard"};
    vector<string> orders = {"ham cheese"};
    SandwichBar* pObj = new SandwichBar();
    clock_t start = clock();
    int result = pObj->whichOrder(available, orders);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> available = {"cheese", "mustard", "lettuce"};
    vector<string> orders = {"cheese ham", "cheese mustard lettuce", "ketchup", "beer"};
    SandwichBar* pObj = new SandwichBar();
    clock_t start = clock();
    int result = pObj->whichOrder(available, orders);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> available = {"cheese", "cheese", "cheese", "tomato"};
    vector<string> orders = {"ham ham ham", "water", "pork", "bread", "cheese tomato cheese", "beef"};
    SandwichBar* pObj = new SandwichBar();
    clock_t start = clock();
    int result = pObj->whichOrder(available, orders);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> available = {"foo", "bar", "baz", "gazonk", "quux", "bat", "xyzzy", "shme", "hukarz", "grault", "waldo", "bleh"};
    vector<string> orders = {"kalatehas", "spam eggs", "needle haystack", "bleh blarg", "plugh", "the best sandwich in the universe"};
    SandwichBar* pObj = new SandwichBar();
    clock_t start = clock();
    int result = pObj->whichOrder(available, orders);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> available = {"a", "a", "c", "b", "a", "b", "b"};
    vector<string> orders = {"a b c d", "d c b a", "c b a", "a a a a b b b b b b b b b b", "a a b b c", "a b c"};
    SandwichBar* pObj = new SandwichBar();
    clock_t start = clock();
    int result = pObj->whichOrder(available, orders);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> available = {"a", "b", "c"};
    vector<string> orders = {"c b d", "b c d", "e", "ggg", "abc", "bca", "b a c", "c b", "a b c"};
    SandwichBar* pObj = new SandwichBar();
    clock_t start = clock();
    int result = pObj->whichOrder(available, orders);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> available = {"ingredientwithalongnamepossiblynotverytastyoratall", "ingredientnolongerthanthepreviousbutmuchtastierrrr", "ingredientnolongerthanthepreviousbutmuchtastierrra", "ingredientnolongerthanthepreviousbutmuchtastierrrb", "ingredientnolongerthanthepreviousbutmuchtastierrrc", "ingredientnolongerthanthepreviousbutmuchtastierrrd", "ingredientnolongerthanthepreviousbutmuchtastierrre", "ingredientnolongerthanthepreviousbutmuchtastierrrf", "ingredientnolongerthanthepreviousbutmuchtastierrrg", "ingredientnolongerthanthepreviousbutmuchtastierrrh", "ingredientnolongerthanthepreviousbutmuchtastierrri", "ingredientnolongerthanthepreviousbutmuchtastierrrj", "ingredientnolongerthanthepreviousbutmuchtastierrrk", "ingredientnolongerthanthepreviousbutmuchtastierrrl", "ingredientnolongerthanthepreviousbutmuchtastierrrm", "ingredientnolongerthanthepreviousbutmuchtastierrrn", "ingredientnolongerthanthepreviousbutmuchtastierrro", "ingredientnolongerthanthepreviousbutmuchtastierrrp", "ingredientnolongerthanthepreviousbutmuchtastierrrq", "ingredientnolongerthanthepreviousbutmuchtastieoops", "ingredientnolongerthanthepreviousbutmuchtastierrrs", "ingredientnolongerthanthepreviousbutmuchtastierrrt", "ingredientnolongerthanthepreviousbutmuchtastierrru", "ingredientnolongerthanthepreviousbutmuchtastierrrv", "ingredientnolongerthanthepreviousbutmuchtastierrrw", "ingredientnolongerthanthepreviousbutmuchtastierrrx", "ingredientnolongerthanthepreviousbutmuchtastierrry", "ingredientnolongerthanthepreviousbutmuchtastierrrz", "ingredientnolongerthanthepreviousbutmuchtastierrta", "ingredientnolongerthanthepreviousbutmuchtastierrtb", "ingredientnolongerthanthepreviousbutmuchtastierrtc", "ingredientnolongerthanthepreviousbutmuchtastierrtd", "ingredientnolongerthanthepreviousbutmuchtastierrte", "ingredientnolongerthanthepreviousbutmuchtastierrtf", "ingredientnolongerthanthepreviousbutmuchtastierrtg", "ingredientnolongerthanthepreviousbutmuchtastierrth", "ingredientnolongerthanthepreviousbutmuchtastierrti", "ingredientnolongerthanthepreviousbutmuchtastierrtj", "ingredientnolongerthanthepreviousbutmuchtastierrtk", "ingredientnolongerthanthepreviousbutmuchtastierrtl", "ingredientnolongerthanthepreviousbutmuchtastierrtm", "ingredientnolongerthanthepreviousbutmuchtastierrtn", "ingredientnolongerthanthepreviousbutmuchtastierrto", "ingredientnolongerthanthepreviousbutmuchtastierrtp", "ingredientnolongerthanthepreviousbutmuchtastierrtr", "ingredientnolongerthanthepreviousbutmuchtastierrts", "ingredientnolongerthanthepreviousbutmuchtastierrtu", "ingredientnolongerthanthepreviousbutmuchtastierrtw", "ingredientnolongerthanthepreviousbutmuchtastierrtx", "ingredientnolongerthanthepreviousbutmuchtastierrty"};
    vector<string> orders = {"a b c d e f g h i j k l m n o p q r s t u v w x yz", "i know the alphabet", "ingredientnolongerthanthepreviousbutmuchtastierrxx", "a b c d e f g h i j k l m n o p q r s t u v w x yz", "i know the alphabet", "ingredientnolongerthanthepreviousbutmuchtastierftf", "out of bounds out of bounds out of bounds out of", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwx", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwx", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwx", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwx", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwx", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwx", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwx", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwx", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwx", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwx", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwx", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwx", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwx", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwx", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwx", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwx", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwx", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwx", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwx", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwx", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwx", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwx", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwx", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwx", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwx", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwx", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwx", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwx", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwx", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwx", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwx", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwx", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwx", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwx", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwx", "a b c d e f g h i j k l m n o p q r s t u v w x yz", "a b c d e f g h i j k l m n o p q r s t u v w x yz", "a b c d e f g h i j k l m n o p q r s t u v w x yz", "a b c d e f g h i j k l m n o p q r s t u v w x yz", "a b c d e f g h i j k l m n o p q r s t u v w x yz", "a b c d e f g h i j k l m n o p q r s t u v w x yz", "yay for domino day", "ingredientnolongerthanthepreviousbutmuchtastierrtf"};
    SandwichBar* pObj = new SandwichBar();
    clock_t start = clock();
    int result = pObj->whichOrder(available, orders);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> available = {"heh"};
    vector<string> orders = {"eheh", "hehe", "heh heh", "heh"};
    SandwichBar* pObj = new SandwichBar();
    clock_t start = clock();
    int result = pObj->whichOrder(available, orders);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> available = {"heh"};
    vector<string> orders = {"feh"};
    SandwichBar* pObj = new SandwichBar();
    clock_t start = clock();
    int result = pObj->whichOrder(available, orders);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> available = {"dup", "rot", "car", "cdr"};
    vector<string> orders = {"dup dup dup dup dup dup cons dup dup dup dup dup", "rot rot cons cons cons", "car car cdr cdr rot rot rot dup dup dup dup", "if while when then cdr if if if while while car", "concat concat"};
    SandwichBar* pObj = new SandwichBar();
    clock_t start = clock();
    int result = pObj->whichOrder(available, orders);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> available = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "p", "q", "oops", "o", "r", "s", "t", "u", "v", "w", "x", "pp", "y", "z"};
    vector<string> orders = {"b a y o h e w n aa x l p s f d i c r q k v u g z m", "y q w r z d g m s b n v x e bb j t f a p h k c o u", "z f b n a cc d v k p h t e r l w u c j x y q s m g", "f g s z y k l u x p j a d n e h q m c i w t dd r o", "w i ee r d t z u a v y c h l n m j p q s f o e g k", "a k j d m g c x f t r v b u i l o s y h z w p e ff", "h t i w f p e o k u s m q l c r y gg x g j b z d v", "q k x a b i u d w l r v s y j f m p c g hh o t z e", "ii k o f u v e l g i q m a c j p d y b x r h z w n", "i j jj f b l o x q a h k z v y t c w r n g d p m s", "m q i b d p v r w s z o n l u h c kk j a k t e f g", "o s g t b n z m v ll k w f r c h d j q l i y e u p", "q d i l t a y c g w u z mm v j p k b f e r m x s n", "i d c y n z e s q x a r p v f k g t b j h nn u w l", "w p n oo f v d a t s g u h y b z o q e m k i c l j", "f a v c w e q s t x g o l r z u n b p k pp d h y m", "k t l z m i f s b u w c p e y o h a r g d v j x qq", "h z l m k c r rr n i w t q g a b x v d p u s y e f", "a j ss f m k v d c y g i u h r t w n x o z e q p b", "g x d j l m tt u h e k o t w a q i p v b f r n c z", "f z t x y n h e b u c a i w v j r l k p m o q g s", "o i h k vv e d g s u x b f m t z y q l p w a c j v", "m z e a v h j l x w k g r i f y d q n p ww c s u o", "v xx u e c h a w t y n f l p q b x s k i r z g d m", "f g k u v q i b a o w l y x h z d m c e r t p n j", "s w a h t j k q v c d f b o n zz e i p m r u g l x", "b w h f d e i aa j a s y p n o v z m u c x r k q l", "p b n k y g d f z q m i x t o a j w s u r c bb l h", "v r cc l w p k s q m a g z e i b u o x t d h y j f", "r dd y m c q b n l v s t w k g j o h u z a f i e x", "q e ee u h i w f s x l o m y b v t r d c g a z n p", "w g m l o u t k y b n d s p j q f e z v i r x ff c", "l x b z f g s k n q o m j h v t i r gg e y a d c w", "r c a f g y u s n e p q t j l o m d hh k i h z w x", "k q y r l s c a e j i n z x d p f m v g t h w ii u", "jj u x i v g z l s e b r j k q a y m h n w c o d t", "kk h x j l r y n m w k p u s t v z d f o c a g q b", "d g n o ll y f t b j k u q z x c i w a h e l v s r", "t f g m a mm y v u o b r p w d n x s i c q l h j k", "nn r g b p k y x f d o j u h c i v t m l s a e z q", "p c i y e l f b oo d h u x s q t m r z n w j k g o", "q x pp z a r u m v n o h e y t d i g c p k b l w s", "qq w s l p j i c z e h k u a v f x y t n b r o g m", "k z o d t c h l y j b w v q n f g u i x rr r m e a", "p g b k v a z l q u w o s h t f i c r d x n m y ss", "d f o z q v t a h e tt w k g b p u s n y r x m i j", "p j uu b t c v e h i u l r f x s m a g y k o w d z", "y u e k p z a v j w f o h g vv b c n l q d m t r i", "v s g d y a r u j z o k w e l b q t m ww i h c n p", "q i w u h n l s x o z d a t y f b r j c v k e p xx"};
    SandwichBar* pObj = new SandwichBar();
    clock_t start = clock();
    int result = pObj->whichOrder(available, orders);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> available = {"a", "b", "c", "d", "e", "f"};
    vector<string> orders = {"a g", "f l", "e o", "d p", "b m", "c o", "a a", "b i", "d f", "e r", "o o"};
    SandwichBar* pObj = new SandwichBar();
    clock_t start = clock();
    int result = pObj->whichOrder(available, orders);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> available = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "p", "q", "oops", "o", "r", "s", "t", "u", "v", "w", "x", "y", "z"};
    vector<string> orders = {"b a y o h e w n aa x l p s f d i c r q k v u g z m", "y q w r z d g m s b n v x e bb j t f a p h k c o u", "z f b n a cc d v k p h t e r l w u c j x y q s m g", "f g s z y k l u x p j a d n e h q m c i w t dd r o", "w i ee r d t z u a v y c h l n m j p q s f o e g k", "a k j d m g c x f t r v b u i l o s y h z w p e ff", "h t i w f p e o k u s m q l c r y gg x g j b z d v", "q k x a b i u d w l r v s y j f m p c g hh o t z e", "ii k o f u v e l g i q m a c j p d y b x r h z w n", "i j jj f b l o x q a h k z v y t c w r n g d p m s", "m q i b d p v r w s z o n l u h c kk j a k t e f g", "o s g t b n z m v ll k w f r c h d j q l i y e u p", "q d i l t a y c g w u z mm v j p k b f e r m x s n", "i d c y n z e s q x a r p v f k g t b j h nn u w l", "w p n oo f v d a t s g u h y b z o q e m k i c l j", "f a v c w e q s t x g o l r z u n b p k pp d h y m", "k t l z m i f s b u w c p e y o h a r g d v j x qq", "h z l m k c r rr n i w t q g a b x v d p u s y e f", "a j ss f m k v d c y g i u h r t w n x o z e q p b", "g x d j l m tt u h e k o t w a q i p v b f r n c z", "f z t x y n h e b u c a i w v j r l k p m o q g s", "o i h k vv e d g s u x b f m t z y q l p w a c j v", "m z e a v h j l x w k g r i f y d q n p ww c s u o", "v xx u e c h a w t y n f l p q b x s k i r z g d m", "f g k u v q i b a o w l y x h z d m c e r t p n j", "s w a h t j k q v c d f b o n zz e i p m r u g l x", "b w h f d e i aa j a s y p n o v z m u c x r k q l", "p b n k y g d f z q m i x t o a j w s u r c bb l h", "v r cc l w p k s q m a g z e i b u o x t d h y j f", "r dd y m c q b n l v s t w k g j o h u z a f i e x", "q e ee u h i w f s x l o m y b v t r d c g a z n p", "w g m l o u t k y b n d s p j q f e z v i r x ff c", "l x b z f g s k n q o m j h v t i r gg e y a d c w", "r c a f g y u s n e p q t j l o m d hh k i h z w x", "k q y r l s c a e j i n z x d p f m v g t h w ii u", "jj u x i v g z l s e b r j k q a y m h n w c o d t", "kk h x j l r y n m w k p u s t v z d f o c a g q b", "d g n o ll y f t b j k u q z x c i w a h e l v s r", "t f g m a mm y v u o b r p w d n x s i c q l h j k", "nn r g b p k y x f d o j u h c i v t m l s a e z q", "p c i y e l f b oo d h u x s q t m r z n w j k g o", "q x pp z a r u m v n o h e y t d i g c p k b l w s", "qq w s l p j i c z e h k u a v f x y t n b r o g m", "k z o d t c h l y j b w v q n f g u i x rr r m e a", "p g b k v a z l q u w o s h t f i c r d x n m y ss", "d f o z q v t a h e tt w k g b p u s n y r x m i j", "p j uu b t c v e h i u l r f x s m a g y k o w d z", "y u e k p z a v j w f o h g vv b c n l q d m t r i", "v s g d y a r u j z o k w e l b q t m ww i h c n p", "q i w u h n l s x o z d a t y f b r j c v k e p xx"};
    SandwichBar* pObj = new SandwichBar();
    clock_t start = clock();
    int result = pObj->whichOrder(available, orders);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> available = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "p", "q", "oops", "o", "r", "s", "t", "u", "v", "w", "x", "y", "z"};
    vector<string> orders = {"b a y o h e w n aa x l p s f d i c r q k v u g z m", "y q w r z d g m s b n v x e bb j t f a p h k c o u", "z f b n a cc d v k p h t e r l w u c j x y q s m g", "f g s z y k l u x p j a d n e h q m c i w t dd r o", "w i ee r d t z u a v y c h l n m j p q s f o e g k", "a k j d m g c x f t r v b u i l o s y h z w p e ff", "h t i w f p e o k u s m q l c r y gg x g j b z d v", "q k x a b i u d w l r v s y j f m p c g hh o t z e", "ii k o f u v e l g i q m a c j p d y b x r h z w n", "i j jj f b l o x q a h k z v y t c w r n g d p m s", "m q i b d p v r w s z o n l u h c kk j a k t e f g", "o s g t b n z m v ll k w f r c h d j q l i y e u p", "q d i l t a y c g w u z mm v j p k b f e r m x s n", "i d c y n z e s q x a r p v f k g t b j h nn u w l", "w p n oo f v d a t s g u h y b z o q e m k i c l j", "f a v c w e q s t x g o l r z u n b p k pp d h y m", "k t l z m i f s b u w c p e y o h a r g d v j x qq", "h z l m k c r rr n i w t q g a b x v d p u s y e f", "a j ss f m k v d c y g i u h r t w n x o z e q p b", "g x d j l m tt u h e k o t w a q i p v b f r n c z", "f za t x y n h e b u c a i w v j r l k p m o q g s", "o i h k vv e d g s u x b f m t z y q l p w a c j v", "m z e a v h j l x w k g r i f y d q n p ww c s u o", "v xx u e c h a w t y n f l p q b x s k i r z g d m", "f g k u v q i b a o w l y x h z d m c e r t p n ja", "s w a h t j k q v c d f b o n zz e i p m r u g l x", "b w h f d e i aa j a s y p n o v z m u c x r k q l", "p b n k y g d f z q m i x t o a j w s u r c bb l h", "v r cc l w p k s q m a g z e i b u o x t d h y j f", "r dd y m c q b n l v s t w k g j o h u z a f i e x", "q e ee u h i w f s x l o m y b v t r d c g a z n p", "w g m l o u t k y b n d s p j q f e z v i r x ff c", "l x b z f g s k n q o m j h v t i r gg e y a d c w", "r c a f g y u s n e p q t j l o m d hh k i h z w x", "k q y r l s c a e j i n z x d p f m v g t h w ii u", "jj u x i v g z l s e b r j k q a y m h n w c o d t", "kk h x j l r y n m w k p u s t v z d f o c a g q b", "d g n o ll y f t b j k u q z x c i w a h e l v s r", "t f g m a mm y v u o b r p w d n x s i c q l h j k", "nn r g b p k y x f d o j u h c i v t m l s a e z q", "p c i y e l f b oo d h u x s q t m r z n w j k g o", "q x pp z a r u m v n o h e y t d i g c p k b l w s", "qq w s l p j i c z e h k u a v f x y t n b r o g m", "k z o d t c h l y j b w v q n f g u i x rr r m e a", "p g b k v a z l q u w o s h t f i c r d x n m y ss", "d f o z q v t a h e tt w k g b p u s n y r x m i j", "p j uu b t c v e h i u l r f x s m a g y k o w d z", "y u e k p z a v j w f o h g vv b c n l q d m t r i", "v s g d y a r u j z o k w e l b q t m ww i h c n p", "q i w u h n l s x o z d a t y f b r j c v k e p xx"};
    SandwichBar* pObj = new SandwichBar();
    clock_t start = clock();
    int result = pObj->whichOrder(available, orders);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> available = {"first", "second", "third", "uhm", "fourth"};
    vector<string> orders = {"abc def", "first fifth", "second third uhm", "first fourth", "second uhm", "first second third uhm fourth", "abc", "gaga"};
    SandwichBar* pObj = new SandwichBar();
    clock_t start = clock();
    int result = pObj->whichOrder(available, orders);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> available = {"cheese", "mayo", "mushroom", "burger"};
    vector<string> orders = {"mayo", "mayo cheese", "mushroom ham", "mayo", "cheese", "mayo"};
    SandwichBar* pObj = new SandwichBar();
    clock_t start = clock();
    int result = pObj->whichOrder(available, orders);
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
    vector<string> available = {"a", "b", "c"};
    vector<string> orders = {"a b c d"};
    SandwichBar* pObj = new SandwichBar();
    clock_t start = clock();
    int result = pObj->whichOrder(available, orders);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> available = {"ham", "cheese"};
    vector<string> orders = {"ham cheddar"};
    SandwichBar* pObj = new SandwichBar();
    clock_t start = clock();
    int result = pObj->whichOrder(available, orders);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> available = {"cheese", "mustard", "lettuce"};
    vector<string> orders = {"cheese ham", "ketchup", "beer"};
    SandwichBar* pObj = new SandwichBar();
    clock_t start = clock();
    int result = pObj->whichOrder(available, orders);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> available = {"foo", "bar", "baz", "gazonk", "quux", "bat", "xyzzy", "shme", "hukarz", "grault", "waldo", "bleh"};
    vector<string> orders = {"kalatehas", "spam eggs", "needle haystack", "bleh blarg", "plugh", "the best sandwich in the universe"};
    SandwichBar* pObj = new SandwichBar();
    clock_t start = clock();
    int result = pObj->whichOrder(available, orders);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> available = {"ple"};
    vector<string> orders = {"ple", "ple", "ple"};
    SandwichBar* pObj = new SandwichBar();
    clock_t start = clock();
    int result = pObj->whichOrder(available, orders);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> available = {"aa"};
    vector<string> orders = {"a"};
    SandwichBar* pObj = new SandwichBar();
    clock_t start = clock();
    int result = pObj->whichOrder(available, orders);
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
    vector<string> available = {"c"};
    vector<string> orders = {"s"};
    SandwichBar* pObj = new SandwichBar();
    clock_t start = clock();
    int result = pObj->whichOrder(available, orders);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> available = {"nothing", "aaa"};
    vector<string> orders = {"best of all", "aa nothing", "nothing aaa"};
    SandwichBar* pObj = new SandwichBar();
    clock_t start = clock();
    int result = pObj->whichOrder(available, orders);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> available = {"cheese", "mustard", "lettuce"};
    vector<string> orders = {"cheese ham", "ketchup", "beer lettuce"};
    SandwichBar* pObj = new SandwichBar();
    clock_t start = clock();
    int result = pObj->whichOrder(available, orders);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> available = {"ham", "cheese"};
    vector<string> orders = {"ham cheddar", "ham ham"};
    SandwichBar* pObj = new SandwichBar();
    clock_t start = clock();
    int result = pObj->whichOrder(available, orders);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> available = {"ham", "mustard", "lettuce"};
    vector<string> orders = {"cheese ham", "cheese mustard lettuce", "ketchup", "beer"};
    SandwichBar* pObj = new SandwichBar();
    clock_t start = clock();
    int result = pObj->whichOrder(available, orders);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> available = {"cheese", "cheese", "cheese", "tomato"};
    vector<string> orders = {"ham ham ham", "tomato water", "pork", "bread", "cheese tomato cheese", "beef"};
    SandwichBar* pObj = new SandwichBar();
    clock_t start = clock();
    int result = pObj->whichOrder(available, orders);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> available = {"cos", "cosa", "coss"};
    vector<string> orders = {"cos cosv coss cosa asdf"};
    SandwichBar* pObj = new SandwichBar();
    clock_t start = clock();
    int result = pObj->whichOrder(available, orders);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> available = {"x"};
    vector<string> orders = {"x y"};
    SandwichBar* pObj = new SandwichBar();
    clock_t start = clock();
    int result = pObj->whichOrder(available, orders);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=343655&rd=8074&pm=4806
********************************************************************************
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <functional>
#include <iostream.h>
#include <math.h>
#include <stdio.h>
#include <string>
#include <string.h>
#include <time.h>
#include <vector>
 
 
#ifdef WIN32
  #define LL _int64
  #define SIC(s1, s2) stricmp(s1, s2)
#else
  #define LL long long
  #define SIC(s1, s2) strcasecmp(s1, s2)
#endif
 
using namespace std;
 
 
class SandwichBar
{
  public:
  int whichOrder(vector <string> available, vector <string> orders)
  {
    char t[250];
    int r = -1;
    int i, j;
    char *pt;
    string s;
 
    for (i = 0; i < orders.size(); i++)
    {
      strcpy(t, orders[i].c_str());
      pt = strtok(t, " ");
      while (pt)
      {
        for (j = 0; j < available.size(); j++)
        {
          s = pt;
          if (s == available[j])
            break;
        }
        if (j >= available.size())
          break;
        pt = strtok(NULL, " ");
      }
 
      if (pt == NULL)
        return i;
    }
 
    return r;
  }
};

********************************************************************************
*******************************************************************************/
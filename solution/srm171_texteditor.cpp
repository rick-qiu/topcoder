/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1942
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

class TextEditor {
public:
    vector<string> twoColumn(vector<string> text, int width);
};

vector<string> TextEditor::twoColumn(vector<string> text, int width) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> text = {"The quick brown fox jumps over the lazy dog. "};
    int width = 7;
    TextEditor* pObj = new TextEditor();
    clock_t start = clock();
    vector<string> result = pObj->twoColumn(text, width);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"The", "over", "quick", "the", "brown", "lazy", "fox", "dog.", "jumps"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> text = {" WOLF, meeting with a Lamb astray from the fold,", "resolved not to lay violent hands on him, but to", "find some plea to justify to the Lamb the Wolfs", "right to eat him. He thus addressed him: Sirrah,", "last year you grossly insulted me. Indeed,", "bleated the Lamb in a mournful tone of voice, I", "was not then born. Then said the Wolf, You feed", "in my pasture. No, good sir, replied the Lamb,", "I have not yet tasted grass. Again said the", "Wolf, You drink of my well. No, exclaimed the", "Lamb, I never yet drank water, for as yet my", "mothers milk is both food and drink to me. Upon", "which the Wolf seized him and ate him up, saying,", "Well! I wont remain supperless, even though you", "refute every one of my imputations. The tyrant", "will always find a pretext for his tyranny."};
    int width = 35;
    TextEditor* pObj = new TextEditor();
    clock_t start = clock();
    vector<string> result = pObj->twoColumn(text, width);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"WOLF, meeting with a Lamb astray", "Again said the Wolf, You drink of", "from the fold, resolved not to lay", "my well. No, exclaimed the Lamb, I", "violent hands on him, but to find", "never yet drank water, for as yet", "some plea to justify to the Lamb", "my mothers milk is both food and", "the Wolfs right to eat him. He thus", "drink to me. Upon which the Wolf", "addressed him: Sirrah, last year", "seized him and ate him up, saying,", "you grossly insulted me. Indeed,", "Well! I wont remain supperless,", "bleated the Lamb in a mournful tone", "even though you refute every one of", "of voice, I was not then born. Then", "my imputations. The tyrant will", "said the Wolf, You feed in my", "always find a pretext for his", "pasture. No, good sir, replied the", "tyranny.", "Lamb, I have not yet tasted grass."};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> text = {" AN ASTRONOMER used to go out at night to observe", "the stars. One evening, as he wandered through the", "suburbs with his whole attention fixed on the sky,", "he fell accidentally into a deep well. While he", "lamented and bewailed his sores and bruises, and", "cried loudly for help, a neighbor ran to the well,", "and learning what had happened said: Hark ye, old", "fellow, why, in striving to pry into what is in", "heaven, do you not manage to see what is on", "earth?"};
    int width = 35;
    TextEditor* pObj = new TextEditor();
    clock_t start = clock();
    vector<string> result = pObj->twoColumn(text, width);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AN ASTRONOMER used to go out at", "sores and bruises, and cried loudly", "night to observe the stars. One", "for help, a neighbor ran to the", "evening, as he wandered through the", "well, and learning what had", "suburbs with his whole attention", "happened said: Hark ye, old fellow,", "fixed on the sky, he fell", "why, in striving to pry into what", "accidentally into a deep well.", "is in heaven, do you not manage to", "While he lamented and bewailed his", "see what is on earth?"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> text = {" The Law of the Jungle, which never orders", "anything without a reason, forbids every beast to", "eat Man except when he is killing to show his", "children how to kill, and then he must hunt", "outside the huntinggrounds of his pack or tribe.", "The real reason for this is that mankilling", "means, sooner or later, the arrival of white men", "on elephants, with guns, and hundreds of brown men", "with gongs and rockets and torches. Then everybody", "in the jungle suffers. The reason the beasts give", "among themselves is that Man is the weakest and", "most defenseless of all living things, and it is", "unsportsmanlike to touch him. They say too and", "it is true that maneaters become mangy, and", "lose their teeth."};
    int width = 15;
    TextEditor* pObj = new TextEditor();
    clock_t start = clock();
    vector<string> result = pObj->twoColumn(text, width);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"The Law of the", "hundreds of", "Jungle, which", "brown men with", "never orders", "gongs and", "anything", "rockets and", "without a", "torches. Then", "reason, forbids", "everybody in", "every beast to", "the jungle", "eat Man except", "suffers. The", "when he is", "reason the", "killing to show", "beasts give", "his children", "among", "how to kill,", "themselves is", "and then he", "that Man is the", "must hunt", "weakest and", "outside the", "most", "huntinggrounds", "defenseless of", "of his pack or", "all living", "tribe. The real", "things, and it", "reason for this", "is", "is that", "unsportsmanlike", "mankilling", "to touch him.", "means, sooner", "They say too", "or later, the", "and it is true", "arrival of", "that maneaters", "white men on", "become mangy,", "elephants, with", "and lose their", "guns, and", "teeth."};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> text = {" The Law of the Jungle, which never orders", "anything without a reason, forbids every beast to", "eat Man except when he is killing to show his", "children how to kill, and then he must hunt", "outside the huntinggrounds of his pack or tribe.", "The real reason for this is that mankilling", "means, sooner or later, the arrival of white men", "on elephants, with guns, and hundreds of brown men", "with gongs and rockets and torches. Then everybody", "in the jungle suffers. The reason the beasts give", "among themselves is that Man is the weakest and", "most defenseless of all living things, and it is", "unsportsmanlike to touch him. They say too and", "it is true that maneaters become mangy, and", "lose their teeth."};
    int width = 35;
    TextEditor* pObj = new TextEditor();
    clock_t start = clock();
    vector<string> result = pObj->twoColumn(text, width);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"The Law of the Jungle, which never", "of brown men with gongs and rockets", "orders anything without a reason,", "and torches. Then everybody in the", "forbids every beast to eat Man", "jungle suffers. The reason the", "except when he is killing to show", "beasts give among themselves is", "his children how to kill, and then", "that Man is the weakest and most", "he must hunt outside the", "defenseless of all living things,", "huntinggrounds of his pack or", "and it is unsportsmanlike to touch", "tribe. The real reason for this is", "him. They say too and it is true", "that mankilling means, sooner or", "that maneaters become mangy, and", "later, the arrival of white men on", "lose their teeth.", "elephants, with guns, and hundreds"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> text = {" TOMB of a millionaire, A multimillionaire,", "ladies and gentlemen, Place of the dead where they", "spend every year The usury of twentyfive thousand", "dollars For upkeep and flowers To keep fresh the", "memory of the dead. The merchant prince gone to", "dust Commanded in his written will Over the signed", "name of his last testament Twentyfive thousand", "dollars be set aside For roses, lilacs,", "hydrangeas, tulips, For perfume and color,", "sweetness of remembrance Around his last long", "home. A hundred cash girls want nickels to go to", "the movies tonight. In the back stalls of a", "hundred saloons, women are at tables Drinking with", "men or waiting for men jingling loose silver", "dollars in their pockets. In a hundred furnished", "rooms is a girl who sells silk or dress goods or", "leather stuff for six dollars a week wages And", "when she pulls on her stockings in the morning she", "is reckless about God and the newspapers and the", "police, the talk of her home town or the name", "people call her."};
    int width = 50;
    TextEditor* pObj = new TextEditor();
    clock_t start = clock();
    vector<string> result = pObj->twoColumn(text, width);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"TOMB of a millionaire, A multimillionaire, ladies", "the movies tonight. In the back stalls of a", "and gentlemen, Place of the dead where they spend", "hundred saloons, women are at tables Drinking with", "every year The usury of twentyfive thousand", "men or waiting for men jingling loose silver", "dollars For upkeep and flowers To keep fresh the", "dollars in their pockets. In a hundred furnished", "memory of the dead. The merchant prince gone to", "rooms is a girl who sells silk or dress goods or", "dust Commanded in his written will Over the signed", "leather stuff for six dollars a week wages And", "name of his last testament Twentyfive thousand", "when she pulls on her stockings in the morning she", "dollars be set aside For roses, lilacs,", "is reckless about God and the newspapers and the", "hydrangeas, tulips, For perfume and color,", "police, the talk of her home town or the name", "sweetness of remembrance Around his last long", "people call her.", "home. A hundred cash girls want nickels to go to"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> text = {" We passed along the Arabian coast of Mahrah and", "Hadramaut, for a distance of six miles, its", "undulating line of mountains being occasionally", "relieved by some ancient ruin. The 5th of February", "we at last entered the Gulf of Aden, a perfect", "funnel introduced into the neck of Babel mandeb,", "through which the Indian waters entered the Red", "Sea. The 6th of February, the Nautilus floated in", "sight of Aden, perched upon a promontory which a", "narrow isthmus joins to the mainland, a kind of", "inaccessible Gibraltar, the fortifications of", "which were rebuilt by the English after taking", "possession in 1839. I caught a glimpse of the", "octagon minarets of this town, which was at one", "time the richest commercial magazine on the coast.", "I certainly thought that Captain Nemo, arrived at", "this point, would back out again; but I was", "mistaken, for be did no such thing, much to my", "surprise. The next day, the 7th of February, we", "entered the Straits of Babelmandeb, the name of", "which, in the Arab tongue, means The Gate of", "Tears. To twenty miles in breadth, it is only", "thirtytwo in length. And for the Nautilus,", "starting at full speed, the crossing was scarcely", "the work of an hour. But I saw nothing, not even", "the Island of Perim, with which the British", "Government has fortified the position of Aden.", "There were too many English or French steamers of", "the line of Suez to Bombay, Calcutta to Melbourne,", "and from Bourbon to the Mauritius, furrowing this", "narrow passage, for the Nautilus to venture to", "show itself. So it remained prudently below. At", "last about noon, we were in the waters of the Red", "Sea. I would not even seek to understand the", "caprice which had decided Captain Nemo upon", "entering the gulf. But I quite approved of the", "Nautilus entering it. Its speed was lessened:", "sometimes it kept on the surface, sometimes it", "dived to avoid a vessel, and thus I was able to", "observe the upper and lower parts of this curious", "sea."};
    int width = 25;
    TextEditor* pObj = new TextEditor();
    clock_t start = clock();
    vector<string> result = pObj->twoColumn(text, width);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"We passed along the", "which, in the Arab", "Arabian coast of Mahrah", "tongue, means The Gate of", "and Hadramaut, for a", "Tears. To twenty miles in", "distance of six miles,", "breadth, it is only", "its undulating line of", "thirtytwo in length. And", "mountains being", "for the Nautilus,", "occasionally relieved by", "starting at full speed,", "some ancient ruin. The", "the crossing was scarcely", "5th of February we at", "the work of an hour. But", "last entered the Gulf of", "I saw nothing, not even", "Aden, a perfect funnel", "the Island of Perim, with", "introduced into the neck", "which the British", "of Babel mandeb, through", "Government has fortified", "which the Indian waters", "the position of Aden.", "entered the Red Sea. The", "There were too many", "6th of February, the", "English or French", "Nautilus floated in sight", "steamers of the line of", "of Aden, perched upon a", "Suez to Bombay, Calcutta", "promontory which a narrow", "to Melbourne, and from", "isthmus joins to the", "Bourbon to the Mauritius,", "mainland, a kind of", "furrowing this narrow", "inaccessible Gibraltar,", "passage, for the Nautilus", "the fortifications of", "to venture to show", "which were rebuilt by the", "itself. So it remained", "English after taking", "prudently below. At last", "possession in 1839. I", "about noon, we were in", "caught a glimpse of the", "the waters of the Red", "octagon minarets of this", "Sea. I would not even", "town, which was at one", "seek to understand the", "time the richest", "caprice which had decided", "commercial magazine on", "Captain Nemo upon", "the coast. I certainly", "entering the gulf. But I", "thought that Captain", "quite approved of the", "Nemo, arrived at this", "Nautilus entering it. Its", "point, would back out", "speed was lessened:", "again; but I was", "sometimes it kept on the", "mistaken, for be did no", "surface, sometimes it", "such thing, much to my", "dived to avoid a vessel,", "surprise. The next day,", "and thus I was able to", "the 7th of February, we", "observe the upper and", "entered the Straits of", "lower parts of this", "Babelmandeb, the name of", "curious sea."};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> text = {" In mist or cloud on mast or shroud It perchd for", "vespers nine, Whiles all the night thro fogsmoke", "white Glimmerd the white moonshine. God save", "thee ancyent Marinere! From the fiends that", "plague thee thus Why lookst thou so? with", "my cross bow, I shot the Albatross."};
    int width = 17;
    TextEditor* pObj = new TextEditor();
    clock_t start = clock();
    vector<string> result = pObj->twoColumn(text, width);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"In mist or cloud", "God save thee", "on mast or shroud", "ancyent Marinere!", "It perchd for", "From the fiends", "vespers nine,", "that plague thee", "Whiles all the", "thus Why lookst", "night thro", "thou so? with my", "fogsmoke white", "cross bow, I shot", "Glimmerd the", "the Albatross.", "white moonshine."};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> text = {" .Ch. .1. .1. The Tao that can be trodden is not", "enduring and unchanging Tao. The name that can be", "named is not the enduring and unchanging name. 2.", "Conceived of as having no name, it is the", "Originator of heaven and earth; conceived of as", "having a name, it is the Mother of all things. 3.", "Always without desire we must be found, If its", "deep mystery we would sound; But if desire always", "within us be, Its outer fringe is all that we", "shall see. 4. Under these two aspects, it is", "really the same; but as development takes place,", "it receives the different names. Together we call", "them the Mystery. Where the Mystery is the deepest", "is the gate of all that is subtle and wonderful.", "2. 1. All in the world know the beauty of the", "beautiful, and in doing this they have the idea", "of what ugliness is; they all know the skill of", "the skilful, and in doing this they have the idea", "of what the want of skill is. 2. So it is that", "existence and nonexistence give birth the one to", "the idea of the other; that difficulty and ease", "produce the one the idea of the other; that", "length and shortness fashion out the one the", "figure of the other; that the ideas of height", "and lowness arise from the contrast of the one", "with the other; that the musical notes and tones", "become harmonious through the relation of one with", "another; and that being before and behind give the", "idea of one following another. 3. Therefore the", "sage manages affairs without doing anything, and", "conveys his instructions without the use of", "speech. 4. All things spring up, and there is not", "one which declines to show itself; they grow, and", "there is no claim made for their ownership; they", "go through their processes, and there is no", "expectation of a reward for the results. The", "work is accomplished, and there is no resting in", "it as an achievement. The work is done, but how", "no one can see; Tis this that makes the power not", "cease to be."};
    int width = 50;
    TextEditor* pObj = new TextEditor();
    clock_t start = clock();
    vector<string> result = pObj->twoColumn(text, width);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".Ch. .1. .1. The Tao that can be trodden is not", "the idea of the other; that difficulty and ease", "enduring and unchanging Tao. The name that can be", "produce the one the idea of the other; that length", "named is not the enduring and unchanging name. 2.", "and shortness fashion out the one the figure of", "Conceived of as having no name, it is the", "the other; that the ideas of height and lowness", "Originator of heaven and earth; conceived of as", "arise from the contrast of the one with the other;", "having a name, it is the Mother of all things. 3.", "that the musical notes and tones become harmonious", "Always without desire we must be found, If its", "through the relation of one with another; and that", "deep mystery we would sound; But if desire always", "being before and behind give the idea of one", "within us be, Its outer fringe is all that we", "following another. 3. Therefore the sage manages", "shall see. 4. Under these two aspects, it is", "affairs without doing anything, and conveys his", "really the same; but as development takes place,", "instructions without the use of speech. 4. All", "it receives the different names. Together we call", "things spring up, and there is not one which", "them the Mystery. Where the Mystery is the deepest", "declines to show itself; they grow, and there is", "is the gate of all that is subtle and wonderful.", "no claim made for their ownership; they go through", "2. 1. All in the world know the beauty of the", "their processes, and there is no expectation of a", "beautiful, and in doing this they have the idea of", "reward for the results. The work is accomplished,", "what ugliness is; they all know the skill of the", "and there is no resting in it as an achievement.", "skilful, and in doing this they have the idea of", "The work is done, but how no one can see; Tis this", "what the want of skill is. 2. So it is that", "that makes the power not cease to be.", "existence and nonexistence give birth the one to"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> text = {" Tea began as a medicine and grew into a beverage.", "In China, in the eighth century, it entered the", "realm of poetry as one of the polite amusements.", "The fifteenth century saw Japan ennoble it into a", "religion of aestheticismTeaism. Teaism is a cult", "founded on the adoration of the beautiful among", "the sordid facts of everyday existence. It", "inculcates purity and harmony, the mystery of", "mutual charity, the romanticism of the social", "order. It is essentially a worship of the", "Imperfect, as it is a tender attempt to accomplish", "something possible in this impossible thing we", "know as life. The Philosophy of Tea is not mere", "aestheticism in the ordinary acceptance of the", "term, for it expresses conjointly with ethics and", "religion our whole point of view about man and", "nature. It is hygiene, for it enforces", "cleanliness; it is economics, for it shows comfort", "in simplicity rather than in the complex and", "costly; it is moral geometry, inasmuch as it", "defines our sense of proportion to the universe.", "It represents the true spirit of Eastern democracy", "by making all its votaries aristocrats in taste.", "The long isolation of Japan from the rest of the", "world, so conducive to introspection, has been", "highly favourable to the development of Teaism.", "Our home and habits, costume and cuisine,", "porcelain, lacquer, paintingour very", "literatureall have been subject to its", "influence. No student of Japanese culture could", "ever ignore its presence. It has permeated the", "elegance of noble boudoirs, and entered the abode", "of the humble. Our peasants have learned to", "arrange flowers, our meanest labourer to offer his", "salutation to the rocks and waters. In our common", "parlance we speak of the man with no tea in him,", "when he is insusceptible to the seriocomic", "interests of the personal drama. Again we", "stigmatise the untamed aesthete who, regardless of", "the mundane tragedy, runs riot in the springtide", "of emancipated emotions, as one with too much", "tea in him."};
    int width = 25;
    TextEditor* pObj = new TextEditor();
    clock_t start = clock();
    vector<string> result = pObj->twoColumn(text, width);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Tea began as a medicine", "universe. It represents", "and grew into a beverage.", "the true spirit of", "In China, in the eighth", "Eastern democracy by", "century, it entered the", "making all its votaries", "realm of poetry as one of", "aristocrats in taste. The", "the polite amusements.", "long isolation of Japan", "The fifteenth century saw", "from the rest of the", "Japan ennoble it into a", "world, so conducive to", "religion of", "introspection, has been", "aestheticismTeaism.", "highly favourable to the", "Teaism is a cult founded", "development of Teaism.", "on the adoration of the", "Our home and habits,", "beautiful among the", "costume and cuisine,", "sordid facts of everyday", "porcelain, lacquer,", "existence. It inculcates", "paintingour very", "purity and harmony, the", "literatureall have been", "mystery of mutual", "subject to its influence.", "charity, the romanticism", "No student of Japanese", "of the social order. It", "culture could ever ignore", "is essentially a worship", "its presence. It has", "of the Imperfect, as it", "permeated the elegance of", "is a tender attempt to", "noble boudoirs, and", "accomplish something", "entered the abode of the", "possible in this", "humble. Our peasants have", "impossible thing we know", "learned to arrange", "as life. The Philosophy", "flowers, our meanest", "of Tea is not mere", "labourer to offer his", "aestheticism in the", "salutation to the rocks", "ordinary acceptance of", "and waters. In our common", "the term, for it", "parlance we speak of the", "expresses conjointly with", "man with no tea in him,", "ethics and religion our", "when he is insusceptible", "whole point of view about", "to the seriocomic", "man and nature. It is", "interests of the personal", "hygiene, for it enforces", "drama. Again we", "cleanliness; it is", "stigmatise the untamed", "economics, for it shows", "aesthete who, regardless", "comfort in simplicity", "of the mundane tragedy,", "rather than in the", "runs riot in the", "complex and costly; it is", "springtide of emancipated", "moral geometry, inasmuch", "emotions, as one with too", "as it defines our sense", "much tea in him.", "of proportion to the"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> text = {" THERE was once a velveteen rabbit, and in the", "beginning he was really splendid. He was fat and", "bunchy, as a rabbit should be; his coat was", "spotted brown and white, he had real thread", "whiskers, and his ears were lined with pink", "sateen. On Christmas morning, when he sat wedged", "in the top of the Boys stocking, with a sprig of", "holly between his paws, the effect was charming.", "There were other things in the stocking, nuts and", "oranges and a toy engine, and chocolate almonds", "and a clockwork mouse, but the Rabbit was quite", "the best of all. For at least two hours the Boy", "loved him, and then Aunts and Uncles came to", "dinner, and there was a great rustling of tissue", "paper and unwrapping of parcels, and in the", "excitement of looking at all the new presents the", "Velveteen Rabbit was forgotten. For a long time he", "lived in the toy cupboard or on the nursery floor,", "and no one thought very much about him. He was", "naturally shy, and being only made of velveteen,", "some of the more expensive toys quite snubbed him.", "The mechanical toys were very superior, and looked", "down upon every one else; they were full of modern", "ideas, and pretended they were real. The model", "boat, who had lived through two seasons and lost", "most of his paint, caught the tone from them and", "never missed an opportunity of referring to his", "rigging in technical terms. The Rabbit could not", "claim to be a model of anything, for he didnt", "know that real rabbits existed; he thought they", "were all stuffed with sawdust like himself, and he", "understood that sawdust was quite outofdate and", "should never be mentioned in modern circles. Even", "Timothy, the jointed wooden lion, who was made by", "the disabled soldiers, and should have had broader", "views, put on airs and pretended he was connected", "with Government. Between them all the poor little", "Rabbit was made to feel himself very insignificant", "and commonplace, and the only person who was kind", "to him at all was the Skin Horse. The Skin Horse", "had lived longer in the nursery than any of the", "others. He was so old that his brown coat was bald", "in patches and showed the seams underneath, and", "most of the hairs in his tail had been pulled out", "to string bead necklaces. He was wise, for he had", "seen a long succession of mechanical toys arrive", "to boast and swagger, and byandby break their", "mainsprings and pass away, and he knew that they"};
    int width = 13;
    TextEditor* pObj = new TextEditor();
    clock_t start = clock();
    vector<string> result = pObj->twoColumn(text, width);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"THERE was", "who had lived", "once a", "through two", "velveteen", "seasons and", "rabbit, and", "lost most of", "in the", "his paint,", "beginning he", "caught the", "was really", "tone from", "splendid. He", "them and", "was fat and", "never missed", "bunchy, as a", "an", "rabbit should", "opportunity", "be; his coat", "of referring", "was spotted", "to his", "brown and", "rigging in", "white, he had", "technical", "real thread", "terms. The", "whiskers, and", "Rabbit could", "his ears were", "not claim to", "lined with", "be a model of", "pink sateen.", "anything, for", "On Christmas", "he didnt know", "morning, when", "that real", "he sat wedged", "rabbits", "in the top of", "existed; he", "the Boys", "thought they", "stocking,", "were all", "with a sprig", "stuffed with", "of holly", "sawdust like", "between his", "himself, and", "paws, the", "he understood", "effect was", "that sawdust", "charming.", "was quite", "There were", "outofdate and", "other things", "should never", "in the", "be mentioned", "stocking,", "in modern", "nuts and", "circles. Even", "oranges and a", "Timothy, the", "toy engine,", "jointed", "and chocolate", "wooden lion,", "almonds and a", "who was made", "clockwork", "by the", "mouse, but", "disabled", "the Rabbit", "soldiers, and", "was quite the", "should have", "best of all.", "had broader", "For at least", "views, put on", "two hours the", "airs and", "Boy loved", "pretended he", "him, and then", "was connected", "Aunts and", "with", "Uncles came", "Government.", "to dinner,", "Between them", "and there was", "all the poor", "a great", "little Rabbit", "rustling of", "was made to", "tissue paper", "feel himself", "and", "very", "unwrapping of", "insignificant", "parcels, and", "and", "in the", "commonplace,", "excitement of", "and the only", "looking at", "person who", "all the new", "was kind to", "presents the", "him at all", "Velveteen", "was the Skin", "Rabbit was", "Horse. The", "forgotten.", "Skin Horse", "For a long", "had lived", "time he lived", "longer in the", "in the toy", "nursery than", "cupboard or", "any of the", "on the", "others. He", "nursery", "was so old", "floor, and no", "that his", "one thought", "brown coat", "very much", "was bald in", "about him. He", "patches and", "was naturally", "showed the", "shy, and", "seams", "being only", "underneath,", "made of", "and most of", "velveteen,", "the hairs in", "some of the", "his tail had", "more", "been pulled", "expensive", "out to string", "toys quite", "bead", "snubbed him.", "necklaces. He", "The", "was wise, for", "mechanical", "he had seen a", "toys were", "long", "very", "succession of", "superior, and", "mechanical", "looked down", "toys arrive", "upon every", "to boast and", "one else;", "swagger, and", "they were", "byandby break", "full of", "their", "modern ideas,", "mainsprings", "and pretended", "and pass", "they were", "away, and he", "real. The", "knew that", "model boat,", "they"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> text = {" At last Mr. Bessel chanced upon a place where a", "little crowd of such disembodied silent creatures", "was gathered, and thrusting through them he saw", "below a brightlylit room, and four or five quiet", "gentlemen and a woman, a stoutish woman dressed in", "black bombazine and sitting awkwardly in a chair", "with her head thrown back. He knew her from her", "portraits to be Mrs. Bullock, the medium. And he", "perceived that tracts and structures in her brain", "glowed and stirred as he had seen the pineal eye", "in the brain of Mr. Vincey glow. The light was", "very fitful; sometimes it was a broad", "illumination, and sometimes merely a faint", "twilight spot, and it shifted slowly about her", "brain. She kept on talking and writing with one", "hand. And Mr. Bessel saw that the crowding shadows", "of men about him, and a great multitude of the", "shadow spirits of that shadowland, were all", "striving and thrusting to touch the lighted", "regions of her brain. As one gained her brain or", "another was thrust away, her voice and the writing", "of her hand changed. So that what she said was", "disorderly and confused for the most part; now a", "fragment of one souls message, and now a fragment", "of anothers, and now she babbled the insane", "fancies of the spirits of vain desire. Then Mr.", "Bessel understood that she spoke for the spirit", "that had touch of her, and he began to struggle", "very furiously towards her. But he was on the", "outside of the crowd and at that time he could not", "reach her, and at last, growing anxious, he went", "away to find what had happened meanwhile to his", "body. For a long time he went to and fro seeking", "it in vain and fearing that it must have been", "killed, and then he found it at the bottom of the", "shaft in Baker Street, writhing furiously and", "cursing with pain. Its leg and an arm and two ribs", "had been broken by its fall. Moreover, the evil", "spirit was angry because his time had been so", "short and because of the painmaking violent", "movements and casting his body about."};
    int width = 23;
    TextEditor* pObj = new TextEditor();
    clock_t start = clock();
    vector<string> result = pObj->twoColumn(text, width);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"At last Mr. Bessel", "away, her voice and the", "chanced upon a place", "writing of her hand", "where a little crowd of", "changed. So that what", "such disembodied silent", "she said was disorderly", "creatures was gathered,", "and confused for the", "and thrusting through", "most part; now a", "them he saw below a", "fragment of one souls", "brightlylit room, and", "message, and now a", "four or five quiet", "fragment of anothers,", "gentlemen and a woman,", "and now she babbled the", "a stoutish woman", "insane fancies of the", "dressed in black", "spirits of vain desire.", "bombazine and sitting", "Then Mr. Bessel", "awkwardly in a chair", "understood that she", "with her head thrown", "spoke for the spirit", "back. He knew her from", "that had touch of her,", "her portraits to be", "and he began to", "Mrs. Bullock, the", "struggle very furiously", "medium. And he", "towards her. But he was", "perceived that tracts", "on the outside of the", "and structures in her", "crowd and at that time", "brain glowed and", "he could not reach her,", "stirred as he had seen", "and at last, growing", "the pineal eye in the", "anxious, he went away", "brain of Mr. Vincey", "to find what had", "glow. The light was", "happened meanwhile to", "very fitful; sometimes", "his body. For a long", "it was a broad", "time he went to and fro", "illumination, and", "seeking it in vain and", "sometimes merely a", "fearing that it must", "faint twilight spot,", "have been killed, and", "and it shifted slowly", "then he found it at the", "about her brain. She", "bottom of the shaft in", "kept on talking and", "Baker Street, writhing", "writing with one hand.", "furiously and cursing", "And Mr. Bessel saw that", "with pain. Its leg and", "the crowding shadows of", "an arm and two ribs had", "men about him, and a", "been broken by its", "great multitude of the", "fall. Moreover, the", "shadow spirits of that", "evil spirit was angry", "shadowland, were all", "because his time had", "striving and thrusting", "been so short and", "to touch the lighted", "because of the", "regions of her brain.", "painmaking violent", "As one gained her brain", "movements and casting", "or another was thrust", "his body about."};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> text = {" On the eve of the decisive day, Maria Gavrilovna", "did not sleep the whole night; she packed and tied", "up her linen and other articles of apparel, wrote", "a long letter to a sentimental young lady, a", "friend of hers, and another to her parents. She", "took leave of them in the most touching terms,", "urged the invincible strength of passion as an", "excuse for the step she was taking, and wound up", "with the assurance that she should consider it the", "happiest moment of her life, when she should be", "allowed to throw herself at the feet of her dear", "parents."};
    int width = 12;
    TextEditor* pObj = new TextEditor();
    clock_t start = clock();
    vector<string> result = pObj->twoColumn(text, width);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"On the eve", "terms, urged", "of the", "the", "decisive", "invincible", "day, Maria", "strength of", "Gavrilovna", "passion as", "did not", "an excuse", "sleep the", "for the step", "whole night;", "she was", "she packed", "taking, and", "and tied up", "wound up", "her linen", "with the", "and other", "assurance", "articles of", "that she", "apparel,", "should", "wrote a long", "consider it", "letter to a", "the happiest", "sentimental", "moment of", "young lady,", "her life,", "a friend of", "when she", "hers, and", "should be", "another to", "allowed to", "her parents.", "throw", "She took", "herself at", "leave of", "the feet of", "them in the", "her dear", "most", "parents.", "touching"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> text = {"Such a preposterous use of !punctuation! !!!", "Who would write ... something like this ???"};
    int width = 17;
    TextEditor* pObj = new TextEditor();
    clock_t start = clock();
    vector<string> result = pObj->twoColumn(text, width);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Such a", "write ...", "preposterous use", "something like", "of !punctuation!", "this ???", "!!! Who would"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> text = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    int width = 50;
    TextEditor* pObj = new TextEditor();
    clock_t start = clock();
    vector<string> result = pObj->twoColumn(text, width);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> text = {" I will arise and go now, and go to Innisfree, And", "a small cabin build there ,of clay and wattles", "made: Nine beanrows will I have there ,a hive for", "the honeybee, And live alone in the beeloud", "glade. And I shall have some peace there, for", "peace comes dropping slow, Dropping from the veils", "of the morning to where the cricket sings; There", "midnights all a glimmer, and noon a purple glow,", "And evening full of the linnets wings. I will", "arise and go now, for always night and day I hear", "lake water lapping with low sounds by the shore;", "While I stand on the roadway, or on the pavements", "grey, I hear it in the deep hearts core."};
    int width = 25;
    TextEditor* pObj = new TextEditor();
    clock_t start = clock();
    vector<string> result = pObj->twoColumn(text, width);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"I will arise and go now,", "There midnights all a", "and go to Innisfree, And", "glimmer, and noon a", "a small cabin build there", "purple glow, And evening", ",of clay and wattles", "full of the linnets", "made: Nine beanrows will", "wings. I will arise and", "I have there ,a hive for", "go now, for always night", "the honeybee, And live", "and day I hear lake water", "alone in the beeloud", "lapping with low sounds", "glade. And I shall have", "by the shore; While I", "some peace there, for", "stand on the roadway, or", "peace comes dropping", "on the pavements grey, I", "slow, Dropping from the", "hear it in the deep", "veils of the morning to", "hearts core.", "where the cricket sings;"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> text = {" When Arthur was King of Britain, and so reigned,", "it befell one wintertide he held at Camelot his", "Christmas feast, with all the knights of the Round", "Table, full fifteen days. All was joy then in hall", "and chamber; and when the New Year came, it was", "kept with great joy. Rich gifts were given and", "many lords and ladies took their seats at the", "table, where Queen Guenever sat at the kings", "side, and a lady fairer of form might no one say", "he had ever before seen. But King Arthur would not", "eat nor would he long sit, until he should have", "witnessed some wondrous adventure. The first", "course was served with a blowing of trumpets, and", "before each two guests were set twelve dishes and", "bright wine, for there was no want of anything."};
    int width = 49;
    TextEditor* pObj = new TextEditor();
    clock_t start = clock();
    vector<string> result = pObj->twoColumn(text, width);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"When Arthur was King of Britain, and so reigned,", "side, and a lady fairer of form might no one say", "it befell one wintertide he held at Camelot his", "he had ever before seen. But King Arthur would", "Christmas feast, with all the knights of the", "not eat nor would he long sit, until he should", "Round Table, full fifteen days. All was joy then", "have witnessed some wondrous adventure. The first", "in hall and chamber; and when the New Year came,", "course was served with a blowing of trumpets, and", "it was kept with great joy. Rich gifts were given", "before each two guests were set twelve dishes and", "and many lords and ladies took their seats at the", "bright wine, for there was no want of anything.", "table, where Queen Guenever sat at the kings"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> text = {" Thus arrayed, the Green Knight entered the hall,", "without saluting anyone, and asked for the", "governor of the company, and looked about him for", "the most renowned of them. Much they marvelled to", "see a man and a horse as green as grass; never", "before had they seen such a sight as this; they", "were afraid to answer, and were as silent as if", "sleep had taken hold of them, some from fear,", "others from courtesy. King Arthur, who was never", "afraid, saluted the Green Knight, and bade him", "welcome. The Green Knight said that he would not", "tarry; he was seeking the most valiant, that he", "might prove him. He came in peace; but he had a", "halberd at home and a helmet too. King Arthur", "assured him that he should not fail to find an", "opponent worthy of him."};
    int width = 14;
    TextEditor* pObj = new TextEditor();
    clock_t start = clock();
    vector<string> result = pObj->twoColumn(text, width);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Thus arrayed,", "from fear,", "the Green", "others from", "Knight entered", "courtesy. King", "the hall,", "Arthur, who", "without", "was never", "saluting", "afraid,", "anyone, and", "saluted the", "asked for the", "Green Knight,", "governor of", "and bade him", "the company,", "welcome. The", "and looked", "Green Knight", "about him for", "said that he", "the most", "would not", "renowned of", "tarry; he was", "them. Much", "seeking the", "they marvelled", "most valiant,", "to see a man", "that he might", "and a horse as", "prove him. He", "green as", "came in peace;", "grass; never", "but he had a", "before had", "halberd at", "they seen such", "home and a", "a sight as", "helmet too.", "this; they", "King Arthur", "were afraid to", "assured him", "answer, and", "that he should", "were as silent", "not fail to", "as if sleep", "find an", "had taken hold", "opponent", "of them, some", "worthy of him."};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> text = {"A b c 9 3 2 64 ", "3 4 r b. b, b; b: 112", "fd jr k k g h g r w e ", " d f f fr jrj w e r a a s k ffk k"};
    int width = 5;
    TextEditor* pObj = new TextEditor();
    clock_t start = clock();
    vector<string> result = pObj->twoColumn(text, width);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A b c", "h g r", "9 3 2", "w e d", "64 3", "f f", "4 r", "fr", "b. b,", "jrj w", "b; b:", "e r a", "112", "a s k", "fd jr", "ffk k", "k k g"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> text = {" Forsaking monastic tradition, twelve jovial", " friars gave up their vocation for a questionable", " existence on the flying trapeze. "};
    int width = 25;
    TextEditor* pObj = new TextEditor();
    clock_t start = clock();
    vector<string> result = pObj->twoColumn(text, width);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Forsaking monastic", "vocation for a", "tradition, twelve jovial", "questionable existence on", "friars gave up their", "the flying trapeze."};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> text = {" Two roads diverged in a", "yellow wood, And sorry I could", "not travel both And be one", "traveler, long I stood And", "looked down one as far as I", "could To where it bent in the", "undergrowth; Then took the", "other, as just as fair And", "having perhaps the better", "claim, Because it was grassy", "and wanted wear; Though as for", "that, the passing there Had", "worn them really about the", "same, And both that morning", "equally lay In leaves no step", "had trodden black Oh, I kept", "the first for another day! Yet", "knowing how way leads on to", "way, I doubted if I should", "ever come back. I shall be", "telling this with a sigh", "Somewhere ages and ages hence:", "Two roads diverged in a wood,", "and I I took the one less", "traveled by, And that has made", "all the difference.", "Robert Frost"};
    int width = 45;
    TextEditor* pObj = new TextEditor();
    clock_t start = clock();
    vector<string> result = pObj->twoColumn(text, width);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Two roads diverged in a yellow wood, And", "equally lay In leaves no step had trodden", "sorry I could not travel both And be one", "black Oh, I kept the first for another day!", "traveler, long I stood And looked down one as", "Yet knowing how way leads on to way, I", "far as I could To where it bent in the", "doubted if I should ever come back. I shall", "undergrowth; Then took the other, as just as", "be telling this with a sigh Somewhere ages", "fair And having perhaps the better claim,", "and ages hence: Two roads diverged in a wood,", "Because it was grassy and wanted wear; Though", "and I I took the one less traveled by, And", "as for that, the passing there Had worn them", "that has made all the difference. Robert", "really about the same, And both that morning", "Frost"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> text = {" I laid me down upon a bank,", " Where Love lay sleeping ;I", "heard among the rushes dank ", "Weeping, weeping. Then I", "went to the heath and the", "wild, .To the thistles and", "thorns of the waste; And they", "told me how they were", "beguiled, Driven out, and", "compelled to the chaste. I", "went to the Garden of Love, ", "And saw what I never had seen;", "A Chapel was built in the", "midst, Where I used to play", "on the green. And the gates", "of this Chapel were shut ", "And Thou shalt not, writ", "over the door; So I turned to", "the Garden of Love That so", "many sweet flowers bore. ", "And I saw it was filled with", "graves, And tombstones", "where flowers should be; And", "priests in black gowns were", "walking their rounds, And", "binding with briars my joys", "and desires. "};
    int width = 15;
    TextEditor* pObj = new TextEditor();
    clock_t start = clock();
    vector<string> result = pObj->twoColumn(text, width);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"I laid me down", "used to play on", "upon a bank,", "the green. And", "Where Love lay", "the gates of", "sleeping ;I", "this Chapel", "heard among the", "were shut And", "rushes dank", "Thou shalt not,", "Weeping,", "writ over the", "weeping. Then I", "door; So I", "went to the", "turned to the", "heath and the", "Garden of Love", "wild, .To the", "That so many", "thistles and", "sweet flowers", "thorns of the", "bore. And I saw", "waste; And they", "it was filled", "told me how", "with graves,", "they were", "And tombstones", "beguiled,", "where flowers", "Driven out, and", "should be; And", "compelled to", "priests in", "the chaste. I", "black gowns", "went to the", "were walking", "Garden of Love,", "their rounds,", "And saw what I", "And binding", "never had seen;", "with briars my", "A Chapel was", "joys and", "built in the", "desires.", "midst, Where I"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> text = {" Four score and seven years ago our fathers", "brought forth on this continent, a new nation,", "conceived in Liberty, and dedicated to the", "proposition that all men are created equal. Now we", "are engaged in a great civil war, testing whether", "that nation or any nation so conceived and so", "dedicated, can long endure. We are met on a great", "battlefield of that war. We have come to dedicate", "a portion of that field, as a final resting place", "for those who here gave their lives that that", "nation might live. It is altogether fitting and", "proper that we should do this. But, in a larger", "sense, we can not dedicate we can not consecrate", " we can not hallow this ground. The brave men,", "living and dead, who struggled here, have", "consecrated it, far above our poor power to add or", "detract. The world will little note, nor long", "remember what we say here, but it can never forget", "what they did here. It is for us the living,", "rather, to be dedicated here to the unfinished", "work which they who fought here have thus far so", "nobly advanced. It is rather for us to be here", "dedicated to the great task remaining before us ", "that from these honored dead we take increased", "devotion to that cause for which they gave the", "last full measure of devotion that we here", "highly resolve that these dead shall not have died", "in vain that this nation, under God, shall have", "a new birth of freedom and that government of", "the people, by the people, for the people, shall", "not perish from the earth."};
    int width = 50;
    TextEditor* pObj = new TextEditor();
    clock_t start = clock();
    vector<string> result = pObj->twoColumn(text, width);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Four score and seven years ago our fathers brought", "poor power to add or detract. The world will", "forth on this continent, a new nation, conceived", "little note, nor long remember what we say here,", "in Liberty, and dedicated to the proposition that", "but it can never forget what they did here. It is", "all men are created equal. Now we are engaged in a", "for us the living, rather, to be dedicated here to", "great civil war, testing whether that nation or", "the unfinished work which they who fought here", "any nation so conceived and so dedicated, can long", "have thus far so nobly advanced. It is rather for", "endure. We are met on a great battlefield of that", "us to be here dedicated to the great task", "war. We have come to dedicate a portion of that", "remaining before us that from these honored dead", "field, as a final resting place for those who here", "we take increased devotion to that cause for which", "gave their lives that that nation might live. It", "they gave the last full measure of devotion that", "is altogether fitting and proper that we should do", "we here highly resolve that these dead shall not", "this. But, in a larger sense, we can not dedicate", "have died in vain that this nation, under God,", "we can not consecrate we can not hallow this", "shall have a new birth of freedom and that", "ground. The brave men, living and dead, who", "government of the people, by the people, for the", "struggled here, have consecrated it, far above our", "people, shall not perish from the earth."};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> text = {" Four score and seven years ago our fathers", "brought forth on this continent, a new", "nation, conceived in Liberty, and dedicated", "to the proposition that all men are created", "equal. Now we are engaged in a great civil", "war, testing whether that nation or any", "nation so conceived and so dedicated, can", "long endure. We are met on a great", "battlefield of that war. We have come to", "dedicate a portion of that field, as a final", "resting place for those who here gave their", "lives that that nation might live. It is", "altogether fitting and proper that we should", "do this. But, in a larger sense, we can not", "dedicate we can not consecrate we can not", "hallow this ground. The brave men, living", "and dead, who struggled here, have", "consecrated it, far above our poor power to", "add or detract. The world will little note,", "nor long remember what we say here, but it", "can never forget what they did here. It is", "for us the living, rather, to be dedicated", "here to the unfinished work which they who", "fought here have thus far so nobly advanced.", "It is rather for us to be here dedicated to", "the great task remaining before us that", "from these honored dead we take increased", "devotion to that cause for which they gave", "the last full measure of devotion that we", "here highly resolve that these dead shall not", "have died in vain that this nation, under", "God, shall have a new birth of freedom and", "that government of the people, by the people,", "for the people, shall not perish from the", "earth."};
    int width = 50;
    TextEditor* pObj = new TextEditor();
    clock_t start = clock();
    vector<string> result = pObj->twoColumn(text, width);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Four score and seven years ago our fathers brought", "poor power to add or detract. The world will", "forth on this continent, a new nation, conceived", "little note, nor long remember what we say here,", "in Liberty, and dedicated to the proposition that", "but it can never forget what they did here. It is", "all men are created equal. Now we are engaged in a", "for us the living, rather, to be dedicated here to", "great civil war, testing whether that nation or", "the unfinished work which they who fought here", "any nation so conceived and so dedicated, can long", "have thus far so nobly advanced. It is rather for", "endure. We are met on a great battlefield of that", "us to be here dedicated to the great task", "war. We have come to dedicate a portion of that", "remaining before us that from these honored dead", "field, as a final resting place for those who here", "we take increased devotion to that cause for which", "gave their lives that that nation might live. It", "they gave the last full measure of devotion that", "is altogether fitting and proper that we should do", "we here highly resolve that these dead shall not", "this. But, in a larger sense, we can not dedicate", "have died in vain that this nation, under God,", "we can not consecrate we can not hallow this", "shall have a new birth of freedom and that", "ground. The brave men, living and dead, who", "government of the people, by the people, for the", "struggled here, have consecrated it, far above our", "people, shall not perish from the earth."};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> text = {" ", " ", " ", " ", " ", " "};
    int width = 7;
    TextEditor* pObj = new TextEditor();
    clock_t start = clock();
    vector<string> result = pObj->twoColumn(text, width);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> text = {" I WONDER by my troth, what thou,", "and I Did, till we lovd? were we", "not weand till then? But suckd on", "countrey pleasures, childishly? Or", "snorted we in the seaven sleepers", "den? Twas so; But this, all", "pleasures fancies bee. If ever any", "beauty I did see, Which I desird,", "and got, twas but a dreame of", "thee. And now good morrow to our", "waking soules, Which watch not one", "another out of feare; For love, all", "love of other sights controules,", "And makes one little roome, an", "every where. Let seadiscoverers to", "new worlds have gone, Let Maps to", "other, worlds on worlds have", "showne, Let us possesse one world,", "each hath one, and is one. My face", "in thine eye, thine in mine", "appeares, And true plaine hearts", "doe in the faces rest, Where can we", "finde two better hemispheares", "Without sharpe North, without", "declining West? What ever dyes, was", "not mixt equally; If our two loves", "be one, or, thou and I Love so", "alike, that none doe slacken, none", "can die.", "John Donne"};
    int width = 45;
    TextEditor* pObj = new TextEditor();
    clock_t start = clock();
    vector<string> result = pObj->twoColumn(text, width);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"I WONDER by my troth, what thou, and I Did,", "seadiscoverers to new worlds have gone, Let", "till we lovd? were we not weand till then?", "Maps to other, worlds on worlds have showne,", "But suckd on countrey pleasures, childishly?", "Let us possesse one world, each hath one, and", "Or snorted we in the seaven sleepers den?", "is one. My face in thine eye, thine in mine", "Twas so; But this, all pleasures fancies bee.", "appeares, And true plaine hearts doe in the", "If ever any beauty I did see, Which I desird,", "faces rest, Where can we finde two better", "and got, twas but a dreame of thee. And now", "hemispheares Without sharpe North, without", "good morrow to our waking soules, Which watch", "declining West? What ever dyes, was not mixt", "not one another out of feare; For love, all", "equally; If our two loves be one, or, thou", "love of other sights controules, And makes", "and I Love so alike, that none doe slacken,", "one little roome, an every where. Let", "none can die. John Donne"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> text = {"a a a a a a a a a a a a a a a a a a a a a a a a a", "b b b b b b b b b b b b b b b b b b b b b b b b b ", "a a a a a a a a a a a a a a a a a a a a a a a a a", "b b b b b b b b b b b b b b b b b b b b b b b b b ", "a a a a a a a a a a a a a a a a a a a a a a a a a", "b b b b b b b b b b b b b b b b b b b b b b b b b ", "a a a a a a a a a a a a a a a a a a a a a a a a a", "b b b b b b b b b b b b b b b b b b b b b b b b b ", "a a a a a a a a a a a a a a a a a a a a a a a a a", "b b b b b b b b b b b b b b b b b b b b b b b b b ", "a a a a a a a a a a a a a a a a a a a a a a a a a", "b b b b b b b b b b b b b b b b b b b b b b b b b ", "a a a a a a a a a a a a a a a a a a a a a a a a a", "b b b b b b b b b b b b b b b b b b b b b b b b b ", "a a a a a a a a a a a a a a a a a a a a a a a a a", "b b b b b b b b b b b b b b b b b b b b b b b b b ", "a a a a a a a a a a a a a a a a a a a a a a a a a", "b b b b b b b b b b b b b b b b b b b b b b b b b ", "a a a a a a a a a a a a a a a a a a a a a a a a a", "b b b b b b b b b b b b b b b b b b b b b b b b b ", "a a a a a a a a a a a a a a a a a a a a a a a a a", "b b b b b b b b b b b b b b b b b b b b b b b b b ", "a a a a a a a a a a a a a a a a a a a a a a a a a", "b b b b b b b b b b b b b b b b b b b b b b b b b ", "a a a a a a a a a a a a a a a a a a a a a a a a a", "b b b b b b b b b b b b b b b b b b b b b b b b b ", "a a a a a a a a a a a a a a a a a a a a a a a a a", "b b b b b b b b b b b b b b b b b b b b b b b b b ", "a a a a a a a a a a a a a a a a a a a a a a a a a", "b b b b b b b b b b b b b b b b b b b b b b b b b ", "a a a a a a a a a a a a a a a a a a a a a a a a a", "b b b b b b b b b b b b b b b b b b b b b b b b b ", "a a a a a a a a a a a a a a a a a a a a a a a a a", "b b b b b b b b b b b b b b b b b b b b b b b b b ", "a a a a a a a a a a a a a a a a a a a a a a a a a", "b b b b b b b b b b b b b b b b b b b b b b b b b ", "a a a a a a a a a a a a a a a a a a a a a a a a a", "b b b b b b b b b b b b b b b b b b b b b b b b b ", "a a a a a a a a a a a a a a a a a a a a a a a a a", "b b b b b b b b b b b b b b b b b b b b b b b b b ", "a a a a a a a a a a a a a a a a a a a a a a a a a", "b b b b b b b b b b b b b b b b b b b b b b b b b ", "a a a a a a a a a a a a a a a a a a a a a a a a a", "b b b b b b b b b b b b b b b b b b b b b b b b b ", "a a a a a a a a a a a a a a a a a a a a a a a a a", "b b b b b b b b b b b b b b b b b b b b b b b b b ", "a a a a a a a a a a a a a a a a a a a a a a a a a", "b b b b b b b b b b b b b b b b b b b b b b b b b ", "a a a a a a a a a a a a a a a a a a a a a a a a a", "b b b b b b b b b b b b b b b b b b b b b b b b b "};
    int width = 1;
    TextEditor* pObj = new TextEditor();
    clock_t start = clock();
    vector<string> result = pObj->twoColumn(text, width);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b", "a", "b"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> text = {" I WONDER by my troth, what thou,", "and I Did, till we lovd? were we", "not weand till then? But suckd on", "countrey pleasures, childishly? Or", "snorted we in the seaven sleepers", "den? Twas so; But this, all", "pleasures fancies bee. If ever any", "beauty I did see, Which I desird,", "and got, twas but a dreame of", "thee. And now good morrow to our", "waking soules, Which watch not one", "another out of feare; For love, all", "love of other sights controules,"};
    int width = 20;
    TextEditor* pObj = new TextEditor();
    clock_t start = clock();
    vector<string> result = pObj->twoColumn(text, width);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"I WONDER by my", "fancies bee. If ever", "troth, what thou,", "any beauty I did", "and I Did, till we", "see, Which I desird,", "lovd? were we not", "and got, twas but a", "weand till then? But", "dreame of thee. And", "suckd on countrey", "now good morrow to", "pleasures,", "our waking soules,", "childishly? Or", "Which watch not one", "snorted we in the", "another out of", "seaven sleepers den?", "feare; For love, all", "Twas so; But this,", "love of other sights", "all pleasures", "controules,"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> text = {" ", " ", " ", " ", " ", " ", "dsd"};
    int width = 7;
    TextEditor* pObj = new TextEditor();
    clock_t start = clock();
    vector<string> result = pObj->twoColumn(text, width);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"dsd"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> text = {" ", " ", " ", " ", " ", " "};
    int width = 7;
    TextEditor* pObj = new TextEditor();
    clock_t start = clock();
    vector<string> result = pObj->twoColumn(text, width);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> text = {" 1234 67 1234567 123456 12 "};
    int width = 7;
    TextEditor* pObj = new TextEditor();
    clock_t start = clock();
    vector<string> result = pObj->twoColumn(text, width);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1234 67", "123456", "1234567", "12"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> text = {"The quick brown fox jumps over the lazy dog. "};
    int width = 7;
    TextEditor* pObj = new TextEditor();
    clock_t start = clock();
    vector<string> result = pObj->twoColumn(text, width);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"The", "over", "quick", "the", "brown", "lazy", "fox", "dog.", "jumps"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> text = {"aaaaa"};
    int width = 5;
    TextEditor* pObj = new TextEditor();
    clock_t start = clock();
    vector<string> result = pObj->twoColumn(text, width);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"aaaaa"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> text = {" 1234 67 1234567 1234 1 ", " 1234 67 1234567 1234 1 ", " 1234 67 1234567 1234 1 "};
    int width = 7;
    TextEditor* pObj = new TextEditor();
    clock_t start = clock();
    vector<string> result = pObj->twoColumn(text, width);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1234 67", "1234 1", "1234567", "1234 67", "1234 1", "1234567", "1234 67", "1234 1", "1234567"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7555254&rd=4660&pm=1942
********************************************************************************
#line 172 "TextEditor.cpp" 
 
#include <string> 
#include <vector> 
#include <sstream> 
#include <algorithm> 
#include <iostream> 
#include <map> 
#include <set> 
#include <valarray> 
#include <cstdlib> 
#include <cstring> 
#include <cctype> 
#include <cstdio> 
 
using namespace std; 
 
class TextEditor { 
private: 
  int wid; 
  vector <string> tmp; 
  int lines, cc; 
private: 
  void addword(string s) { 
    if (cc + s.size() + 1 <= wid) { 
      tmp[lines-1] += ' '; 
      tmp[lines-1] += s; 
      cc += s.size() + 1; 
    } 
    else { 
      tmp.resize(lines+1); 
      cc = 0; 
      lines++; 
      tmp[lines-1] += s; 
      cc += s.size(); 
    } 
  } 
public: 
  vector <string> twoColumn(vector <string> text, int width) { 
    int i, m; 
    string s; 
    vector <string> res; 
 
    wid = width; 
    lines = 0; 
    cc = width; 
    for (i = 0; i < text.size(); i++) { 
      istringstream ss(text[i]); 
      while (ss >> s) 
        addword(s); 
    } 
 
    res.resize(tmp.size()); 
    m = (tmp.size() + 1) / 2; 
    for (i = 0; i < tmp.size(); i++) 
      if (i >= m) 
        res[2*(i-m)+1] = tmp[i]; 
      else 
        res[2*i] = tmp[i]; 
 
    return res; 
  } 
   
; 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/
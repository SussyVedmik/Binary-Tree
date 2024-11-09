#include "BinaryTree.h"

int main()
{
    setlocale(LC_ALL, "Russian");

    BinaryTree dictionary;

    dictionary.addWord("hello", "ïðèâåò", 5);
    dictionary.addWord("world", "ìèð", 3);
    dictionary.addWord("apple", "ÿáëîêî", 1);
    dictionary.addWord("banana", "áàíàí", 2);

    dictionary.displayTranslation("hello");
    dictionary.replaceTranslation("world", "çåìëÿ");
    dictionary.deleteWord("banana");

    dictionary.displayMostPopularWord();
    dictionary.displayLeastPopularWord();

    return 0;
}
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <stdlib.h>

int random_between(int min, int max) {
    return (rand() % (min - max) + min);
}

int main(void)
{
    srand(time(NULL));

    std::string line;

    std::vector<std::string> verb;
    std::vector<std::string> noun;
    std::vector<std::string> adverb;
    std::vector<std::string> pronoun;
    std::vector<std::string> adjective;
    std::vector<std::string> preposition;

    std::ifstream verb_("files/verb.txt");

    while(getline(verb_, line))
        verb.push_back(line);

    verb_.close();

    std::ifstream noun_("files/noun.txt");
    
    while(getline(noun_, line))
        noun.push_back(line);

    noun_.close();

    std::ifstream adverb_("files/adverb.txt");

    while(getline(adverb_, line))
        adverb.push_back(line);

    adverb_.close();

    std::ifstream pronoun_("files/pronoun.txt");

    while(getline(pronoun_, line))
        pronoun.push_back(line);

    pronoun_.close();

    std::ifstream preposition_("files/preposition.txt");

    while(getline(preposition_, line))
        preposition.push_back(line);
    
    preposition_.close();

    std::ifstream adjective_("files/adjective.txt");

    while(getline(adjective_, line))
        adjective.push_back(line);
    
    adjective_.close();

    printf("%s %s %s %s the %s %s\r\n", 
        pronoun[random_between(0, pronoun.size() - 1)].c_str(), adverb[random_between(0, adverb.size() - 1)].c_str(), verb[random_between(0, verb.size() - 1)].c_str(), preposition[random_between(0, preposition.size() - 1)].c_str(), adjective[random_between(0, adjective.size() - 1)].c_str(), noun[random_between(0, noun.size() - 1)].c_str());

    return 0;
}

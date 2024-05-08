#include<iostream>
#include<string>
using namespace std;
int main() {
    string decks[3];
    int deckTracker[3] = {0};
    cin >> decks[0] >> decks[1] >> decks[2];
    bool winnerFound = false;
    int currentUser = 0;
    while(!winnerFound) {
        string deck = decks[currentUser];
        char nextUser = deck[deckTracker[currentUser]];
        deckTracker[currentUser]++;
        if(deck.length() < deckTracker[currentUser]) {
            winnerFound = true;
        } else {
            currentUser = nextUser - 'a';         
        }
    }
    cout << (char)(currentUser + 'A') << endl;
}
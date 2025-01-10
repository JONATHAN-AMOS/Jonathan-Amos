#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Candidate {
private:
    string name;
    int votes;

public:
    // Constructor to initialize the candidate's name and set votes to 0
    Candidate(string n) : name(n), votes(0) {}

    // Get candidate's name
    string getName() const {
        return name;
    }

    // Get number of votes
    int getVotes() const {
        return votes;
    }

    // Add a vote to the candidate's total
    void addVote() {
        votes++;
    }
};

class VotingSystem {
private:
    vector<Candidate> candidates;
    int totalVotes;

public:
    VotingSystem() : totalVotes(0) {}

    // Add a new candidate to the list of candidates
    void addCandidate(const string &name) {
        candidates.push_back(Candidate(name));
    }

    // Display the candidates to the user
    void displayCandidates() {
        cout << "\nCandidates for Voting:\n";
        for (int i = 0; i < candidates.size(); i++) {
            cout << i + 1 << ". " << candidates[i].getName() << endl;
        }
    }

    // Cast a vote for a candidate
    void castVote() {
        int choice;
        cout << "\nEnter your choice (1 to " << candidates.size() << "): ";
        cin >> choice;

        if (choice >= 1 && choice <= candidates.size()) {
            candidates[choice - 1].addVote();
            totalVotes++;
            cout << "Vote cast successfully!\n";
        } else {
            cout << "Invalid choice! Try again.\n";
        }
    }

    // Display the results of the voting
    void displayResults() {
        cout << "\nVoting Results:\n";
        for (int i = 0; i < candidates.size(); i++) {
            cout << candidates[i].getName() << " - " << candidates[i].getVotes() << " votes\n";
        }

        // Find the candidate with the most votes
        int maxVotes = 0;
        string winner;
        for (int i = 0; i < candidates.size(); i++) {
            if (candidates[i].getVotes() > maxVotes) {
                maxVotes = candidates[i].getVotes();
                winner = candidates[i].getName();
            }
        }
        
        cout << "\nWinner: " << winner << " with " << maxVotes << " votes!\n";
    }

    // Check if all votes have been cast
    bool isVotingOver() {
        return totalVotes == candidates.size();
    }
};

int main() {
    VotingSystem voting;

    // Add candidates to the voting system
    int numCandidates;
    cout << "Enter the number of candidates: ";
    cin >> numCandidates;

    for (int i = 0; i < numCandidates; i++) {
        string name;
        cout << "Enter name of candidate #" << i + 1 << ": ";
        cin >> name;
        voting.addCandidate(name);
    }

    // Display candidates to the user
    voting.displayCandidates();

    // Allow users to cast votes
    int numVoters;
    cout << "\nEnter the number of voters: ";
    cin >> numVoters;

    for (int i = 0; i < numVoters; i++) {
        cout << "\nVoter #" << i + 1 << " is casting a vote.\n";
        voting.castVote();
    }

    // Display the voting results
    voting.displayResults();

    return 0;
}
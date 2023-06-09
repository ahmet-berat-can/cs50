#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Max number of candidates
#define MAX 9

// Candidates have name and vote count
typedef struct
{
    string name;
    int votes;
}
candidate;

// Array of candidates
candidate candidates[MAX];

// Number of candidates
int candidate_count;

// Function prototypes
bool vote(string name);
void print_winner(void);

int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: plurality [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1;
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
    }

    int voter_count = get_int("Number of voters: ");

    // Loop over all voters
    for (int i = 0; i < voter_count; i++)
    {
        string name = get_string("Vote: ");

        // Check for invalid vote
        if (!vote(name))
        {
            printf("Invalid vote.\n");
        }
    }

    // Display winner of election
    print_winner();
}

// Update vote totals given a new vote
bool vote(string name)
{
    // TODO
    // Check if name exist

    for (int i = 0; i < candidate_count; i++)
    {
        if (strcmp(name, candidates[i].name) == 0)
        {
            candidates[i].votes += 1;
            return true;
        }
    }

    return false;
}

// Print the winner (or winners) of the election
void print_winner(void)
{
    // TODO
    candidate temp[2];
    // Sorting array with using selection sort.
    for (int i = 0; i < candidate_count; i++)
    {
        for (int j = 1 + i ; j < candidate_count; j++)
        {
            if (candidates[j].votes > candidates[i].votes)
            {
                temp[0] = candidates[j];
                temp[1] = candidates[i];
                candidates[i] = temp[0];
                candidates[j] = temp[1];
            }

        }

    }
    // Checking who is/are winner/s.
    if (candidates[0].votes > candidates[1].votes)
    {
        printf("%s\n", candidates[0].name);
        return;
    }
    else if ((candidates[0].votes == candidates[1].votes) && (candidates[1].votes == candidates[2].votes))
    {
        printf("%s\n", candidates[0].name);
        printf("%s\n", candidates[1].name);
        printf("%s\n", candidates[2].name);
        return;
    }
    else if (candidates[0].votes == candidates[1].votes)
    {
        printf("%s\n", candidates[0].name);
        printf("%s\n", candidates[1].name);
        return;
    }


}
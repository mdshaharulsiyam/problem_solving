#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int test_cases;
  cin >> test_cases;

  while (test_cases--)
  {
    int word_count;
    cin >> word_count;

    vector<string> player1_words(word_count);
    vector<string> player2_words(word_count);
    vector<string> player3_words(word_count);

    map<string, int> word_frequency;

    for (int i = 0; i < word_count; i++)
    {
      cin >> player1_words[i];
      word_frequency[player1_words[i]]++;
    }

    for (int i = 0; i < word_count; i++)
    {
      cin >> player2_words[i];
      word_frequency[player2_words[i]]++;
    }

    for (int i = 0; i < word_count; i++)
    {
      cin >> player3_words[i];
      word_frequency[player3_words[i]]++;
    }

    int player1_score = 0;
    int player2_score = 0;
    int player3_score = 0;

    for (const string &word : player1_words)
    {
      if (word_frequency[word] == 1)
        player1_score += 3;
      else if (word_frequency[word] == 2)
        player1_score += 1;
    }

    for (const string &word : player2_words)
    {
      if (word_frequency[word] == 1)
        player2_score += 3;
      else if (word_frequency[word] == 2)
        player2_score += 1;
    }

    for (const string &word : player3_words)
    {
      if (word_frequency[word] == 1)
        player3_score += 3;
      else if (word_frequency[word] == 2)
        player3_score += 1;
    }

    cout << player1_score << " "
         << player2_score << " "
         << player3_score << "\n";
  }

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

bool isDigit(char c){
    return c>='0' && c<='9';
}

vector<string> findYears(const string& inputText) {
    vector<string> years;
    for (size_t i = 0; i < inputText.size(); ++i) {
        if (isDigit(inputText[i]) && isDigit(inputText[i+1]) && isDigit(inputText[i+2] && isDigit(inputText[i+3]) && isDigit(inputText[i+4]) ) ) {
            years.push_back(inputText.substr(i, 4));
        }
    }
    return years;
}

void countYears(const string& inputText) {
    vector<string> years = findYears(inputText);

    unordered_map<string, int> yearCounts;
    for (const auto& year : years) {
        yearCounts[year]++;
    }

    vector<pair<string, int>> sortedYears(yearCounts.begin(), yearCounts.end());
    sort(sortedYears.begin(), sortedYears.end(), [](const auto& a, const auto& b) {
        return a.second > b.second;
    });

    for (const auto& [year, count] : sortedYears) {
        cout << year << " appears " << count << " time(s)" << endl;
    }
}

int main(){
    string input1 = "In the year 2005, a technological revolution set in motion changes that would ripple through time. By 2012, the seeds of innovation planted earlier blossomed into significant breakthroughs, propelling us into a new era. Now, in 2023, we stand on the threshold of another transformation, building upon the foundations set in the past and enriched by the progress of 2023. As this year unfolds, it bears the promise of reshaping industries and lives, a testament to the continuous interplay of progress across different moments in time.";
    countYears(input1);
    return 0;
}
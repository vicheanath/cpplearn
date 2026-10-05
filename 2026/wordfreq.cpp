#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

//TODO: a fuction that takes a raw word and return cleaned version:
std::string clearn_word(const std::string& raw) {
  std::size_t start = 0;
  std::size_t end = raw.size();
  while(start < end && !std::isalnum(static_cast<unsigned char>(raw[start]))) ++start;
  while(end > start && !std::isalnum(static_cast<unsigned char>(raw[end - 1]))) --end;


  std::string result;
  for (std::size_t i = start; i < end; i++){
    result.push_back(
        static_cast<char>(std::tolower(static_cast<unsigned char>(raw[i])))
        );
  }
  return result;
}

int main(int argc, char** argv){
    if (argc <2) {
      std::cerr << "usage: " << argv[0] << "<filename>\n";
      return 1;
    }

    std::ifstream file(argv[1]);
    if(!file){
      std::cerr << "could not open" << argv[1] << "\n";
      return 1;
    }

    std::unordered_map<std::string, int> counts;
    

    std::string word;
    while (file >> word) {
      std::string cleaned = clearn_word(word);
       if (!cleaned.empty()) {
        counts[cleaned]++;
      }
     
    }
    // Copy map into a vector of pair
    std::vector<std::pair<std::string, int>> sorted(counts.begin(), counts.end());

    std::sort(sorted.begin(), sorted.end(),[](const auto& a, auto& b) {
        return a.second > b.second;
        });

    std::size_t limit = std::min<std::size_t>(20, sorted.size());
    for (std::size_t i =0; i < limit; i++) {
      std::cout << sorted[i].first << " " << sorted[i].second << "\n";
    }

    return 0;
}



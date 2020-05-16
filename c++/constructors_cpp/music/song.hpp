#include <string>

class Song {
  std::string title;
  std::string artist;
public: // Constructor
  Song(std::string new_title, std::string new_artist);
  // Destructor
  ~Song();
  std::string get_title();
  std::string get_artist();
};
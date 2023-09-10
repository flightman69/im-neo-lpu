#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

class MusicLibrary {
public:
    struct Song {
        std::string name;
        std::string artist;
    };

    void addSong(const std::string& songName, const std::string& artistName) {
        Song song;
        song.name = songName;
        song.artist = artistName;
        library.push_back(song);
    }

    void displaySortedSongs() {
        std::sort(library.begin(), library.end(), [](const Song& a, const Song& b) {
            return a.artist < b.artist;
        });

        for (const Song& song : library) {
            std::cout << song.name << " - " << song.artist << std::endl;
        }
    }

private:
    std::vector<Song> library;
};

int main() {
    int N;
    std::cin >> N;
    std::cin.ignore(); // Consume the newline after N

    MusicLibrary library;

    for (int i = 0; i < N; ++i) {
        std::string songName, artistName;
        std::getline(std::cin, songName);
        std::getline(std::cin, artistName);
        library.addSong(songName, artistName);
    }

    library.displaySortedSongs();

    return 0;
}


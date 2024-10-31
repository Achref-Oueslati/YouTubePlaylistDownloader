#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

void downloadPlaylist(const string& url) {
    // Form the command string
    string command = "yt-dlp -o \"%(playlist_index)s - %(title)s.%(ext)s\" " + url;
    cout << "Downloading playlist from: " << url << endl;

    // Execute the command
    int result = system(command.c_str());

    // Check if the download was successful
    if (result == 0) {
        cout << "Download completed successfully!" << endl;
    } else {
        cout << "Error in downloading the playlist. Please check the URL and try again." << endl;
    }
}

int main() {
    string playlistUrl;
    cout << "Enter the YouTube playlist URL: ";
    getline(cin, playlistUrl);

    downloadPlaylist(playlistUrl);
    return 0;
}

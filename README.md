# YouTube Playlist Downloader

A simple C++ application that automates the download of entire YouTube playlists using the [yt-dlp](https://github.com/yt-dlp/yt-dlp) tool.

## Features
- Downloads entire YouTube playlists
- Saves each video with the playlist index and title for easy organization
- Simple, command-line interface

## Requirements
- **C++ Compiler** (e.g., GCC or MSVC)
- **yt-dlp**: This tool is essential for downloading YouTube videos. Install it via pip:
  
  ```
  pip install yt-dlp

Copy code:
```
git clone https://github.com/Achref-Oueslati/YouTubePlaylistDownloader.git
cd YouTubePlaylistDownloader
  ```
## Troubleshooting
"Command not recognized" error: Make sure yt-dlp is installed and accessible.
```
  yt-dlp --version
```
If needed, specify the full path to yt-dlp in the code.

Permission errors: Ensure your program has the necessary permissions to write files in the destination folder.

---
Feel free to fork the repository and submit pull requests. Contributions are welcome!


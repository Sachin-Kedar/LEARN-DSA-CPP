# from pytube import Playlist

# def download_youtube_playlist(playlist_url, output_path='.'):
#     playlist = Playlist(playlist_url)

#     print(f'Downloading Playlist: {playlist.title}')

#     for video in playlist.videos:
#         print(f'Downloading: {video.title}')
#         video.streams.get_highest_resolution().download(output_path)

#     print('Download complete.')

# if __name__ == "__main__":
#     playlist_url = input("Enter the YouTube playlist URL: ")
#     output_path = input("Enter the output path (default is current directory): ") or '.'

#     download_youtube_playlist(playlist_url, output_path)


from pytube import Playlist

def download_single_video_from_playlist(playlist_url, video_index, output_path='.', max_retries=3):
    playlist = Playlist(playlist_url)

    print(f'Downloading Playlist: {playlist.title}')

    retries = 0
    while retries < max_retries:
        try:
            video = playlist.videos[video_index]
            print(f'Downloading: {video.title} (720p)')
            video_stream = video.streams.filter(res='720p').first()
            if video_stream:
                video_stream.download(output_path)
                print('Download complete.')
            else:
                print('Error: Video does not have a 720p stream.')
            break
        except (IndexError, URLError, ConnectionResetError) as e:
            print(f'Error: {e}')
            retries += 1
            print(f'Retrying... (Attempt {retries}/{max_retries})')

    if retries == max_retries:
        print(f'Failed to download after {max_retries} attempts. Please check your internet connection.')

if __name__ == "__main__":
    playlist_url = input("Enter the YouTube playlist URL: ")
    video_index = int(input("Enter the index of the video to download (0-based): "))
    output_path = input("Enter the output path (default is current directory): ") or '.'

    download_single_video_from_playlist(playlist_url, video_index, output_path)


#include <iostream>
#include <string>
#include <windows.h>

using namespace std;




int main(){
    int command = 0;
    char playList[4][100] = {"media.io_anime-heaven-aka-best-song_kimi-no-shiranai-monogatari-bakemonogatari.wav",
    "anime-heaven-aka-best-song_butterfly-on-your-right-shoulder-vocaloid-live.wav",
    "media.io_anime-heaven-aka-best-song_black-rock-shooter-vocaloid-version-black-rock-shooter.wav"};
    for(int i = 0; i<4;i++){
        PlaySound(playList[i], NULL, SND_FILENAME | SND_ASYNC );
        cin>>command;
        cin.ignore();
        if(command == 0){
            PlaySound(NULL, NULL, NULL);
            return 0;
        }
        else if(command == 1){
            continue;
        }
        else if(command == 2){
            i-=2;
            continue;
        }
        cin.get();
    }

}

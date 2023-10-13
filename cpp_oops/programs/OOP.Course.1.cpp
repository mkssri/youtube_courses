#include <iostream>
#include <string>
#include <list>

using namespace std;

class YoutubeChannel {
public:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;
};

int
main() {
  YoutubeChannel ytChannel;
  ytChannel.Name                 = "CodeBeauty";
  ytChannel.OwnerName            = "Saldina";
  ytChannel.SubscribersCount     = 1800;
  ytChannel.PublishedVideoTitles = {"C++ for beginners Video 1", "HTML & CSS Video 1", "C++ OOP Video 1"};

  // print
  cout << "Name: " << ytChannel.Name << endl;
  cout << "OwnerName: " << ytChannel.OwnerName << endl;
  cout << "SubscribersCount: " << ytChannel.SubscribersCount << endl;
  cout << "Videos:" << endl;
  for (string videoTitle : ytChannel.PublishedVideoTitles) {
      cout << videoTitle << endl; 
  }

  return 0;
}

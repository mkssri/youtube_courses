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

    // constructor
    YoutubeChannel(string name, string ownerName) {
      Name             = name;
      OwnerName        = ownerName;
      SubscribersCount = 0;
    }

    void GetInfo() {
      // print
      cout << "Name: " << Name << endl;
      cout << "OwnerName: " << OwnerName << endl;
      cout << "SubscribersCount: " << SubscribersCount << endl;
      cout << "Videos:" << endl;
      for (string videoTitle : PublishedVideoTitles) {
          cout << videoTitle << endl; 
      }

    }
};

int
main() {
  YoutubeChannel ytChannel("CodeBeauty", "Saldina");
  ytChannel.PublishedVideoTitles.push_back("C++ for beginners Video 1");
  ytChannel.PublishedVideoTitles.push_back("HTML & CSS for beginners Video 1");
  ytChannel.PublishedVideoTitles.push_back("C++ OOP");
  YoutubeChannel ytChannel2("AmySings", "Amy");

  ytChannel.GetInfo();
  ytChannel2.GetInfo();

  return 0;
}


#include <iostream>
#include <string>
#include <list>

using namespace std;

class YoutubeChannel {
private:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;

public:
    // constructor
    YoutubeChannel(string name, string ownerName) {
      Name             = name;
      OwnerName        = ownerName;
      SubscribersCount = 0;
    }

    string GetName() {
        return Name;
    }
    
    void SettName(string name) {
        Name = name;
    }
    
    string GetOwnerName() {
        return OwnerName;
    }
    void SetOwnerName(string ownername) {
        OwnerName = ownername;
    }

    void GetInfo() {
      // print
      cout << "Name: " << GetName() << endl;
      cout << "OwnerName: " << GetOwnerName() << endl;
      cout << "SubscribersCount: " << SubscribersCount << endl;
      cout << "Videos:" << endl;
      for (string videoTitle : PublishedVideoTitles) {
          cout << videoTitle << endl; 
      }

    }

    void Subscribe() {
      SubscribersCount++;
    }
    
    void Unsubscribe() {
      if(SubscribersCount>0)
      SubscribersCount--;
    }

    void PublishVideo(string title) {
      PublishedVideoTitles.push_back(title);
    }
};

int
main() {
  YoutubeChannel ytChannel("CodeBeauty", "Saldina");
  ytChannel.PublishVideo("C++ for beginners Video 1");
  ytChannel.PublishVideo("HTML & CSS for beginners Video 1");
  ytChannel.PublishVideo("C++ OOP");
  ytChannel.Subscribe();
  ytChannel.Subscribe();
  ytChannel.Subscribe();
  ytChannel.Unsubscribe();
  ytChannel.GetInfo();

  YoutubeChannel ytChannel2("AmySings", "Amy");

  ytChannel2.GetInfo();

  return 0;
}

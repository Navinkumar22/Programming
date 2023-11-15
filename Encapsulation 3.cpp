/*
Exercise 3
Complete the Song class which represents a song on a streaming service.
Given Code
Requirements
Complete the Song class that includes all necessary getter and setter functions for each class attribute
There should be a total of 6 getter functions
There should be a total of 3 setter functions
play_count, pay_rate and money_earned do not have setter functions because they are initialized to 0 or 0.001 when a Song object is instantiated
Include a class function Play that takes in an int parameter and calls UpdatePlayCount and UpdateMoneyEarned that number of times
Include a class function Stats that prints all of the class attributes according to their declaration order
Include the appropriate access modifier(s) in your class
DO NOT edit the specified code section in your source file or you might not receive credit for your work!
Expected Output
Led Zeppelin
Ten Years Gone
Physical Graffiti
0
0.001
0
Michael Jackson
Beat It
Thriller
1000000
0.001
1000
*/

#include <iostream>
using namespace std;

class Song {
  
  //add class definitions below this line
  public:
    Song(string a,string t,string alb){
      artist=a;
      title=t;
      album=alb;
    }
    void SetArtist(string a){
      artist=a;
    }
    void SetAlbum(string a){
      album=a;
    }
    void SetTitle(string a){
      title=a;
    }
    void Play(int a){
      for(int i=0;i<a;i++){
        UpdatePlayCount();
      }
      UpdateMoneyEarned();
    }
    int GetPlayCount(){
      return play_count;
    }
    double GetPayRate(){
      return pay_rate;
    }
    int GetMoneyEarned(){
      return money_earned;
    }
    string GetArtist(){
      return artist;
    }
    string GetTitle(){
      return title;
    }
    string GetAlbum(){
      return album;
    }
    void Stats(){
      cout<<artist<<endl;
      cout<<title<<endl;
      cout<<album<<endl;
      cout<<play_count<<endl;
      cout<<pay_rate<<endl;
      cout<<money_earned<<endl;
    }

  //add class definitions above this line
  
//DO NOT EDIT CODE BELOW THIS LINE

  private:
    string artist;
    string title;
    string album;
    int play_count = 0;
    const double pay_rate = 0.001;
    double money_earned = 0;
    
    void UpdatePlayCount() {
      play_count++;
    }
  
    void UpdateMoneyEarned() {
      money_earned = play_count * pay_rate;
    }
};

int main() {

  Song my_song("Led Zeppelin", "Ten Years Gone", "Physical Graffiti");
  cout << my_song.GetArtist() << endl;
  cout << my_song.GetTitle() << endl;
  cout << my_song.GetAlbum() << endl;
  cout << my_song.GetPlayCount() << endl;
  cout << my_song.GetPayRate() << endl;
  cout << my_song.GetMoneyEarned() << endl;
  my_song.SetArtist("Michael Jackson");
  my_song.SetTitle("Beat It");
  my_song.SetAlbum("Thriller");
  my_song.Play(1000000);
  my_song.Stats();
  
  return 0;
  
}

//DO NOT EDIT CODE ABOVE THIS LINE
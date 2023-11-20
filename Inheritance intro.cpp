/*
Problem Inheritance
In the IDE to the left, the class MP3 is already defined. Complete the class Podcast that inherits from MP3. This class should do the following things:
Inherit the constructor such that Podcast has the following attributes:
title - a string that is the title of the episode
length - an integer that has the length of the podcast in seconds
genre - a string that is the genre of the podcast
name - a string that is the name of the podcast
date - a string that represents when the podcast was released to the public
DO NOT EDIT the specified code or you might not receive credit for your work!
Hint: Connecting the Constructors

Given Code
Expected Output
The title is Hollywood Black List
The length is 1460
The genre is economics
The name is Planet Money
The date is 10 July 2020
Testing Your Code
Use the button below to test your code before submitting it for evaluation.
TRY IT
The title is Hollywood Black List
The length is 1460
The genre is economics
The name is Planet Money
The date is 10 July 2020

*/



#include <iostream>
using namespace std;

//DO NOT EDIT code below this line

class MP3 {
  public: 
    MP3(string t, int l, string g, string al, string ar) {
      title = t;
      album = al;
      length = l;
      genre = g;
      artist = ar;
    }

    string GetTitle() {
      return title;
    }

    void SetTitle(string new_title) {
      title = new_title;
    }

    int GetLength() {
      return length;
    }

    void SetLength(int new_length) {
      length = new_length;
    }

    string GetGenre() {
      return genre;
    }

    void SetGenre(string new_genre) {
      genre = new_genre;
    }

    string GetAlbum() {
      return album;
    }

    void SetAlbum(string new_album) {
      album = new_album;
    }
  
    string GetArtist() {
      return artist;
    }

    void SetArtist(string new_artist) {
      artist = new_artist;
    }
  
  private:
    string title;
    int length;
    string genre;
    string album;
    string artist;
};

//DO NOT EDIT code above this line
  
//add class definitions below this line
  
//DO NOT EDIT///////////////////
class Podcast : public MP3 {  
  public:
    Podcast(string t, int l, string g, string al, string ar):MP3(t,l,g,al,ar){}
    void DisplayTitle(){
      cout<<"The title is "<<GetTitle()<<endl;
    }
    void DisplayLength(){
      cout<<"The length is "<<GetLength()<<endl;
    }
    void DisplayGenre(){
      cout<<"The genre is "<<GetGenre()<<endl;
    }
    void DisplayName(){
      cout<<"The name is "<<GetAlbum()<<endl;
    }
    void DisplayDate(){
      cout<<"The date is "<<GetArtist()<<endl;
    }
  private:
    string t,g,al,ar;
    int l;
};
  
  
  
  
//add class definitions above this line 

int main() {
  
  //DO NOT EDIT code below this line

  Podcast p("Hollywood Black List", 1460, "economics", "Planet Money", "10 July 2020");
  p.DisplayTitle();
  p.DisplayLength();
  p.DisplayGenre();
  p.DisplayName();
  p.DisplayDate();

  //DO NOT EDIT code above this line
  
  return 0;
  
}
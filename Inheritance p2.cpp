/*
Exercise 2 Inheritance
Use the Book class to the left as the base class. Create the derived class BlogPost so that it has the following attributes:
title - a string that represents the title of the blog post
author - a string that represents the author of the blog post
genre - a string that represents the genre of the blog post
website - a string that represents the website hosting the blog post
word_count - an integer that represents the number of words in the blog post
page_views - an integer that represents the page views for the blog post
Given Code
Requirements
Produce the expected output using concepts of inheritance.
DO NOT EDIT the specified code or you might not receive credit for your work!
Expected Output
Hot Summer Trends
Amy Gutierrez
fashion
Vogue
2319
2748
Adopting Codio
Anh Le
computer science
Codio
2500
5678
TRY out your code before submitting your work for grading.
TRY IT

*/
#include <iostream>
using namespace std;

//DO NOT EDIT code below this line

class Book {
  public:
    Book(string t, string a, string g) {
      title = t;
      author = a;
      genre = g;
    }

    string GetTitle() {
      return title;
    }

    void SetTitle(string new_title) {
      title = new_title;
    }

    string GetAuthor() {
      return author;
    }

    void SetAuthor(string new_author) {
      author = new_author;
    }

    string GetGenre() {
      return genre;
    }
  
    void SetGenre(string new_genre) {
      genre = new_genre;
    }
  
  private: 
    string title;
    string author;
    string genre;
};

//DO NOT EDIT code above this line

//add class definitions below this line

//DO NOT EDIT////////////////////
class BlogPost : public Book { //
/////////////////////////////////
  public:
  BlogPost(string t, string a, string g,string web,int wc,int pv):Book(t,a,g){
    wordcount=wc;
    pageview=pv;
    w=web;
  }
  int GetPageViews(){
    return pageview;
  }
  int GetWordCount(){
    return wordcount;
  }
  string GetWebsite(){
    return w;
  }
  private:
    int pageview,wordcount;
    string w;

};
  
  

  
//add class definitions above this line

int main() {
  
  //DO NOT EDIT code below this line

  BlogPost my_post("Hot Summer Trends", "Amy Gutierrez", "fashion", "Vogue", 2319, 2748);
  cout << my_post.GetTitle() << endl;
  cout << my_post.GetAuthor() << endl;
  cout << my_post.GetGenre() << endl;
  cout << my_post.GetWebsite() << endl;
  cout << my_post.GetWordCount() << endl;
  cout << my_post.GetPageViews() << endl;
  BlogPost codio("Adopting Codio", "Anh Le", "computer science", "Codio", 2500, 5678);
  cout << codio.GetTitle() << endl;
  cout << codio.GetAuthor() << endl;
  cout << codio.GetGenre() << endl;
  cout << codio.GetWebsite() << endl;
  cout << codio.GetWordCount() << endl;
  cout << codio.GetPageViews() << endl;

  //DO NOT EDIT code above this line
  
  return 0;
  
}
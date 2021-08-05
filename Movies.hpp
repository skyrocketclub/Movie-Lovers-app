// class movie
// *  friend class Movies; 
// *  private: 
// *  vector <string> movie_name
// *  vector <string> movie_rating ***( PG - 13, 18+ )***
// *  vector <int> watch_count 
// * 
// * public:
// * 
//class Movies
// *  private:
// *  std::string movie_title;
// *  std::string rating;
// *  int watch_count;
// * 
// *  public:
// *  add_movie( std::string movie_title, std::string rating, int watch_count);
// *  increment_count( std::string movie_title);
//
// *  display_list();

#ifndef _MOVIES_H_
#define _MOVIES_H_
#include <string>
#include <vector>
#include "Movie.hpp"

class Movies
{
private: 
       std::vector<Movie> movies{ };
       
public:
    bool watched(std::string);
    void add_movie(std::string movie_title, std::string rating, int count);
    void add_movie(string title);
    void increment_count(std::string movie_title);
    void display_list();
    
  
   
    Movies();
    ~Movies();

};

#endif // _MOVIES_H_

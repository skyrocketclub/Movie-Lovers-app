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

#ifndef _MOVIE_H_
#define _MOVIE_H_
//#include <vector>
#include <string>
using namespace std;


class Movie
{
  
private:
       string movie_title;
       string rating;
    int count;
   

    
public:
    Movie(string movie_title, string rating, int count);
    ~Movie();

};

#endif // _MOVIE_H_


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
   string getname () const;
   string getrating () const;
   int getcount () const;
   int increasecount();
//   void increment ();
    Movie(string movie_title, string rating, int count);
    Movie(string);
    ~Movie();

};

#endif // _MOVIE_H_

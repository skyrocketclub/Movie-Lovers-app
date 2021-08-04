
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
    Movie(string movie_title, string rating, int count);
    ~Movie();

};

#endif // _MOVIE_H_

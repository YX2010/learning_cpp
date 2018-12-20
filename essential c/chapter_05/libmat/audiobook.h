#ifndef _AUDIOBOOK_H
#define _AUDIOBOOK_H

#include<iostream>
#include<string>

#include "libmat.h"
#include "book.h"

class AudioBook : public Book{
  public:
    AudioBook(const std::string &title,
              const std::string &author,
              const std::string &narrator)
        : Book(title, author),
          _narrator(narrator){
            std::cout << "AudioBook::AudioBook( " << title
                      << ", " << author
                      << ", " << _narrator
                      << ") constructor\n";

    }
    ~AudioBook(){
      std::cout << "AudioBook::~AudioBook() destructor!\n";
    }

    virtual void print() const{
      std::cout << "AudioBook::print() -- I am an AudioBook object!\n"
                << "My title is: " << _title<< '\n'
                << "My author is: " << _author << '\n'
                << "My narrator is: " << _narrator << std::endl;
    }

    const std::string& narrator() const{
      return _narrator;
    }

  protected:
    std::string _narrator;

};

#endif
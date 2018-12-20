#include<iostream>

#include "libmat.h"
#include "book.h"
#include "audiobook.h"

using namespace std;

void print(const LibMat& mat){
  cout << "in global print(): about to print mat.print()\n";
  mat.print();
}

int main(){
  {
    cout << "\n" << "Creating a LibMat object to print()\n";
    LibMat libmat;
    print(libmat);
  }
  
  {
    cout << "\n" << "Creating Book object to print()\n";
    Book b("The Castle", "Franz Kafka");
    print(b);
  }

  {
    cout << "\n" << "Creating an AudioBook to print() \n";
    AudioBook ab("Man Without Qualities",
                 "Robert Musil",
                 "Kenneth Meyer");
    print(ab);
  }
  /*
  AudioBook ab("Mason and Dixon", "Thomas pynchon", "Edwin Leonard");

  cout << "The title is " << ab.title() << '\n'
       << "The author is " << ab.author() << '\n'
       << "The narrator is " << ab.narrator() << std::endl;
       */
}
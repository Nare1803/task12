#include<iostream>


class Book {
 private:
	 std::string title;
	 std::string author; 
	 int  ISBN;
 public:
   // setters
   void set_title (std::string s) {
        title = s;
   }	 
   void set_author (std::string s) {
        author = s;
   }
  void set_ISBN (int s) {
        ISBN = s;
   }

   //getters
  std::string get_title () {
        return title;
   }
  std::string get_author () {
        return author;
   }
  int  get_ISBN () {
       return  ISBN;
   }
};

int main()
{
   Book ob;
   ob.set_title("aystex karox e linel ");
   ob.set_author("dzer govazdy ");
   ob.set_ISBN(573);
   std::cout << ob.get_title();
   std::cout << ob.get_author() << std::endl;
   std::cout << ob.get_ISBN() << std::endl;
}

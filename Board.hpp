#include <string>
#include "Direction.hpp"
#include <unordered_map>
using namespace std;
namespace ariel{
    class Board{
        public:
            unsigned int x;
            unsigned int y;
            unordered_map<unsigned int,unordered_map<unsigned int,char>> my_board;
            void set_x_and_y(unsigned int temp_x,unsigned int temp_y,Direction dir,unsigned int word_length);
            Board();
            void post(unsigned int row,unsigned int col,Direction dir,string input_str);
            string read(unsigned int row,unsigned int col,Direction dir,unsigned int num_of_letters);
            void show();
        

    };
}

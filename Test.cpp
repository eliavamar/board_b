#include "doctest.h"
#include "Board.hpp"
#include <string>
#include "Direction.hpp"
using ariel::Direction;
using namespace std;
	// Horizontal,
	// 	Vertical
TEST_CASE("Working codes") {
ariel::Board board;
board.post(0,0,ariel::Direction::Horizontal,"eliav");
board.post(1,1,ariel::Direction::Horizontal,"amar");
CHECK(board.read(0,0,ariel::Direction::Horizontal,5)=="eliav");
CHECK(board.read(1,1,ariel::Direction::Horizontal,4)=="amar");
board.post(0,0,ariel::Direction::Vertical,"matan");
board.post(1,1,ariel::Direction::Vertical,"itach");
CHECK(board.read(0,0,ariel::Direction::Vertical,5)=="matan");
CHECK(board.read(1,1,ariel::Direction::Vertical,5)=="itach");
board.post(20,20,ariel::Direction::Horizontal,"BD");
board.post(22,22,ariel::Direction::Vertical,"FOR");
board.post(23,23,ariel::Direction::Horizontal,"EVER");
CHECK(board.read(20,20,ariel::Direction::Horizontal,2)=="BD");
CHECK(board.read(22,22,ariel::Direction::Vertical,3)=="FOR");
CHECK(board.read(23,23,ariel::Direction::Horizontal,4)=="EVER");
board.post(100,99,ariel::Direction::Vertical,"hello");
board.post(30,30,ariel::Direction::Horizontal,"is");
board.post(30,32,ariel::Direction::Horizontal,"it");
board.post(30,34,ariel::Direction::Horizontal,"me");
CHECK(board.read(100,99,ariel::Direction::Vertical,5)=="hello");
CHECK(board.read(30,30,ariel::Direction::Horizontal,2)=="is");
CHECK(board.read(30,32,ariel::Direction::Horizontal,2)=="it");
CHECK(board.read(30,34,ariel::Direction::Horizontal,2)=="me");
board.post(30,36,ariel::Direction::Horizontal,"you");
board.post(30,39,ariel::Direction::Horizontal,"looking");
board.post(30,48,ariel::Direction::Horizontal,"for");
board.post(30,51,ariel::Direction::Horizontal,"i");
board.post(30,52,ariel::Direction::Horizontal,"can");
board.post(30,55,ariel::Direction::Horizontal,"see");
board.post(30,58,ariel::Direction::Horizontal,"it");
board.post(30,60,ariel::Direction::Horizontal,"in");
board.post(30,62,ariel::Direction::Horizontal,"your");
board.post(30,66,ariel::Direction::Horizontal,"eyes");
CHECK(board.read(30,36,ariel::Direction::Horizontal,3)=="you");
CHECK(board.read(30,39,ariel::Direction::Horizontal,7)=="looking");
CHECK(board.read(30,48,ariel::Direction::Horizontal,3)=="for");
CHECK(board.read(30,51,ariel::Direction::Horizontal,1)=="i");
CHECK(board.read(30,52,ariel::Direction::Horizontal,3)=="can");
CHECK(board.read(30,55,ariel::Direction::Horizontal,3)=="see");
CHECK(board.read(30,58,ariel::Direction::Horizontal,2)=="it");
CHECK(board.read(30,60,ariel::Direction::Horizontal,2)=="in");
CHECK(board.read(30,62,ariel::Direction::Horizontal,4)=="your");
CHECK(board.read(30,66,ariel::Direction::Horizontal,3)=="eye");
CHECK(board.read(1333,25221,ariel::Direction::Horizontal,3)=="___");

  

}

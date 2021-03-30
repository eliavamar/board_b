#include <string>
#include "Direction.hpp"
#include "Board.hpp"
#include <iostream>
#include <unordered_map>
using namespace std;
namespace ariel{

            Board::Board(){
                x=y=0;//for the show function to ,we use x,y to know where we need stop reading while we using show function
            };
            void Board::set_x_and_y(unsigned int temp_x,unsigned int temp_y,Direction dir,unsigned int word_length){
              if(dir==Direction::Horizontal){
                  temp_x+=word_length;
              }  else{
                  temp_y+=word_length;
              }
              if(x<temp_x){x=temp_x;}
              if(y<temp_y){y=temp_y;}
            }

            void Board::post(unsigned int row,unsigned int col,Direction dir,string input_str){
              set_x_and_y(col,row,dir,input_str.length());
              if(dir==Direction::Horizontal){
              for(unsigned int i=0;i<input_str.length();i++){
              my_board[row][col+i]=input_str[i];
              }
              }
              else{
              for(unsigned int i=0;i<input_str.length();i++){
              my_board[row+i][col]=input_str[i];
              }
              }

            }
            string Board::read(unsigned int row,unsigned int col,Direction dir,unsigned int num_of_letters){
               if(num_of_letters==0){
                return "";
                }
                string out_str;
                if(dir==Direction::Horizontal){
                for(unsigned int i=0;i<num_of_letters;i++){
                if (my_board.find(row) == my_board.end()||my_board[row].find(col+i)== my_board[row].end()){
                    out_str+="_";
                }
                else{
                    out_str+=my_board[row][col+i];
                }
                }
                }
                else{
                for(unsigned int i=0;i<num_of_letters;i++){
                if (my_board.find(row+i) == my_board.end()||my_board[row+i].find(col)== my_board[row+i].end()){
                    out_str+="_";
                }
                else{
                    out_str+=my_board[row+i][col];
                }
                }

                }
                return out_str;
                }    
            void Board::show(){
                
                for(unsigned int start_y=0;start_y<y;start_y++){
                    for(unsigned int start_x=0;start_x<x;start_x++){
                if (my_board.find(start_y) == my_board.end()||my_board[start_y].find(start_x)== my_board[start_y].end()){
                    cout<<"_";
                }
                else{
                cout<<my_board[start_y][start_x];
                }

                    }
                cout<<"\n"; 
                }
            }
}

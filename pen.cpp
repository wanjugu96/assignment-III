#include <string>
#include "pen.h"
std::string Pen::drawLine(){
return getName().append(" draws a line.");
}
std::string Pen::drawCircle(){
return getName().append(" draws a circle.");
}
std::string Pen::getName(){
return pen_name;
}

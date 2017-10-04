winflex --nounistd --wincompat  -otigLex.cpp tig.l 
winbison  -d -t -otigParse.cpp tig.y


 

move tigParse.cpp src
move tigParse.hpp src
move tigLex.cpp src



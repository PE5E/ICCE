cat testfile.txt
echo "___"
flexc++ lexer
g++ *.cc -std=c++17 -Werror -Wall -o lexecutable
./lexecutable < testfile.txt


listClient: list.o listClient.o
  g++ -o listClient list.cpp listClient.cpp
  
list.o: list.cpp list.h
  g++ -c list.cpp
  
listClient.o: listClient.cpp list.h
  g++ -c listClient.cpp
  
clean:
  rm *.o

# This is the makefile for JohnLibrary
# 22 December 2018

CXX = g++
CXXFLAGS = -Wall -g

JohnLibrary : main.o
	$(CXX) $(CXXFLAGS) -o JohnLibrary main.o 

main.o : main.cpp SinglyLinkedList.hpp Node.hpp
	$(CXX) $(CXXFLAGS) -c main.cpp SinglyLinkedList.hpp Node.hpp
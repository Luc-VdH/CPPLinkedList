#My two implimentations of a LinkedList
Both implemenations store strings, as a test each main function asks the
user to input names untill the character 'q' is provided as input, the
program then prints all the stored names and quits. Both applications are
built and run using the 'make' command.
##Simple Linked List
This folder contains an implementation where each node of the linked list is
a struct called LinkedList. This means that the technical aspects of the
data structure had to be done in the main function which made the main
function messy. 
##Linked List Modules
This folder contains a program that behaves the same way as the simple
linked list program. However, this time the linked list is completely
apbstracted in its own class called LinkedList which uses the same struct as
before just this time it is called 'node.' This class and struct can now be
taken and reused in any other program with ease. 
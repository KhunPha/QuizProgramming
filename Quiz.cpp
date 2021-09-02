#include <iostream>
#include <conio.h>
#include <windows.h>
#include <ctime>
#define print cout
using namespace std;
int main(){
	int o,h,n,c,cpp,s1,score1=0,score2=0,score3=0,score4=0,score5=0,score6=0,score7=0,score8=0,score9=0,score10=0,total=0,totalt=0,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,q=0;
	string a,name,t,id,g;
	HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
	input:
	system("color f");
	print<<"======================>Update Version<=======================\n";
	SetConsoleTextAttribute(color,2);
	print<<"Developer By: Lanh Sopha"<<endl;
	time_t now = time(0);
   char* dt = ctime(&now);
   cout << "Update: " << dt;
	print<<"Version 3.1.2\n";
	SetConsoleTextAttribute(color,15);
	print<<"====================>Enter Student Name<=====================\n";
	fflush(stdin);
	SetConsoleTextAttribute(color,15);
	print<<"Enter Name: ";
	getline(cin,name);
	if(name.length()<=6){
		system("cls");
		goto input;
	}
	print<<"Enter ID: ";
	cin>>id;
	if(id.size()>=8){
		g = "\t";
	}
	print<<"\n===================>Object<===================\n";
	print<<"1.HTML"<<endl;
	print<<"2.C++ Programming"<<endl;
	print<<"3.C Programming"<<endl;
	print<<"Choose Object: ";
	cin>>o;
	print<<"\n===================>Quiz<=====================\n";
	if(o==1){
		for(int i=1; i<=3; i++){
			print<<i<<".Quiz HTML"<<endl;
		}
		print<<"Choose Quiz: ";
		cin>>h;
	}else if(o==2){
		for(int i=1; i<=3; i++){
			print<<i<<".Quiz C++ Programming"<<endl;
		}
		print<<"Choose Quiz: ";
		cin>>cpp;
	}else if(o==3){
		for(int i=1; i<=3; i++){
			print<<i<<".Quiz C Programming"<<endl;
		}
		print<<"Choose Quiz: ";
		cin>>c;
	}else{
		print<<"\nError";
		system("color 4");
		getch();
		system("cls");
		goto input;
	}
	print<<"\n====================>Answer<======================\n";
	switch(h){
		case 1 :
			print<<"\nI.Which of the following is valid colour code ?\n"<<endl;
			print<<"1.#000000;"<<endl;
			print<<"2.#0000000;"<<endl;
			print<<"3.#00000000;"<<endl;
			print<<"4.#000000000;"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==1){
				score1 = 10;
				t1 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t1=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: #000000;"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nII.Which of the following is used increase the row height?\n"<<endl;
			print<<"1.Cellspacing"<<endl;
			print<<"2.Row span"<<endl;
			print<<"3.Cellpadding"<<endl;
			print<<"4.Col span"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==2){
				score2 = 10;
				t2 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t2=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: Row span"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nIII.Which of the following is used increase the col width?\n"<<endl;
			print<<"1.Cellspacing"<<endl;
			print<<"2.Col span"<<endl;
			print<<"3.Row span"<<endl;
			print<<"4.Cellpadding"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==2){
				score3 = 10;
				t3 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t3=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: Col span"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nIV.Is width=\"100\" and width=\"100%\" the same?\n"<<endl;
			print<<"1.Yes"<<endl;
			print<<"2.No"<<endl;
			print<<"3.Maybe"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==2){
				score4 = 10;
				t4 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t4=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: No"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nV.How can we resize the image?\n"<<endl;
			print<<"1.Using resize attribute"<<endl;
			print<<"2.Using size attribute"<<endl;
			print<<"3.Using height and width"<<endl;
			print<<"4.Using rs attribute"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==3){
				score5 = 10;
				t5 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t5=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: Using height and width"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nVI.Which of the following HTML element is used for creating an unordered list?\n"<<endl;
			print<<"1.<ui>"<<endl;
			print<<"2.<li>"<<endl;
			print<<"3.<ol>"<<endl;
			print<<"4.<ul>"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==4){
				score6 = 10;
				t6 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t6=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: <ul>"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nVII.How many heading tags are there in HTML5?\n"<<endl;
			print<<"1.5"<<endl;
			print<<"2.8"<<endl;
			print<<"3.7"<<endl;
			print<<"4.6"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==4){
				score7 = 10;
				t7 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t7=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: 6"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nVIII.Which of the following attributes is used to add link to any element?\n"<<endl;
			print<<"1.link"<<endl;
			print<<"2.ref"<<endl;
			print<<"3.href"<<endl;
			print<<"4.newlink"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==3){
				score8 = 10;
				t8 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t8=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: href"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nIX.Which of the following is the correct way of creating an hyperlink in HTML?\n"<<endl;
			print<<"1.<a>www.geeksforgeeks.org <Geeksforgeeks /a>"<<endl;
			print<<"2.<a href=\"www.geeksforgeeks.org\" Geeksforgeeks /a>"<<endl;
			print<<"3.<a href= \"www.geeksforgeeks.org\">Geeksforgeeks</a>"<<endl;
			print<<"4.<a link=\"www.geeksforgeeks.org\" Geeksforgeeks> </a>"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==3){
				score9 = 10;
				t9 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t9=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: <a href= \"www.geeksforgeeks.org\">Geeksforgeeks</a>"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nX.Which of the following is the correct way to add background color in HTML?\n"<<endl;
			print<<"1.<body color = \"green\">"<<endl;
			print<<"2.<body bg-color = \"green\">"<<endl;
			print<<"3.<body style = \"background-color=green\">"<<endl;
			print<<"4.<body style = \"background-color: green;\">"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==4){
				score10 = 10;
				t10 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t10=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: <body style = \"background-color: green;\">"<<endl;
			}
			break;
			
			
			//Quiz for Student HTML 22222222222222222222222222222222222222222222222222222222
			
			
			
		case 2 :
			print<<"\nI.What does HTML stand for?\n"<<endl;
			print<<"1.Hyperlinks and Text Markup Language"<<endl;
			print<<"2.Home Tool Markup Language"<<endl;
			print<<"3.Hyper Text Markup Language"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==3){
				score1 = 10;
				t1 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t1=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: Hyper Text Markup Language"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nII.Who is making the Web standards?\n"<<endl;
			print<<"1.The World Wide Web Consortium"<<endl;
			print<<"2.Google"<<endl;
			print<<"3.Mozilla"<<endl;
			print<<"4.Microsoft"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==1){
				score2 = 10;
				t2 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t2=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: The World Wide Web Consortium"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nIII.Choose the correct HTML element for the largest heading:\n"<<endl;
			print<<"1.<h6>"<<endl;
			print<<"2.<heading>"<<endl;
			print<<"3.<h1>"<<endl;
			print<<"4.<head>"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==3){
				score3 = 10;
				t3 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t3=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: <head>"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nIV.What is the correct HTML element for inserting a line break?\n"<<endl;
			print<<"1.<break>"<<endl;
			print<<"2.<br>"<<endl;
			print<<"3.<lb>"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==2){
				score4 = 10;
				t4 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t4=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: <br>"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nV.What is the correct HTML for adding a background color?\n"<<endl;
			print<<"1.<body bg=\"yellow\">"<<endl;
			print<<"2.<body style=\"background-color:yellow;\">"<<endl;
			print<<"3.<background>yellow</background>"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==2){
				score5 = 10;
				t5 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t5=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: <body style=\"background-color:yellow;\">"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nVI.Choose the correct HTML element to define important text\n"<<endl;
			print<<"1.<improtant>"<<endl;
			print<<"2.<strong>"<<endl;
			print<<"3.<i>"<<endl;
			print<<"4.<b>"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==2){
				score6 = 10;
				t6 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t6=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: <strong>"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nVII.Choose the correct HTML element to define emphasized text\n"<<endl;
			print<<"1.<italic>"<<endl;
			print<<"2.<em>"<<endl;
			print<<"3.<i>"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==2){
				score7 = 10;
				t7 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t7=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: <em>"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nVIII.Which character is used to indicate an end tag?\n"<<endl;
			print<<"1.^"<<endl;
			print<<"2.*"<<endl;
			print<<"3.<"<<endl;
			print<<"4./"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==4){
				score8 = 10;
				t8 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t8=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: /"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nIX.How can you open a link in a new tab/browser window?\n"<<endl;
			print<<"1.<a href=\"url\" target=\"new\">"<<endl;
			print<<"2.<a href=\"url\" target=\"_blank\">"<<endl;
			print<<"3.<a href=\"url\" new>"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==2){
				score9 = 10;
				t9 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t9=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: <a href=\"url\" target=\"_blank\">"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nX.Which of these elements are all <table> elements?\n"<<endl;
			print<<"1.<table><tr><td>"<<endl;
			print<<"2.<thead><body><tr>"<<endl;
			print<<"3.<table><head><tfoot>"<<endl;
			print<<"4.<table><tr><tt>"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==1){
				score10 = 10;
				t10 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t10=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: <table><tr><td>"<<endl;
			}
			break;
			
			
			
			//Quiz for Student HMTL 33333333333333333333333333
			
			
			case 3 :
				SetConsoleTextAttribute(color,15);
			print<<"\nI.inline elements are normally displayed without starting a new line.\n"<<endl;
			print<<"1.False"<<endl;
			print<<"2.True"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==2){
				score1 = 10;
				t1 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t1=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: True"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nII.How can you make a numbered list?\n"<<endl;
			print<<"1.<dl>"<<endl;
			print<<"2.<list>"<<endl;
			print<<"3.<ul>"<<endl;
			print<<"4.<ol>"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==4){
				score2 = 10;
				t2 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t2=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: <ol>"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nIII.How can you make a bulleted list?\n"<<endl;
			print<<"1.<dl>"<<endl;
			print<<"2.<ol>"<<endl;
			print<<"3.<list>"<<endl;
			print<<"4.<ul>"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==4){
				score3 = 10;
				t3 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t3=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: <ul>"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nIV.HTML comments start with <!-- and end with -->\n"<<endl;
			print<<"1.True"<<endl;
			print<<"2.False"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==1){
				score4 = 10;
				t4 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t4=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: True"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nV.Block elements are normally displayed without starting a new line.\n"<<endl;
			print<<"1.True"<<endl;
			print<<"2.False"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==2){
				score5 = 10;
				t5 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t5=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: False"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nVI.Which HTML element defines the title of a document?\n"<<endl;
			print<<"1.<meta>"<<endl;
			print<<"2.<title>"<<endl;
			print<<"3.<head>"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==2){
				score6 = 10;
				t6 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t6=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: <title>"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nVII.Which HTML attribute specifies an alternate tet for an image; if the image cannot be displayed?\n"<<endl;
			print<<"1.src"<<endl;
			print<<"2.title"<<endl;
			print<<"3.longdesc"<<endl;
			print<<"4.alt"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==4){
				score7 = 10;
				t7 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t7=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: alt"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nVIII.Whih HTML element is used to specify a footer for a document or section?\n"<<endl;
			print<<"1.<bottom>"<<endl;
			print<<"2.<footer>"<<endl;
			print<<"3.<section>"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==2){
				score8 = 10;
				t8 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t8=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: <footer>"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nIX.In HTML, you can embed SVG elements directly into an HTML page\n"<<endl;
			print<<"1.True"<<endl;
			print<<"2.False"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==1){
				score9 = 10;
				t9 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t9=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: True"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nX.What is the correct HTML element for playing video files?\n"<<endl;
			print<<"1.<movie>"<<endl;
			print<<"2.<media>"<<endl;
			print<<"3.<video>"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==3){
				score10 = 10;
				t10 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t10=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: <video>"<<endl;
			}
			break;
			
	}
	
	
	
	//Quiz C++ Programming for Student 1111111111111111111111
	
	
	
	switch(cpp){
		case 1 :
			print<<"\nI.What is a correct syntax to output \"Hello World\" in C++?\n"<<endl;
			print<<"1.print (\"Hello World\");"<<endl;
			print<<"2.System.out.println(\"Hello World\");"<<endl;
			print<<"3.cout << \"Hello World\"; "<<endl;
			print<<"4.Console.WriteLine(\"Hello World\");"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==3){
				score1 = 10;
				t1 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t1=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: cout<<""Hello World\""<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nII.C++ is an alias of C#\n"<<endl;
			print<<"1.True"<<endl;
			print<<"2.False "<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==2){
				score2 = 10;
				t2 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t2=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: False"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nIII.How do you insert COMMENTS in C++ code?\n"<<endl;
			print<<"1.# This is a comment"<<endl;
			print<<"2.// This is a comment "<<endl;
			print<<"3./* This is a comment"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==2){
				score3 = 10;
				t3 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t3=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: // This is a comment"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nIV.Which data type is used to create a variable that should store text?\n"<<endl;
			print<<"1.String"<<endl;
			print<<"2.string"<<endl;
			print<<"3.myString"<<endl;
			print<<"4.Txt"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==2){
				score4 = 10;
				t4 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t4=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: string"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nV.How do you create a variable with the numeric value 5?\n"<<endl;
			print<<"1.num x = 5"<<endl;
			print<<"2.int x = 5;"<<endl;
			print<<"3.x = 5;"<<endl;
			print<<"4.double x = 5;"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==2){
				score5 = 10;
				t5 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t5=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: int x = 5;"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nVI.How do you create a variable with the floating number 2.8?\n"<<endl;
			print<<"1.double x = 2.8;"<<endl;
			print<<"2.byte x = 2.8"<<endl;
			print<<"3.x = 2.8;"<<endl;
			print<<"4.int x = 2.8;"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==1){
				score6 = 10;
				t6 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t6=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: double x = 2.8;"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nVII.Which method can be used to find the length of a string?\n"<<endl;
			print<<"1.getSize()"<<endl;
			print<<"2.length()"<<endl;
			print<<"3.getLength()"<<endl;
			print<<"4.len()"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==2){
				score7 = 10;
				t7 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t7=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: length()"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nVIII.Which operator is used to add together two values?\n"<<endl;
			print<<"1.The + sign"<<endl;
			print<<"2.The & sign"<<endl;
			print<<"3.The * sign"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==1){
				score8 = 10;
				t8 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t8=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: The + sign"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nIX.The value of a string variable can be surrounded by single quotes.\n"<<endl;
			print<<"1.False"<<endl;
			print<<"2.True"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==1){
				score9 = 10;
				t9 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t9=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: False"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nX.Which header file lets us work with input and output objects?\n"<<endl;
			print<<"1.#include <iosstring>"<<endl;
			print<<"2.#include <inputstr>"<<endl;
			print<<"3.#include <iostream>"<<endl;
			print<<"4.#include <stream>"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==3){
				score10 = 10;
				t10 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t10=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: #include <iostream>"<<endl;
			}
			break;
			
			
			//Quiz for Student C++ Programming 22222222222222222222222222222222222222222222222222222222
			
			
			
		case 2 :
			print<<"\nI.Which operator can be used to compare two values?\n"<<endl;
			print<<"1.<>"<<endl;
			print<<"2.><"<<endl;
			print<<"3.=="<<endl;
			print<<"4.="<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==3){
				score1 = 10;
				t1 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t1=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: =="<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nII.To declare an array in C++, define the variable type with:\n"<<endl;
			print<<"1.{}"<<endl;
			print<<"2.[]"<<endl;
			print<<"3.()"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==2){
				score2 = 10;
				t2 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t2=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: []"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nIII.Array indexes start with:\n"<<endl;
			print<<"1.0"<<endl;
			print<<"2.1"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==1){
				score3 = 10;
				t3 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t3=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: 0"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nIV.How do you create a function in C++?\n"<<endl;
			print<<"1.functionName[]"<<endl;
			print<<"2.functionName."<<endl;
			print<<"3.functionName()"<<endl;
			print<<"4.(functionName)"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==3){
				score4 = 10;
				t4 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t4=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: functionName()"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nV.How do you call a function in C++?\n"<<endl;
			print<<"1.functionName[]"<<endl;
			print<<"2.functionName()"<<endl;
			print<<"3.functionName;"<<endl;
			print<<"4.(functionName);"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==2){
				score5 = 10;
				t5 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t5=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: functionName()"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nVI.Which keyword is used to create a class in C++?\n"<<endl;
			print<<"1.class()"<<endl;
			print<<"2.className"<<endl;
			print<<"3.myclass"<<endl;
			print<<"4.class"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==4){
				score6 = 10;
				t6 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t6=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: class"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nVII.What is the correct way to create an object called myObj of MyClass?\n"<<endl;
			print<<"1.class myObj = new MyClass();"<<endl;
			print<<"2.class MyClass = new myObj();"<<endl;
			print<<"3.MyClass myObj;"<<endl;
			print<<"4.new myObj = MyClass();"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==3){
				score7 = 10;
				t7 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t7=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: MyClass myObj;"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nVIII.In C++, it is possible to inherit attributes and methods from one class to another.\n"<<endl;
			print<<"1.False"<<endl;
			print<<"2.True"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==2){
				score8 = 10;
				t8 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t8=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: True"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nIX.Which method can be used to find the highest value of x and y?\n"<<endl;
			print<<"1.largest(x,y)"<<endl;
			print<<"2.max(x,y) "<<endl;
			print<<"3.maxNum(x,y)"<<endl;
			print<<"4.maximum(x,y)"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==2){
				score9 = 10;
				t9 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t9=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: max(x,y)"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nX.Which operator is used to multiply numbers?\n"<<endl;
			print<<"1.x"<<endl;
			print<<"2.%"<<endl;
			print<<"3.#"<<endl;
			print<<"4.*"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==4){
				score10 = 10;
				t10 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t10=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: *"<<endl;
			}
			break;
			
			
			
			//Quiz for Student C++ Programming 33333333333333333333333333
			
			
			case 3 :
			print<<"\nI.How do you create a reference variable of an existing variable?\n"<<endl;
			print<<"1.With the REF word"<<endl;
			print<<"2.With the REF word"<<endl;
			print<<"3.With the & operator"<<endl;
			print<<"4.With the ref word"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==3){
				score1 = 10;
				t1 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t1=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: With the & operator"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nII.How do you start writing an if statement in C++?\n"<<endl;
			print<<"1.if (x > y)  "<<endl;
			print<<"2.if x > y:"<<endl;
			print<<"3.if x > y then:"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==1){
				score2 = 10;
				t2 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t2=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: if (x > y)"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nIII.How do you start writing a while loop in C++?\n"<<endl;
			print<<"1.while (x > y)  "<<endl;
			print<<"2.while x > y:"<<endl;
			print<<"3.while x > y {"<<endl;
			print<<"4.x > y while {"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==1){
				score3 = 10;
				t3 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t3=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: while (x > y)"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nIV.Which keyword is used to return a value inside a method?\n"<<endl;
			print<<"1.get"<<endl;
			print<<"2.break"<<endl;
			print<<"3.void"<<endl;
			print<<"4.return"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==4){
				score4 = 10;
				t4 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t4=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: return"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nV.Which statement is used to stop a loop?\n"<<endl;
			print<<"1.return"<<endl;
			print<<"2.break"<<endl;
			print<<"3.stop"<<endl;
			print<<"4.exit"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==2){
				score5 = 10;
				t5 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t5=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: break"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nVI.Which member function of a class can\'t modify its objects attributes?\n"<<endl;
			print<<"1.Static member functions"<<endl;
			print<<"2.Constant member functions"<<endl;
			print<<"3.Private member functions"<<endl;
			print<<"4.friend functions"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==2){
				score6 = 10;
				t6 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t6=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: Constant member functions"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nVII.Which of the following parameter passing mechanism is/are supported by C++ but not in C?\n"<<endl;
			print<<"1.Pass by address"<<endl;
			print<<"2.Pass by value"<<endl;
			print<<"3.Pass by reference"<<endl;
			print<<"4.All"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==3){
				score7 = 10;
				t7 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t7=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: Pass by reference"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nVIII.What does a floating point number contain?\n"<<endl;
			print<<"1.None"<<endl;
			print<<"2.Fractional part only."<<endl;
			print<<"3.Both integer and fractional part."<<endl;
			print<<"4.Integer part only"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==3){
				score8 = 10;
				t8 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t8=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: Both integer and frational part."<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nIX.Which of the following keywords can\'t appear inside a class definition?\n"<<endl;
			print<<"1.friend"<<endl;
			print<<"2.static"<<endl;
			print<<"3.template"<<endl;
			print<<"4.virtual"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==3){
				score9 = 10;
				t9 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t9=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: template"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nX.Which of the following is the right approach for declaring an interface class?\n"<<endl;
			print<<"1.It isn't possible to create interface classes in C++."<<endl;
			print<<"2.By making all the methods pure virtual in the class."<<endl;
			print<<"3.By declaring the class as an interface with keyword 'interface'."<<endl;
			print<<"4.By making all of the class methods as abstract using the 'abstract'"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==2){
				score10 = 10;
				t10 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t10=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: By making all the methods pure virtual in the class."<<endl;
			}
			break;
	}
	
	
	
	//Quiz C Programming for student
	
	
	switch(c){
		case 1 :
			print<<"\nI.What is the correct value to return to the operating system upon the successful completion of a program?\n"<<endl;
			print<<"1.-1"<<endl;
			print<<"2.1"<<endl;
			print<<"3.0"<<endl;
			print<<"4.Programs do not return a value."<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==3){
				score1 = 10;
				t1 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t1=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Ansewer: 0"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nII.What is the only function all C programs must contain?\n"<<endl;
			print<<"1.start()"<<endl;
			print<<"2.system()"<<endl;
			print<<"3.main()"<<endl;
			print<<"4.program()"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==3){
				score2 = 10;
				t2 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t2=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: main()"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nIII.What puntuation is used to signal the beginning and end of code blocks?\n"<<endl;
			print<<"1.{}"<<endl;
			print<<"2.-> and <-"<<endl;
			print<<"3.BEGIN and END"<<endl;
			print<<"4.( and )"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==1){
				score3 = 10;
				t3 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t3=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: {}"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nIV.What puctuation ends most lines of C code?\n"<<endl;
			print<<"1.,"<<endl;
			print<<"2.;"<<endl;
			print<<"3.:"<<endl;
			print<<"4.'"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==2){
				score4 = 10;
				t4 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t4=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: ;"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nV.whixh of the following is a correct comment?\n"<<endl;
			print<<"1.*/ Comments */"<<endl;
			print<<"2.** Comment **"<<endl;
			print<<"3./* Comment */"<<endl;
			print<<"4.{ Comment }"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==3){
				score5 = 10;
				t5 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t5=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: /* Comment */"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nVI.Which of the following is not a correct variable type?\n"<<endl;
			print<<"1.float"<<endl;
			print<<"2.real"<<endl;
			print<<"3.int"<<endl;
			print<<"4.double"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==2){
				score6 = 10;
				t6 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t6=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: real"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nVII.Which of the following is the correct operator to compare two variables?\n"<<endl;
			print<<"1.:="<<endl;
			print<<"2.="<<endl;
			print<<"3.equal"<<endl;
			print<<"4.=="<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==4){
				score7 = 10;
				t7 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t7=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: =="<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nVIII.Which of the following is true?\n"<<endl;
			print<<"1.1"<<endl;
			print<<"2.66"<<endl;
			print<<"3.All of the above"<<endl;
			print<<"4.-1"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==3){
				score8 = 10;
				t8 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t8=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: All of the above"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nIX.Which of the following is the boolean operator for logial-and?\n"<<endl;
			print<<"1.&"<<endl;
			print<<"2.&&"<<endl;
			print<<"3.|"<<endl;
			print<<"4.|&"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==2){
				score9 = 10;
				t9 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t9=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: &&"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nX.Evaluate!(1 && !(0 || 1)).\n"<<endl;
			print<<"1.True"<<endl;
			print<<"2.False"<<endl;
			print<<"3.Unevaluatalbe"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==1){
				score10 = 10;
				t10 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t10=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: True"<<endl;
			}
			break;
//		
			
			//Quiz for Student C Programming 22222222222222222222222222222222222222222222222222222222
			
			
			
		case 2 :
			print<<"\nI.Which follows the case statement?\n"<<endl;
			print<<"1.:"<<endl;
			print<<"2.;"<<endl;
			print<<"3.-"<<endl;
			print<<"4.A newline"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==1){
				score1 = 10;
				t1 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t1=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: :"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nII.Which of the following shows the correct syntax for an if statement\n"<<endl;
			print<<"1.if expression"<<endl;
			print<<"2.if { expression }"<<endl;
			print<<"3.if (expression)"<<endl;
			print<<"4.expression if"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==3){
				score2 = 10;
				t2 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t2=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: if (expression)"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nIII.What is the final value of x when the code int x; for (x=0; x <10; x++) { is }\n"<<endl;
			print<<"1.10"<<endl;
			print<<"2.9"<<endl;
			print<<"3.0"<<endl;
			print<<"4.1"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==1){
				score3 = 10;
				t3 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t3=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: 10"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nIV.When dows the code blok following while (x<100) execute?\n"<<endl;
			print<<"1.When x is less than one hundred"<<endl;
			print<<"2.when x is greater than one hundred"<<endl;
			print<<"3.while it wishes"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==1){
				score4 = 10;
				t4 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t4=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: When x is less than one hundred"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nV.Which is not a loop structure?\n"<<endl;
			print<<"1.For"<<endl;
			print<<"2.Do while"<<endl;
			print<<"3.While"<<endl;
			print<<"4.Repeat Until"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==4){
				score5 = 10;
				t5 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t5=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: Repeat Until"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nVI.How many times is a do while loop guaranteed to loop?\n"<<endl;
			print<<"1.0"<<endl;
			print<<"2.Infinitely"<<endl;
			print<<"3.1"<<endl;
			print<<"4.Variable"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==3){
				score6 = 10;
				t6 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t6=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: 1"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nVII.Which is not a proper prototype?\n"<<endl;
			print<<"1.int funct(char x, char y);"<<endl;
			print<<"2.double (char x, char y)"<<endl;
			print<<"3.void funct();"<<endl;
			print<<"4.char x();"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==2){
				score7 = 10;
				t7 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t7=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: double funt(char x, char y)"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nVIII.What is the return type of the function with prototype: \"int func(char x, float v, double t);\"\n"<<endl;
			print<<"1.char"<<endl;
			print<<"2.int"<<endl;
			print<<"3.float"<<endl;
			print<<"4.double"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==2){
				score8 = 10;
				t8 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t8=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: True"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nIX.Which of the following is a valid function call (assuming the function exists)?\n"<<endl;
			print<<"1.funct;"<<endl;
			print<<"2.funct x, y;"<<endl;
			print<<"3.funct();"<<endl;
			print<<"4.int funct();"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==3){
				score9 = 10;
				t9 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t9=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: funct()"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nX.Which of the following is a complete function?\n"<<endl;
			print<<"1.int funct();"<<endl;
			print<<"2.int funct(int x) {return x=x+1;}"<<endl;
			print<<"3.void funct(int) { printf( \"Hello\");"<<endl;
			print<<"4.void funct(x) { printf( \"Hello\"); }"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==4){
				score10 = 10;
				t10 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t10=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: void funct(x) { printf( \"Hello\";) }"<<endl;
			}
			break;
			
			
			
			//Quiz for Student C Programming 33333333333333333333333333
			
			
			case 3 :
			print<<"\nI.Which of the following is the proper declaration of a pointer?\n"<<endl;
			print<<"1.int x;"<<endl;
			print<<"2.int &x;"<<endl;
			print<<"3.ptr x;"<<endl;
			print<<"4.int *x;"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==4){
				score1 = 10;
				t1 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t1=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: int *x;"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nII.Which of the following gives the memory address of integer variable a?\n"<<endl;
			print<<"1.*a;"<<endl;
			print<<"2.a;"<<endl;
			print<<"3.&a;"<<endl;
			print<<"4.address(a);"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==3){
				score2 = 10;
				t2 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t2=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: &a;"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nIII.Which of the following gives the memory address of a variable pointed to by pointer a?\n"<<endl;
			print<<"1.a;"<<endl;
			print<<"2.*a;"<<endl;
			print<<"3.&a;"<<endl;
			print<<"4.address(a);"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==1){
				score3 = 10;
				t3 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t3=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: a;"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nIV.Which of the following gives the value stored at the address pointed to by pointer a?\n"<<endl;
			print<<"1.a;"<<endl;
			print<<"2.val(a);"<<endl;
			print<<"3.*a;"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==3){
				score4 = 10;
				t4 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t4=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: *a;"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nV.Which of the following is the proper keyword to allocate memory in C?\n"<<endl;
			print<<"1.new"<<endl;
			print<<"2.malloc"<<endl;
			print<<"3.create"<<endl;
			print<<"4.value"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==2){
				score5 = 10;
				t5 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t5=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: malloc"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nVI.Which of the following is the proper keyword to deallocate memory?\n"<<endl;
			print<<"1.free"<<endl;
			print<<"2.delete"<<endl;
			print<<"3.clear"<<endl;
			print<<"4.remove"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==1){
				score6 = 10;
				t6 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t6=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: free"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nVII.Which of the following accesses a variable in structure b?\n"<<endl;
			print<<"1.b->var;"<<endl;
			print<<"2.b.var;"<<endl;
			print<<"3.b-var;"<<endl;
			print<<"4.b>var;"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==2){
				score7 = 10;
				t7 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t7=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: b.var;"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nVIII.Which of the following accesses a variable in structure *b?\n"<<endl;
			print<<"1.b->var;"<<endl;
			print<<"2.b.var;"<<endl;
			print<<"3.b-var;"<<endl;
			print<<"4.b>var;"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==1){
				score8 = 10;
				t8 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t8=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: b->;"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nIX.Which of the following is a properly defined struct?\n"<<endl;
			print<<"1.struct {int a;}"<<endl;
			print<<"2.struct a_struct {int a;}"<<endl;
			print<<"3.struct a_struct int a;"<<endl;
			print<<"4.struct a_struct {int a;};"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==4){
				score9 = 10;
				t9 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t9=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: struct a_struct {int a;};"<<endl;
			}
			SetConsoleTextAttribute(color,15);
			print<<"\nX.Which properly declares a variable of struct foo?\n"<<endl;
			print<<"1.struct foo;"<<endl;
			print<<"2.struct foo var;"<<endl;
			print<<"3.foo;"<<endl;
			print<<"4.int foo;"<<endl;
			print<<"Choose Answer: ";
			cin>>s1;
			if(s1==2){
				score10 = 10;
				t10 = 1;
				SetConsoleTextAttribute(color,2);
				print<<"True"<<endl;
			}else{
				t10=0;
				SetConsoleTextAttribute(color,4);
				print<<"\aFalse"<<endl;
				SetConsoleTextAttribute(color,2);
				print<<"Answer: struct foo var;"<<endl;
			}
			break;
	}
	string p,con,un;
	total = score1+score2+score3+score4+score5+score6+score7+score8+score9+score10;
	totalt = t1 + t2 + t3 + t4 + t5 + t6 + t7 + t8 + t9 + t10;
	q = 10 - totalt;
	if(totalt>=5){
		con = "Congratulation";
	}else if(totalt<5){
		un = "Join The Regret";
	}
	if(name.length()>=16){
		t = "\t";
	}
	if(total>=50){
		p = "Pass Exam";
		SetConsoleTextAttribute(color,15);
	print<<"\n====================================> Result <====================================\n";
	print<<"----------------------------------------------------------------------------------\n";
	print<<"\n\n| ID\t\t"<<g<<"| Name\t\t\t"<<t<<"| Score"<<"\t\t| Result"<<endl;
		SetConsoleTextAttribute(color,2);
		print<<"----------------------------------------------------------------------------------\n";
	print<<"| "<<id<<"\t\t| "<<name<<"\t\t| "<<total<<"\t\t| "<<p<<endl;
	print<<"----------------------------------------------------------------------------------\n";
	print<<"| True: "<<totalt<<"\t"<<g<<"| "<<con<<endl;
	print<<"----------------------------------------------------------------------------------\n";
		SetConsoleTextAttribute(color,4);
	print<<"| False: "<<q<<endl;
	print<<"----------------------------------------------------------------------------------\n";
		SetConsoleTextAttribute(color,2);
	print<<"\t\t\t\t| Thank You |";
	}else{
		p = "Fail Exam";
		SetConsoleTextAttribute(color,15);
	print<<"\n====================================> Result <====================================\n";
	print<<"----------------------------------------------------------------------------------\n";
	print<<"\n\n| ID\t\t"<<g<<"| Name\t\t\t"<<t<<"| Score"<<"\t\t| Result"<<endl;
	print<<"----------------------------------------------------------------------------------\n";
		SetConsoleTextAttribute(color,4);
	print<<"| "<<id<<"\t\t| "<<name<<"\t\t| "<<total<<"\t\t| "<<p<<endl;
	print<<"----------------------------------------------------------------------------------\n";
		SetConsoleTextAttribute(color,2);
	print<<"| True: "<<totalt<<endl;
	print<<"----------------------------------------------------------------------------------\n";
		SetConsoleTextAttribute(color,4);
	print<<"| False: "<<q<<"\t"<<g<<"| "<<un<<endl;
	print<<"----------------------------------------------------------------------------------\n";
		SetConsoleTextAttribute(color,2);
	print<<"\t\t\t\t| Thank You |";
	}
	getch();
}
{
	// Place your snippets for c here. Each snippet is defined under a snippet name and has a prefix, body and 
	// description. The prefix is what is used to trigger the snippet and the body will be expanded and inserted. Possible variables are:
	// $1, $2 for tab stops, $0 for the final cursor position, and ${1:label}, ${2:another} for placeholders. Placeholders with the 
	// same ids are connected.
	// Example:
	"template": {
		"prefix": "ccc",
		"body": [
			"#include<iostream>",
			"using namespace std;",
			"class student",
			"{",
			"int a,b;",
			"public:",
			"int getdata();",                                  
			"int showdata();",                              
			"};",
			"int student::getdata()",
			"{",
				//parameters...
			"}",
			 "int student::showdata()",
			"{",
			//parameters...
			"}",
			"int main()",
			"{",
				
				"student s1,s2;",
			"s1.getdata();",
			"s1.showdata();",
			"}",
	 	],
	 	"description": "Log output to console"
	}
}

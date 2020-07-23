//Viswanadh Kandala
//2019112011
#include<bits/stdc++.h>
using namespace std;
int lef=0,righ=-1,pointer=0;//left means the starting location of window w.r.t given text,similarly right,pointer is the letter we are refering from the given text string
string window,temp,text;
void init(int sized)//initialises the window based on left and right values
{
	{
		int i;
		if(righ>sized-1) lef=righ-sized+1;
		window.assign(text,lef,righ-lef+1);//copies values from text string
	}
	//cout<<window<<endl;
}


void mlp(int sized)//1a) returns the code for the letter pointer
{
	init(sized);
	//cout<<window<<endl;
	int i=0,c,j,z=0,lol;//LOL for storing righ value and z for temporary increase size of window to accomadate higher length words if possible
	temp.assign(text,pointer,1);//the character to be searched is assigned to temp string
	c=window.rfind(temp);//returns the index of the rightmost occurence of given character
	//		cout<<temp<<" "<<window<<endl;
	//		cout<<lef<<" "<<righ<<" "<<c<<endl;
	if(c==-1) {righ++;printf("(0,%c)\n",temp[0]);pointer++;}//if the character isn't present in window,it's code is returned here
	else 
	{
		//	c=window.find(temp);
		j=righ-c-lef+1;z=0;//stores the index of 1st occurenece of the word
		//cout<<lef<<" "<<righ<<" "<<c<<endl;
		//	cout<<window<<endl;
		lol=righ;
		while(c!=-1&&pointer<text.size())
		{
			j=lol-c-lef+1;
			++righ;++z;init(sized+z);++pointer;temp.append(text,pointer,1);
			c=window.rfind(temp);//combines next pointer to temp and as a whole searches for the temp string again
			//		cout<<temp<<" "<<window<<endl;
			//		cout<<lef<<" "<<righ<<" "<<c<<endl;
		}
		if(c==-1) printf("(1,%d,%d)\n",j,(int)temp.size()-1);//prints the code for word
		else printf("(1,%d,%d)\n",j,(int)temp.size());
	}
}


void parse(int sized)//1b) outputs the source code for given text
{
	righ++;printf("(0,%c)\n",text[0]);pointer++;//adds the 1st character of the text to window
	while(pointer<text.size())
	{
		mlp(sized);//runs the function mlp repeatedly
	}
	return;

}
int main()
{
	int sized,i;
	printf("Enter the text to be compressed\n");
	getline(cin,text);//input text
	printf("Enter the maximum size of the Sliding window\n");
	scanf("%d",&sized);//size of the window
	parse(sized);//source code function
	return 0;
}

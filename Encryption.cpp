#include<iostream>
using namespace std;

int main()
{
	string encryptedText;
	string text;
	int key,temp;
	label:
	cout<<"Enter the  text:";
	getline(cin, text);
    for(int i=0;i<text.size();i++)//if user enter numbers, it is not Accepted and program again ask to enter text
	  {
	  	if(text[i]!=32)
		{
	  	if(!((text[i]>=65&&text[i]<=90)||(text[i]>=97&&text[i]<=122)))
	    {
	  	cout<<"Incorrect Input! Please Enter Alphabets:"<<endl;
	  	goto label;
	    }
        }
	  	else
	  	break;
	  }
    //input key from user
	cout<<"Enter the shift from (0-9):";
	cin>>key;
	while(!(key>=0&&key<=9))
	{
		cout<<" please enter shift from (0-9):";
		cin>>key;
	}
    encryptedText=text;//text is stored in encryptedtext variable.
	    
    for(int i=0;i<=text.size();i++)//.size() function is used to run the loop to the container size.
    {
    	if(text[i]==32)//32 is ASCII value of space. 
    	{
    		key=key+2;
		}
		else
		{
			if((text[i]+key)>122)//after lower case z back to a,z ASCII is 122
			{
				 temp = (text[i] + key) - 122;
				encryptedText[i] =96 + temp;
			}
			else if(text[i]+ key > 90 && text[i]<=96)
			{
				//after uppercase z move back to a ,90 is ASCII of z
				 temp = (text[i] + key) -90;
				encryptedText[i] =64 + temp;
			}
			else 
			{
				//in case of character between A-Z & a-z.
				encryptedText[i]+=key;
		   }
		}
	
	}

	cout<<"Encrypted Text :"<<encryptedText;
	return 0;	
}


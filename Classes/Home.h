//menu
int c;
studentRecord student;
void displayMain()
{
	do{
		cout<<"\n\n\n\n\n\n\n\n\n\n\n";
		cout<<"\t\t\t          Jee Seat Allocation"<<endl;
		cout<<"\t\t||------------------------------------------------||"<<endl;
		cout<<"\t\t||\tCandidate:\t\t\t\t  ||"<<endl;
		cout<<"\t\t||\t\t 1.  Register \t2. Login \t  ||"<<endl;			
		cout<<"\t\t||\t\t 0.  Exit\t\t\t  ||"<<endl;
		cout<<"\t\t||------------------------------------------------||"<<endl;
		cout<<"\t\t\t\tEnter Your Choice:";
		cin>>c;
		switch(c)
		{
			case 1:
			{	 
				student.Enter_Student();
				break;
			}
			// case 2:
			// {	 
			// 	student.Display_Student();
			// 	break;
			// }
			case 0: exit(0);
			default:{
								cout<<"\t\t||------------------------------------------------||"<<endl;
								cout<<"\t\t\tEnter Above Mentioned choice only!"<<endl;
								cout<<"\t\t||------------------------------------------------||"<<endl;
								cout<<"\t\t\t\t     ";
								break;
			}
		}
	}
	while(c);
}

#include<bits/stdc++.h>

using namespace std;

	class Queue
	{
	private:
		int front;
		int rear;
		int arr[5];
	public:
		Queue()
		{
			front=-1;
			rear=-1;
			for(int i=0;i<5;i++)
			{
				arr[i]=0;
			}
		}

		bool isEmpty()
		{
			if(rear==-1 && front==-1)
				return true;
			else
				return false;
		}

		bool isFull()
		{
			if(rear==4)
				return true;
			else 
				return false;

		}

		void enqueue(int val)
		{
			if(isFull())
			{
				cout<<"Queue is full"<<endl;
				return;
			}
			else if(isEmpty())
			{
				rear=0;
				front=0;
				arr[rear]=val;
			}
			else
			{
				rear++;
				arr[rear]=val;
     
			}
		}

		int dequeue()
		{
			int x=0;
			if(isEmpty())
			{
				cout<<"Queue is Empty"<<endl;
				return x;
			}
			else if(front==rear)
			{
				x=arr[front];
				arr[front]=0;
				front=-1;
				rear=-1;
				return x;

			}
			else
			{
				x=arr[front];
				arr[front]=0;
				front++;
				return x;
			}
		}

		int count()
		{
			return(rear-front+1);
		}

		void display()
		{
			cout<<"All element in Queue :- "<<endl;
			for(int i=0;i<5;i++)
			{
				cout<<arr[i]<<endl;
			}
		}

    };

    int main()
    {
        Queue obj;
        int option,value;

        do
        {

    	    cout<<"what operation do you want to perform ? Select the option. Enter 0 to exit ."<<endl;
    	    cout<<"1.Enqueue()"<<endl;
    	    cout<<"2.Dequeue()"<<endl;
    	    cout<<"3.isEmpty()"<<endl;
    	    cout<<"4.isFull()"<<endl;
    	    cout<<"5.count()"<<endl;
    	    cout<<"6.display()"<<endl;
    	    cout<<"7.clear screen"<<endl;

    	    cin>>option;

    	    switch(option)
    	    {
    		    case 0:
    		        break;
    		    case 1:
    		        cout<<"***Enqueue operation***"<<endl;
    		        cout<<"Enter a value to enqueue in Queue:- ";
    		        cin>>value;
    		        obj.enqueue(value);
    		        break;

    		    case 2:
    		        cout<<"***Dequeue Operation***"<<endl;
    		        cout<<"Dequeued Value:"<<obj.dequeue()<<endl;
    		        break;

    		    case 3:
    		        if(obj.isEmpty())
    		        	cout<<"Queue is Empty"<<endl;
    		        else
    		        	cout<<"Queue is not Empty"<<endl;
    		        break;


    		    case 4:
    		        if(obj.isFull())
    		        	cout<<"Queue is Full"<<endl;
    		        else
    		        	cout<<"Queue is not Full"<<endl;
    		        break;


    		    case 5:

    		         cout<<"Total number of element is:"<<obj.count()<<endl;
    		         break;


    		    case 6:
    		        cout<<"All value in queue is :"<<endl;
    		        obj.display();

    		    case 7: 
    		        system("cls");
    		        break;

    		     default:
    		        cout<<"enter proper option "<<endl;
    		        break;   

    	    }


    	
        }
        while(option != 0);
        return 0;
    
    }	

#include<iostream>
#include<vector>

using namespace std;
int n;
 vector<string> tickets(n);

void sort(vector <string> tickets)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<tickets[i].size();j++)
        {
            for(int k=j+1;k<tickets[i].size();k++)
            {
                if(tickets[i][k]==tickets[i][j])
                {
                    tickets[i][k]='\0';
                }
                if(tickets[i][k]<tickets[i][j])
                {
                    int temp=tickets[i][j];
                    tickets[i][j]=tickets[i][k];
                    tickets[i][k]=temp;
                }
            }
        }
    }
}

void display(vector <string> tickets)
{
     for(int i=0;i<n;i++)
    {
       cout<<tickets[i];
    }
     
}



int main() {
    
    cin >> n;
   
     
         sort(tickets);
    for(int tickets_i = 0; tickets_i < n; tickets_i++){
       cin >> tickets[tickets_i];
    }
  
    return 0;
}

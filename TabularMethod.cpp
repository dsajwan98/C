// Header Files

#include<bits/stdc++.h>
using namespace std;

// Class Tabular Starts From Here....

class Tabular {
	
	private:
		vector <int> minterms;
		vector <vector<int> >numOfOne ;
		vector <vector<int> >twoCellGroup;
		vector <vector<int> >fourCellGroup;
			
	private:
		void StepOne();
		
		void StepTwo();
		
		void StepThree();
		
		void StepFour();
		
		void StepFive();
	
	public:
		void input();
};
// Class Tabular Ends Here....


// Main funnction Starts from Here....

int main(){
	
	Tabular obj;
	obj.input();
	
	return 0;
}

// Main funnction Ends Here....


// Input fuction will take input from user ,i.e., Minterms....
void Tabular::input(){
	int x;
	
	cout<<"Please Enter All the Minterms in the Expression (put \"end\" at the end) : \n\n";
	while (cin>>x){
		minterms.push_back(x);
	}	
	
	StepOne();
}

// STEP 1: Writing all the Minterms and Their Binary Equivalent....

void Tabular :: StepOne(){
	
	cout<<"\n\n"<<"STEP 1:\n";
	cout<<"\n Minterms "<<"\t"<<"Binary Equivalent  "<<"\n\n";
		
	for (int i=0; i<minterms.size(); i++){
		cout<<"  "<<minterms[i]<<"\t";
		cout<<"\t "<<bitset<4>(minterms[i])<<"\n";
	}
	StepTwo();
}

// STEP 2 : Grouping of Minterms accouring to Number of 1's presents in them...

void Tabular::StepTwo(){
	
	int count;
	
	for (int i=0; i<minterms.size(); i++){
		
		count = 0;
		bitset <4> Bit(minterms[i]);
		
		for (int j=Bit.size()-1; j>=0; j--){
			if (Bit.test(j) == 1)
				count++;
		}
	
		numOfOne.resize(5);
	
		if (count == 0){
			numOfOne[0].push_back(minterms[i]);
		}
		else if (count == 1){
			numOfOne[1].push_back(minterms[i]);
		}
		else if (count == 2){
			numOfOne[2].push_back(minterms[i]);
		}
		else if (count == 3){
			numOfOne[3].push_back(minterms[i]);
		}
		else if (count == 4){
			numOfOne[4].push_back(minterms[i]);
		}
			
	}
	
// Display Step Two

	cout<<"\n\n"<<"STEP 2:\n";
	cout<<"\n"<<"Number of 1's\t"<<" Minterms "<<"\t"<<"Binary Equivalent  "<<"\n\n";
	
	for (int i=0; i<5; i++){
		
		if (numOfOne[i].size() == 0)
			continue;
		
		cout<<" "<<i<<"\n";
		for (int j=0 ; j<numOfOne[i].size(); j++){
			
			cout<<"\t\t  "<<numOfOne[i][j]<<"\t";
			cout<<"\t "<<bitset<4>(numOfOne[i][j])<<"\n";
			
		}
	}
	
	StepThree();	
}

// Step 3: Two Cell Combinations

void Tabular::StepThree(){
	
	cout<<"\nStep 3:\n";
	cout<<"\n2-Cell Combinations\t Minterms\n\t\t\t  ABCD\n";
	
	int count=0,s=0;
	
	for (int i=0; i<numOfOne.size()-1; i++){
		
		if (numOfOne.size() == 0)
			continue;
		for (int j=0; j<numOfOne[i].size(); j++){
			if (numOfOne[i+1].size() == 0)
				break;

			for (int k=i+1; k<numOfOne.size();k++){
				for (int l=0;l<numOfOne[k].size(); l++){
				
					bitset <4> a (numOfOne[i][j]);
					bitset <4> b (numOfOne[k][l]);

					for (int z=0;z<4;z++)
						if (a.test(z) != b.test(z))
							count++;
						
					if (count == 1){
						
						twoCellGroup.push_back(vector<int> ());
						twoCellGroup[s].push_back(numOfOne[i][j]);
						twoCellGroup[s].push_back(numOfOne[k][l]);
						
						cout<<"\t("<<numOfOne[i][j]<<","<<numOfOne[k][l]<<")\t\t  ";
					
						for (int z=3;z>=0;z--){
							if (a.test(z) != b.test(z)){
								cout<<"X";
								twoCellGroup[s].push_back(z);
							}
							
							else cout<<a.test(z);
						}
						cout<<"\n";
						twoCellGroup[s++].push_back(i);
						
					}
					count=0;
				}
			}			
		}
		cout<<endl;
	}

	StepFour();
}

// Step 4: Four Cell Combinations

void Tabular::StepFour(){
	
	int count,s=0,g=0,b=0;
	
	cout<<"\nStep 4:\n";
	cout<<"\n4-Cell Combinations\t Minterms\n\t\t\t  ABCD\n";
	
int x;
	for (int i=0; i<twoCellGroup.size()-1; i++){
			count=0;
		for (int k=i+1; k<twoCellGroup.size(); k++){
		
			if (twoCellGroup[i][3] != twoCellGroup[k][3] && twoCellGroup[i][2] == twoCellGroup[k][2]){
		
				bitset <4> a(twoCellGroup[i][0]);
				bitset <4> b(twoCellGroup[k][0]);
				for (int z=0; z<4; z++){
					if (z==twoCellGroup[i][2])
						continue;
					if(a.test(z) != b.test(z))
						count++;
				}

				x=0;
				if (count==1){	
					if (g>0)
						for (int n=0 ;n<fourCellGroup.size(); n++)
							if (twoCellGroup[i][1] == fourCellGroup[n][2] && twoCellGroup[k][0] == fourCellGroup[n][1]){
								x=1;
								break;
							}
					
					if (x!=1){
					
					x=0;	
					fourCellGroup.push_back(vector <int> ());
					fourCellGroup[s].push_back(twoCellGroup[i][0]);
					fourCellGroup[s].push_back(twoCellGroup[i][1]);
					fourCellGroup[s].push_back(twoCellGroup[k][0]);
					fourCellGroup[s].push_back(twoCellGroup[k][1]);
					fourCellGroup[s].push_back(twoCellGroup[i][2]);
					g++;
					cout<<"\n("<<twoCellGroup[i][0]<<","<<twoCellGroup[i][1]<<","<<twoCellGroup[k][0]<<","<<twoCellGroup[k][1]<<")";
					cout<<"\t\t  ";
					for (int z=3; z>=0; z--){
						if (z==twoCellGroup[i][2])	
							cout<<"X";
						
						else if (a.test(z) == b.test(z))
							cout<<a.test(z);
						else {
							fourCellGroup[s++].push_back(z);
							cout<<"X";
						} 
					}
					
				}		
			}
		}
			
			else 
				continue;	
			
		}
	}
}	

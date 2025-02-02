#include<iostream>
 using namespace std;
 
 struct danhdau{
 	int so;
 	bool dau;
 };
 
 void Nhap(danhdau phieuloto[][3], int &n, int arr[][1]){
 	
 	for(int i=0;i<3;i++){
 		for(int j=0;j<3;j++){
 			cin>>phieuloto[i][j].so;
		 }
	 }
 	
 	cin>>n;
 	for(int i=0;i<n;i++){
 		cin>>arr[i][0];
	 }
 }
 
 void sosanh(danhdau phieuloto[][3], int n, int arr[][1]){
 	int k=0;
 	while(k<n){
 		for(int i=0;i<3;i++){
 			for(int j=0;j<3;j++){
 				if(phieuloto[i][j].so==arr[k][0]){
 					phieuloto[i][j].dau=1;
				 }
			 }
		 }
 		k++;
	 }
 	//kinh dong
 	int kinhdong=0;
 	for(int i=0;i<3;i++){
 		for(int j=0;j<3;j++){
 			if(phieuloto[i][j].dau==1) kinhdong++;
		 }
	 }
 	
 	int kinhcot=0;
 	for(int i=0;i<3;i++){
 		for(int j=0;j<3;j++){
 			if(phieuloto[j][i].dau==1) kinhcot++;
		 }
	 }
 	
 	
 	int kinhcheochinh=0;
 	for(int i=0;i<3;i++){
 		for(int j=0;j<3;j++){
 			if(i==j){
 				if(phieuloto[i][j].dau==1) kinhcheochinh++;
			 }
		 }
	 }
 	
 	int kinhcheophu=0;
 	for(int i=0;i<3;i++){
 		for(int j=0;j<3;j++){
 			if(i+j==2){
 				if(phieuloto[i][j].dau==1) kinhcheophu++;
			 }
		 }
	 }
	 
	 
	 for(int i=0;i<3;i++){
	 	for(int j=0;j<3;j++){
	 		cout<<phieuloto[i][j].dau<<" ";
		 }
		 cout<<endl;
	 } 
	 
	 cout<<endl;
	 
	 
	 
	 
 	if(kinhdong==3) cout<<"Yes";
 	else if(kinhcot==3) cout<<"Yes";
 	else if(kinhcheochinh==3) cout<<"Yes";
 	else if(kinhcheophu==3) cout<<"Yes";
 	 else cout<<"No";
 }
 
 int main(){
 	int n;
 	danhdau phieuloto[3][3];
 	int arr[n][1];
 	Nhap(phieuloto,n,arr);
 	sosanh(phieuloto,n,arr);
 }

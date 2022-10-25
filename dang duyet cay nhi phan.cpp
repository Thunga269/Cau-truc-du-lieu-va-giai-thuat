#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
//inOder: LNF
//preOrder: NLR
//postOrder: LRN
struct Node{
	int data;
	Node *left, *right;
	Node(int x){
		data = x;
		left = right = NULL;
	}
};
void PreOrder(Node *root){ //tien thu tu: goc trai phai
	if(root != NULL){
		cout << root->data<<" ";
		PreOrder(root->left);
		PreOrder(root->right)
	}
}
void InOrder(Node *root){//trung thu tu: trai goc phai
	if(root != NULL){
		InOrder(root->left);
		cout << root->data<<" ";
		InOrder(root->right);
	}	
}
void PostOrder(Node *root){ //hau thu tu: trai phai goc
	if(root != NULL){
		PostOrder(root->left);
		PostOrder(root->right);
		cout << root->data<<" ";
	}
}
void makeNode(Node *root, int n1, int n2, char c){
	switch(c):
		case 'L': root->left= new Node(n2);
		break;
		case 'R': root->right= new Node(n2);
		break;
}
void insert(Node *root, int n1, int n2, char c){
	if(root == NULL) return;
	if(root->data==n1){
		makeNode(root, n1, n2, c);
	}else{
		insert(root->left, n1, n2, c);
		insert(root->right, n1, n2, c);
	}
	
}
int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		Node *root;
		int n1, n2; char c;
		while(n--){
			cin >> n1>>n2>>c;
			if(root2 == NULL){
				root2 = new Node(n1);
				makeNode(root2, n1, n2, c);
			}else insert(root2, n1, n2, c);
		}
	}
}
/*
1
6
4  2  5  1  3  6
1  2  4  5  3  6
*/

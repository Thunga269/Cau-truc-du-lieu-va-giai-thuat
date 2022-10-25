#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
struct Node{
	int data;
	Node *left, *right;
	Node(int x){
		data = x;
		left = right = NULL;
	}
};
void duyet(Node *root){
	if(root == NULL) return;
	if(root!= NULL) cout << root->data<<" ";
	duyet(root->left);
	duyet(root->right);
}

bool duyet_NLR(Node *root1, Node *root2){//PreOrder
	if(root1 == NULL && root2 == NULL) return true;
	else if(root1 != NULL && root2 != NULL){
		//cout << root1->data <<" "<< root2->data <<endl;
		if(root1->data != root2->data) return false;
		duyet_NLR(root1->left, root2->left); 
		duyet_NLR(root1->right, root2->right);
	}
	return true;
}/*
void duyet_NLR(Node *root1, Node *root2){//PreOrder
	if(root1 == NULL && root2 == NULL) return;
	else if(root1 != NULL && root2 != NULL){
		cout << root1->data <<" "<< root2->data <<" ";
		if(root1->data != root2->data) cout <<"0" <<endl;
		duyet_NLR(root1->left, root2->left); 
		duyet_NLR(root1->right, root2->right);
	}
	
}*/
void makeNode(Node *root, int n1, int n2, char c){
	switch(c){
		case 'L': root->left = new Node(n2);
		break;
		case 'R': root->right = new Node(n2);
		break;
	}
	
}
void insert(Node *root, int n1, int n2, char c){
	if(root == NULL) return;
	if(root->data == n1){
		makeNode(root, n1, n2, c);
	}else{
		insert(root->left, n1, n2, c);
		insert(root->right, n1, n2, c);
	}
}
int main(){
	int t, n, m;
	cin >> t;
	while(t--){
		cin >> n;
		Node *root = NULL;
		Node *root2 = NULL;
		while(n--){
			int n1, n2; char c;
			cin >> n1 >> n2 >> c;
			if(root == NULL){
				root = new Node(n1);
				makeNode(root, n1, n2, c);
			}else insert(root, n1, n2, c);
		}
		cin >> m;
		while(m--){
			int n1, n2; char c;
			cin >> n1 >> n2 >> c;
			if(root2 == NULL){
				root2 = new Node(n1);
				makeNode(root2, n1, n2, c);
			}else insert(root2, n1, n2, c);
		}
		//duyet(root); cout << endl; duyet(root2);
		if(duyet_NLR(root, root2)) cout << "1";
		else cout <<"0";
		//duyet_NLR(root, root2);
		cout << endl;
	}
}



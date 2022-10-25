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
bool isFullTree(Node *root){
	if(!root) return true;
	if(!root->left && !root->right) return true;
	Node *r, *l;
	r = root->right;
	l = root->left;
	if(l&&r){
		if(isFullTree(l)&&isFullTree(r)) return true;
	}
	return false;
} 
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
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		Node *root = NULL;
		while(n--){
			int n1, n2; char c;
			cin >> n1 >> n2 >> c;
			if(root == NULL){
				root = new Node(n1);
				makeNode(root, n1, n2, c);
			}else insert(root, n1, n2, c);
		}
		//cout << isFullTree(root);
		if(isFullTree(root)) cout <<"1";
		else cout << "0";
		cout << endl;
	}
}



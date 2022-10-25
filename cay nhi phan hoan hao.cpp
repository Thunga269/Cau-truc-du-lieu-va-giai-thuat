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
bool isPerfectTree(Node *root){
	queue <Node*> Q;
	Q.push(root);
	int s= 0, f=0, level=0;
	while(!Q.empty()){
		s = Q.size();
		f = 0;
		if(s!= int(pow(2, level))) return false;
		for(int i = 0; i < s; i++){
			Node *t = Q.front(); Q.pop();
			if(t->left) Q.push(t->left);
			if(t->right) Q.push(t->right);
		}
		level++;
	}
	return true;
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
		if(isPerfectTree(root)) cout <<"Yes";
		else cout <<"No";
		cout << endl;
	}
}



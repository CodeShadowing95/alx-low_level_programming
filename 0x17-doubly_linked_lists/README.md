<h1>Doubly linked lists</h1>
<p>A <strong>doubly linked list</strong> is a type of linked list in which each node consists of 3 components:</p>
<ul>
<li><code>\*prev</code> pointer to the address of the previous node</li>
<li><code>data</code> data item</li>
<li><code>\*next</code> pointer to the address of the next node</li>
</ul>
<p>Each struct node has data item, a pointer to the previous struct node, and a pointer to the next struct node like:</p>
<code>
struct node {
	int data;
	struct node *prev;
	struct node *next;
}
</code>

<h1>Usage of Doubly linked lists</h1>
0- print all the elements</br>
1- get the number of elements in a list</br>
2- add a new node at the beginning of a list</br>

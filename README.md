<h1> Binary Trees</h1>

This project is part of <b>ALX Software Engineering Program.</b> It covers:- 
    * Tree Implementation
    * Tree traversing algorithms
    * Tree Node Creation


## Usage

### To check compile, run and check each program, You need to complile the program with nessecary file as follow.

This is the way to compile and run :

for <b>0-binary_tree_node.c</b> use:<br>
`gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-main.c 0-binary_tree_node.c -o 0-node`
and run the executable `./0-node`.

for <b>1-binary_tree_insert_left.c</b> use:<br>
`gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 1-main.c 1-binary_tree_insert_left.c 0-binary_tree_node.c -o 1-left`
and run the executable `1-left`.

for <b>2-binary_tree_insert_right.c</b> use:<br>
`gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 2-main.c 2-binary_tree_insert_right.c 0-binary_tree_node.c -o 2-right`<br>
and run the executable `./2-right`.

for <b>3-binary_tree_delete.c</b> use: <br>
`gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 3-main.c 3-binary_tree_delete.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 3-del`<br>
and run the executable `./3-del`. <br>
if <b>valgrind</b> is installed on your system, run `valgrind ./3-del` to see there is no memory leak.

for <b>4-binary_tree_is_leaf.c</b> use:<br>
`gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 4-binary_tree_is_leaf.c 4-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 4-leaf`<br>
and run the executable `./4-leaf`.

for <b>5-binary_tree_is_root.c</b> use:<br>
`gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 5-binary_tree_is_root.c 5-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 5-root`<br>
and run the executable `./5-root`.

for <b>6-binary_tree_preorder.c</b> use:<br>
`gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 6-main.c 6-binary_tree_preorder.c 0-binary_tree_node.c -o 6-pre`<br>
and run the executable `./6-pre`.

for <b>7-binary_tree_inorder.c</b> use:<br>
`gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 7-main.c 7-binary_tree_inorder.c 0-binary_tree_node.c -o 7-in`<br>
and run the executable `./7-in`.

for <b>8-binary_tree_postorder.c</b> use:<br>
`gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 8-main.c 8-binary_tree_postorder.c 0-binary_tree_node.c -o 8-post`<br>
and run the executable `./8-post`.

for <b>9-binary_tree_height.c</b> use:<br>
`gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 9-binary_tree_height.c 9-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 9-height`<br>
and run the executable `./9-height`.


for <b>10-binary_tree_depth.c</b> use:<br>
`gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 10-binary_tree_depth.c 10-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 10-depth`<br>
and run the executable `./10-depth`.

for <b>11-binary_tree_size.c</b> use:<br>
`gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 11-binary_tree_size.c 11-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 11-size`<br>
and run the executable `./11-size`.

for <b>12-binary_tree_leaves.c</b> use:<br>
`gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 12-binary_tree_leaves.c 12-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 12-leaves`<br>
and run the executable `./12-leaves`.

for <b>13-binary_tree_nodes.c</b> use:<br>
`gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 13-binary_tree_nodes.c 13-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 13-node`<br>
and run the executable `./13-nodes`.

for <b>14-binary_tree_balance.c</b> use:<br>
`gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 14-binary_tree_balance.c 14-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c 1-binary_tree_insert_left.c -o 14-balance`<br>
and run the executable `./14-balance`.

for <b>15-binary_tree_is_full.c</b> use:<br>
`gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 15-binary_tree_is_full.c 15-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 15-full`<br>
and run the executable `./15-full`.



for <b>17-binary_tree_sibling.c</b> use:<br>
`gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 17-main.c 17-binary_tree_sibling.c 0-binary_tree_node.c -o 17-sibling`<br>
and run the executable `./17-sibling`.

for <b>18-binary_tree_uncle.c</b> use:<br>
`gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 18-main.c 18-binary_tree_uncle.c 0-binary_tree_node.c -o 18-uncle`<br>
and run the executable `./18-uncle`.

for <b>100-binary_trees_ancestor.c</b> use:<br>
`gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 100-main.c 100-binary_trees_ancestor.c 0-binary_tree_node.c -o 100-ancestor`<br>
and run the executable `./100-ancestor`.


This Project helped me master on tree data structures. Throughout the entire project, I've been enjoying the process.

Thanks to ALX!
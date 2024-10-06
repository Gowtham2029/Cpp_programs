//  https://gcc.gnu.org/onlinedocs/libstdc++/manual/policy_data_structures.html

//Header files

 // Including tree_order_statistics_node_updates

using namespace __gnu_pbds;

//Declaration of tree_based container
template <
  typename Key, // key type (what we want to store -- int, string, etc)

  typename Mapped, //Mapped-policy (if you use null type policy like map)

  typename Cmp_Fn = std::less<key>, // comparing the keys

  typename Tag = rb_tree_tag,  // specifies the underlying data structure to use

  template <
       typename Const_Node_Iterator,
       typename Const_Node_Iterator,
       typename Cmp_Fn,
       typename Allocator_ >


// A policy for updating node invariants
class Node_update = null_node_update,

// An allocator type
typename Allocator = std::allocator<char> >

class tree;

typedef tree<int, null_type, less<int>, rb_tree_tag,
        tree_orderstatistics_node_update>
        new_data_set;

Tree Structures 
rb_tree_tag    (red - black tree)
splay_tree_tag (splay tree)















PBDS --- works like a set
     --- two other functions
                   --- find_by_order(k) // O(log n) || returns the iterator to Kth largest element
                   --- order_of_key(k ) // O(log n) ||  returns the number of element in the set which are strictly less than our value

 
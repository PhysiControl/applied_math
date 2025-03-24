#include <string>

template <class> class GraphTraits {};
template <class GraphT>
std::vector<typename GraphTraits<GraphT>::NodePtr>
traverseGraph(const GraphT& graph) {
    using NodePtr = GraphTraits<GraphT>::NodePtr;
    NodePtr start = GraphTraits<GraphT>::getFirstNode(graph);
    // ...
}

// template <>
// class GraphTraits<MyGraph> {
//     using NodePtr = MyNode*;

//     static NodePtr getFirstNode(const MyGraph& graph) {
//         // implementation specific to MyGraph
//     }
// };


int main (void){
    return 0; 
}
/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUDirectedGraph : NSObject  {
    unsigned int _nodeCount;
    unsigned int _edgeCount;
    unsigned int _nextNodeName;
    unsigned int _nextEdgeName;
    struct _VMUDirectedGraphNode { unsigned int x1; unsigned int x2; } *_nodes;
    struct _VMUDirectedGraphEdge { unsigned int x1; unsigned int x2; unsigned int x3; } *_edges;
    unsigned int *_nodeNameMap;
    unsigned int _edgeCapacity;
    bool_needsAdjacencyUpdate;
}

@property(readonly) unsigned int nodeCount;
@property(readonly) unsigned int edgeCount;
@property(readonly) unsigned int nodeNamespaceSize;
@property(readonly) unsigned int edgeNamespaceSize;

+ (void)initialize;

- (unsigned int)edgeNamespaceSize;
- (unsigned int)nodeNamespaceSize;
- (unsigned int)edgeCount;
- (void)invertEdges;
- (void)_dumpAdjacencyList;
- (void)breadthFirstSearch:(unsigned int)arg1 nodeVisitBlock:(id)arg2 edgeVisitBlock:(id)arg3;
- (void)depthFirstSearch:(unsigned int)arg1 nodeVisitBlock:(id)arg2 edgeVisitBlock:(id)arg3;
- (void)withEdgeMarkingMap:(id)arg1;
- (void)withNodeMarkingMap:(id)arg1;
- (id)invertedGraph;
- (id)subgraphWithMarkedNodes:(void*)arg1 edges:(void*)arg2;
- (void)enumerateEdgesOfNode:(unsigned int)arg1 withBlock:(id)arg2;
- (void)enumerateEdgesWithBlock:(id)arg1;
- (unsigned int)addEdgeFromNode:(unsigned int)arg1 toNode:(unsigned int)arg2;
- (id)initWithNodes:(unsigned int)arg1;
- (void)_bfsCore:(unsigned int)arg1 colors:(unsigned char*)arg2 nodeBlock:(id)arg3 edgeBlock:(id)arg4;
- (void)_searchMainLoop:(unsigned int)arg1 action:(id)arg2;
- (void)_dfsCore:(unsigned int)arg1 colors:(unsigned char*)arg2 nodeBlock:(id)arg3 edgeBlock:(id)arg4;
- (void)_adjustAdjacencyMap;
- (void)enumerateNodesWithBlock:(id)arg1;
- (unsigned int)nodeCount;
- (void)dealloc;

@end

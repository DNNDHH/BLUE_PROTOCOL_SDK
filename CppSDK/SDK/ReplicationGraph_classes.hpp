#pragma once

 

// Package: ReplicationGraph

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "ReplicationGraph_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class ReplicationGraph.ReplicationGraph
// 0x0488 (0x04B0 - 0x0028)
#pragma pack(push, 0x1)
class alignas(0x10) UReplicationGraph : public UReplicationDriver
{
public:
	TSubclassOf<class UNetReplicationGraphConnection> ReplicationConnectionManagerClass;                 // 0x0028(0x0008)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNetDriver*                             NetDriver;                                         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UNetReplicationGraphConnection*> Connections;                                       // 0x0038(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UNetReplicationGraphConnection*> PendingConnections;                                // 0x0048(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_E91[0x40];                                     // 0x0058(0x0040)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UReplicationGraphNode*>          GlobalGraphNodes;                                  // 0x0098(0x0010)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UReplicationGraphNode*>          PrepareForReplicationNodes;                        // 0x00A8(0x0010)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_E92[0x3F0];                                    // 0x00B8(0x03F0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReplicationGraph">();
	}
	static class UReplicationGraph* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReplicationGraph>();
	}
};
#pragma pack(pop)
static_assert(alignof(UReplicationGraph) == 0x000010, "Wrong alignment on UReplicationGraph");
static_assert(sizeof(UReplicationGraph) == 0x0004B0, "Wrong size on UReplicationGraph");
static_assert(offsetof(UReplicationGraph, ReplicationConnectionManagerClass) == 0x000028, "Member 'UReplicationGraph::ReplicationConnectionManagerClass' has a wrong offset!");
static_assert(offsetof(UReplicationGraph, NetDriver) == 0x000030, "Member 'UReplicationGraph::NetDriver' has a wrong offset!");
static_assert(offsetof(UReplicationGraph, Connections) == 0x000038, "Member 'UReplicationGraph::Connections' has a wrong offset!");
static_assert(offsetof(UReplicationGraph, PendingConnections) == 0x000048, "Member 'UReplicationGraph::PendingConnections' has a wrong offset!");
static_assert(offsetof(UReplicationGraph, GlobalGraphNodes) == 0x000098, "Member 'UReplicationGraph::GlobalGraphNodes' has a wrong offset!");
static_assert(offsetof(UReplicationGraph, PrepareForReplicationNodes) == 0x0000A8, "Member 'UReplicationGraph::PrepareForReplicationNodes' has a wrong offset!");

// Class ReplicationGraph.BasicReplicationGraph
// 0x0030 (0x04E0 - 0x04B0)
class UBasicReplicationGraph final : public UReplicationGraph
{
public:
	class UReplicationGraphNode_GridSpatialization2D* GridNode;                                          // 0x04A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UReplicationGraphNode_ActorList*        AlwaysRelevantNode;                                // 0x04B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FConnectionAlwaysRelevantNodePair> AlwaysRelevantForConnectionList;                   // 0x04B8(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class AActor*>                         ActorsWithoutNetConnection;                        // 0x04C8(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_E93[0x8];                                      // 0x04D8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BasicReplicationGraph">();
	}
	static class UBasicReplicationGraph* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBasicReplicationGraph>();
	}
};
static_assert(alignof(UBasicReplicationGraph) == 0x000010, "Wrong alignment on UBasicReplicationGraph");
static_assert(sizeof(UBasicReplicationGraph) == 0x0004E0, "Wrong size on UBasicReplicationGraph");
static_assert(offsetof(UBasicReplicationGraph, GridNode) == 0x0004A8, "Member 'UBasicReplicationGraph::GridNode' has a wrong offset!");
static_assert(offsetof(UBasicReplicationGraph, AlwaysRelevantNode) == 0x0004B0, "Member 'UBasicReplicationGraph::AlwaysRelevantNode' has a wrong offset!");
static_assert(offsetof(UBasicReplicationGraph, AlwaysRelevantForConnectionList) == 0x0004B8, "Member 'UBasicReplicationGraph::AlwaysRelevantForConnectionList' has a wrong offset!");
static_assert(offsetof(UBasicReplicationGraph, ActorsWithoutNetConnection) == 0x0004C8, "Member 'UBasicReplicationGraph::ActorsWithoutNetConnection' has a wrong offset!");

// Class ReplicationGraph.ReplicationGraphNode
// 0x0028 (0x0050 - 0x0028)
class UReplicationGraphNode : public UObject
{
public:
	TArray<class UReplicationGraphNode*>          AllChildNodes;                                     // 0x0028(0x0010)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_E94[0x18];                                     // 0x0038(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReplicationGraphNode">();
	}
	static class UReplicationGraphNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReplicationGraphNode>();
	}
};
static_assert(alignof(UReplicationGraphNode) == 0x000008, "Wrong alignment on UReplicationGraphNode");
static_assert(sizeof(UReplicationGraphNode) == 0x000050, "Wrong size on UReplicationGraphNode");
static_assert(offsetof(UReplicationGraphNode, AllChildNodes) == 0x000028, "Member 'UReplicationGraphNode::AllChildNodes' has a wrong offset!");

// Class ReplicationGraph.ReplicationGraphNode_ActorList
// 0x0080 (0x00D0 - 0x0050)
class UReplicationGraphNode_ActorList : public UReplicationGraphNode
{
public:
	uint8                                         Pad_E95[0x80];                                     // 0x0050(0x0080)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReplicationGraphNode_ActorList">();
	}
	static class UReplicationGraphNode_ActorList* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReplicationGraphNode_ActorList>();
	}
};
static_assert(alignof(UReplicationGraphNode_ActorList) == 0x000008, "Wrong alignment on UReplicationGraphNode_ActorList");
static_assert(sizeof(UReplicationGraphNode_ActorList) == 0x0000D0, "Wrong size on UReplicationGraphNode_ActorList");

// Class ReplicationGraph.ReplicationGraphNode_ActorListFrequencyBuckets
// 0x00B8 (0x0108 - 0x0050)
class UReplicationGraphNode_ActorListFrequencyBuckets final : public UReplicationGraphNode
{
public:
	uint8                                         Pad_E96[0xB8];                                     // 0x0050(0x00B8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReplicationGraphNode_ActorListFrequencyBuckets">();
	}
	static class UReplicationGraphNode_ActorListFrequencyBuckets* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReplicationGraphNode_ActorListFrequencyBuckets>();
	}
};
static_assert(alignof(UReplicationGraphNode_ActorListFrequencyBuckets) == 0x000008, "Wrong alignment on UReplicationGraphNode_ActorListFrequencyBuckets");
static_assert(sizeof(UReplicationGraphNode_ActorListFrequencyBuckets) == 0x000108, "Wrong size on UReplicationGraphNode_ActorListFrequencyBuckets");

// Class ReplicationGraph.ReplicationGraphNode_DynamicSpatialFrequency
// 0x0030 (0x0100 - 0x00D0)
class UReplicationGraphNode_DynamicSpatialFrequency final : public UReplicationGraphNode_ActorList
{
public:
	uint8                                         Pad_E97[0x30];                                     // 0x00D0(0x0030)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReplicationGraphNode_DynamicSpatialFrequency">();
	}
	static class UReplicationGraphNode_DynamicSpatialFrequency* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReplicationGraphNode_DynamicSpatialFrequency>();
	}
};
static_assert(alignof(UReplicationGraphNode_DynamicSpatialFrequency) == 0x000008, "Wrong alignment on UReplicationGraphNode_DynamicSpatialFrequency");
static_assert(sizeof(UReplicationGraphNode_DynamicSpatialFrequency) == 0x000100, "Wrong size on UReplicationGraphNode_DynamicSpatialFrequency");

// Class ReplicationGraph.ReplicationGraphNode_ConnectionDormancyNode
// 0x0080 (0x0150 - 0x00D0)
class UReplicationGraphNode_ConnectionDormancyNode final : public UReplicationGraphNode_ActorList
{
public:
	uint8                                         Pad_E98[0x80];                                     // 0x00D0(0x0080)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReplicationGraphNode_ConnectionDormancyNode">();
	}
	static class UReplicationGraphNode_ConnectionDormancyNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReplicationGraphNode_ConnectionDormancyNode>();
	}
};
static_assert(alignof(UReplicationGraphNode_ConnectionDormancyNode) == 0x000008, "Wrong alignment on UReplicationGraphNode_ConnectionDormancyNode");
static_assert(sizeof(UReplicationGraphNode_ConnectionDormancyNode) == 0x000150, "Wrong size on UReplicationGraphNode_ConnectionDormancyNode");

// Class ReplicationGraph.ReplicationGraphNode_DormancyNode
// 0x0010 (0x00E0 - 0x00D0)
class UReplicationGraphNode_DormancyNode final : public UReplicationGraphNode_ActorList
{
public:
	uint8                                         Pad_E99[0x10];                                     // 0x00D0(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReplicationGraphNode_DormancyNode">();
	}
	static class UReplicationGraphNode_DormancyNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReplicationGraphNode_DormancyNode>();
	}
};
static_assert(alignof(UReplicationGraphNode_DormancyNode) == 0x000008, "Wrong alignment on UReplicationGraphNode_DormancyNode");
static_assert(sizeof(UReplicationGraphNode_DormancyNode) == 0x0000E0, "Wrong size on UReplicationGraphNode_DormancyNode");

// Class ReplicationGraph.ReplicationGraphNode_GridCell
// 0x0050 (0x0120 - 0x00D0)
class alignas(0x10) UReplicationGraphNode_GridCell final : public UReplicationGraphNode_ActorList
{
public:
	uint8                                         Pad_E9A[0x40];                                     // 0x00D0(0x0040)(Fixing Size After Last Property [ Dumper-7 ])
	class UReplicationGraphNode*                  DynamicNode;                                       // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UReplicationGraphNode_DormancyNode*     DormancyNode;                                      // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReplicationGraphNode_GridCell">();
	}
	static class UReplicationGraphNode_GridCell* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReplicationGraphNode_GridCell>();
	}
};
static_assert(alignof(UReplicationGraphNode_GridCell) == 0x000010, "Wrong alignment on UReplicationGraphNode_GridCell");
static_assert(sizeof(UReplicationGraphNode_GridCell) == 0x000120, "Wrong size on UReplicationGraphNode_GridCell");
static_assert(offsetof(UReplicationGraphNode_GridCell, DynamicNode) == 0x000110, "Member 'UReplicationGraphNode_GridCell::DynamicNode' has a wrong offset!");
static_assert(offsetof(UReplicationGraphNode_GridCell, DormancyNode) == 0x000118, "Member 'UReplicationGraphNode_GridCell::DormancyNode' has a wrong offset!");

// Class ReplicationGraph.ReplicationGraphNode_GridSpatialization2D
// 0x01E0 (0x0230 - 0x0050)
class UReplicationGraphNode_GridSpatialization2D final : public UReplicationGraphNode
{
public:
	uint8                                         Pad_E9B[0x1E0];                                    // 0x0050(0x01E0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReplicationGraphNode_GridSpatialization2D">();
	}
	static class UReplicationGraphNode_GridSpatialization2D* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReplicationGraphNode_GridSpatialization2D>();
	}
};
static_assert(alignof(UReplicationGraphNode_GridSpatialization2D) == 0x000008, "Wrong alignment on UReplicationGraphNode_GridSpatialization2D");
static_assert(sizeof(UReplicationGraphNode_GridSpatialization2D) == 0x000230, "Wrong size on UReplicationGraphNode_GridSpatialization2D");

// Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant
// 0x0018 (0x0068 - 0x0050)
class UReplicationGraphNode_AlwaysRelevant final : public UReplicationGraphNode
{
public:
	class UReplicationGraphNode*                  ChildNode;                                         // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_E9C[0x10];                                     // 0x0058(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReplicationGraphNode_AlwaysRelevant">();
	}
	static class UReplicationGraphNode_AlwaysRelevant* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReplicationGraphNode_AlwaysRelevant>();
	}
};
static_assert(alignof(UReplicationGraphNode_AlwaysRelevant) == 0x000008, "Wrong alignment on UReplicationGraphNode_AlwaysRelevant");
static_assert(sizeof(UReplicationGraphNode_AlwaysRelevant) == 0x000068, "Wrong size on UReplicationGraphNode_AlwaysRelevant");
static_assert(offsetof(UReplicationGraphNode_AlwaysRelevant, ChildNode) == 0x000050, "Member 'UReplicationGraphNode_AlwaysRelevant::ChildNode' has a wrong offset!");

// Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant_ForConnection
// 0x0020 (0x00F0 - 0x00D0)
class UReplicationGraphNode_AlwaysRelevant_ForConnection final : public UReplicationGraphNode_ActorList
{
public:
	uint8                                         Pad_E9D[0x10];                                     // 0x00D0(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FAlwaysRelevantActorInfo>       PastRelevantActors;                                // 0x00E0(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReplicationGraphNode_AlwaysRelevant_ForConnection">();
	}
	static class UReplicationGraphNode_AlwaysRelevant_ForConnection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReplicationGraphNode_AlwaysRelevant_ForConnection>();
	}
};
static_assert(alignof(UReplicationGraphNode_AlwaysRelevant_ForConnection) == 0x000008, "Wrong alignment on UReplicationGraphNode_AlwaysRelevant_ForConnection");
static_assert(sizeof(UReplicationGraphNode_AlwaysRelevant_ForConnection) == 0x0000F0, "Wrong size on UReplicationGraphNode_AlwaysRelevant_ForConnection");
static_assert(offsetof(UReplicationGraphNode_AlwaysRelevant_ForConnection, PastRelevantActors) == 0x0000E0, "Member 'UReplicationGraphNode_AlwaysRelevant_ForConnection::PastRelevantActors' has a wrong offset!");

// Class ReplicationGraph.ReplicationGraphNode_TearOff_ForConnection
// 0x0020 (0x0070 - 0x0050)
class UReplicationGraphNode_TearOff_ForConnection final : public UReplicationGraphNode
{
public:
	TArray<struct FTearOffActorInfo>              TearOffActors;                                     // 0x0050(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_E9E[0x10];                                     // 0x0060(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReplicationGraphNode_TearOff_ForConnection">();
	}
	static class UReplicationGraphNode_TearOff_ForConnection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReplicationGraphNode_TearOff_ForConnection>();
	}
};
static_assert(alignof(UReplicationGraphNode_TearOff_ForConnection) == 0x000008, "Wrong alignment on UReplicationGraphNode_TearOff_ForConnection");
static_assert(sizeof(UReplicationGraphNode_TearOff_ForConnection) == 0x000070, "Wrong size on UReplicationGraphNode_TearOff_ForConnection");
static_assert(offsetof(UReplicationGraphNode_TearOff_ForConnection, TearOffActors) == 0x000050, "Member 'UReplicationGraphNode_TearOff_ForConnection::TearOffActors' has a wrong offset!");

// Class ReplicationGraph.NetReplicationGraphConnection
// 0x0210 (0x0238 - 0x0028)
class UNetReplicationGraphConnection final : public UReplicationConnectionDriver
{
public:
	class UNetConnection*                         NetConnection;                                     // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_E9F[0x140];                                    // 0x0030(0x0140)(Fixing Size After Last Property [ Dumper-7 ])
	class AReplicationGraphDebugActor*            DebugActor;                                        // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_EA0[0x10];                                     // 0x0178(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FLastLocationGatherInfo>        LastGatherLocations;                               // 0x0188(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_EA1[0x8];                                      // 0x0198(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UReplicationGraphNode*>          ConnectionGraphNodes;                              // 0x01A0(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class UReplicationGraphNode_TearOff_ForConnection* TearOffNode;                                       // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_EA2[0x80];                                     // 0x01B8(0x0080)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetReplicationGraphConnection">();
	}
	static class UNetReplicationGraphConnection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetReplicationGraphConnection>();
	}
};
static_assert(alignof(UNetReplicationGraphConnection) == 0x000008, "Wrong alignment on UNetReplicationGraphConnection");
static_assert(sizeof(UNetReplicationGraphConnection) == 0x000238, "Wrong size on UNetReplicationGraphConnection");
static_assert(offsetof(UNetReplicationGraphConnection, NetConnection) == 0x000028, "Member 'UNetReplicationGraphConnection::NetConnection' has a wrong offset!");
static_assert(offsetof(UNetReplicationGraphConnection, DebugActor) == 0x000170, "Member 'UNetReplicationGraphConnection::DebugActor' has a wrong offset!");
static_assert(offsetof(UNetReplicationGraphConnection, LastGatherLocations) == 0x000188, "Member 'UNetReplicationGraphConnection::LastGatherLocations' has a wrong offset!");
static_assert(offsetof(UNetReplicationGraphConnection, ConnectionGraphNodes) == 0x0001A0, "Member 'UNetReplicationGraphConnection::ConnectionGraphNodes' has a wrong offset!");
static_assert(offsetof(UNetReplicationGraphConnection, TearOffNode) == 0x0001B0, "Member 'UNetReplicationGraphConnection::TearOffNode' has a wrong offset!");

// Class ReplicationGraph.ReplicationGraphDebugActor
// 0x0010 (0x0238 - 0x0228)
class AReplicationGraphDebugActor final : public AActor
{
public:
	class UReplicationGraph*                      ReplicationGraph;                                  // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNetReplicationGraphConnection*         ConnectionManager;                                 // 0x0230(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void ClientCellInfo(const struct FVector& CellLocation, const struct FVector& CellExtent, const TArray<class AActor*>& Actors);
	void ServerCellInfo();
	void ServerPrintAllActorInfo(const class FString& STR);
	void ServerPrintCullDistances();
	void ServerSetConditionalActorBreakpoint(class AActor* Actor);
	void ServerSetCullDistanceForClass(class UClass* Param_Class, float CullDistance);
	void ServerSetPeriodFrameForClass(class UClass* Param_Class, int32 PeriodFrame);
	void ServerStartDebugging();
	void ServerStopDebugging();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReplicationGraphDebugActor">();
	}
	static class AReplicationGraphDebugActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AReplicationGraphDebugActor>();
	}
};
static_assert(alignof(AReplicationGraphDebugActor) == 0x000008, "Wrong alignment on AReplicationGraphDebugActor");
static_assert(sizeof(AReplicationGraphDebugActor) == 0x000238, "Wrong size on AReplicationGraphDebugActor");
static_assert(offsetof(AReplicationGraphDebugActor, ReplicationGraph) == 0x000228, "Member 'AReplicationGraphDebugActor::ReplicationGraph' has a wrong offset!");
static_assert(offsetof(AReplicationGraphDebugActor, ConnectionManager) == 0x000230, "Member 'AReplicationGraphDebugActor::ConnectionManager' has a wrong offset!");

}

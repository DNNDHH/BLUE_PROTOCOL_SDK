#pragma once

 

// Package: MeshDescription

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "MeshDescription_structs.hpp"


namespace SDK::Params
{

// Function MeshDescription.MeshDescriptionBase.ComputePolygonTriangulation
// 0x0004 (0x0004 - 0x0000)
struct MeshDescriptionBase_ComputePolygonTriangulation final
{
public:
	struct FPolygonID                             PolygonID;                                         // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_ComputePolygonTriangulation) == 0x000004, "Wrong alignment on MeshDescriptionBase_ComputePolygonTriangulation");
static_assert(sizeof(MeshDescriptionBase_ComputePolygonTriangulation) == 0x000004, "Wrong size on MeshDescriptionBase_ComputePolygonTriangulation");
static_assert(offsetof(MeshDescriptionBase_ComputePolygonTriangulation, PolygonID) == 0x000000, "Member 'MeshDescriptionBase_ComputePolygonTriangulation::PolygonID' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.CreateEdge
// 0x000C (0x000C - 0x0000)
struct MeshDescriptionBase_CreateEdge final
{
public:
	struct FVertexID                              VertexID0;                                         // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexID                              VertexID1;                                         // 0x0004(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEdgeID                                ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_CreateEdge) == 0x000004, "Wrong alignment on MeshDescriptionBase_CreateEdge");
static_assert(sizeof(MeshDescriptionBase_CreateEdge) == 0x00000C, "Wrong size on MeshDescriptionBase_CreateEdge");
static_assert(offsetof(MeshDescriptionBase_CreateEdge, VertexID0) == 0x000000, "Member 'MeshDescriptionBase_CreateEdge::VertexID0' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_CreateEdge, VertexID1) == 0x000004, "Member 'MeshDescriptionBase_CreateEdge::VertexID1' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_CreateEdge, ReturnValue) == 0x000008, "Member 'MeshDescriptionBase_CreateEdge::ReturnValue' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.CreateEdgeWithID
// 0x000C (0x000C - 0x0000)
struct MeshDescriptionBase_CreateEdgeWithID final
{
public:
	struct FEdgeID                                EdgeID;                                            // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexID                              VertexID0;                                         // 0x0004(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexID                              VertexID1;                                         // 0x0008(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_CreateEdgeWithID) == 0x000004, "Wrong alignment on MeshDescriptionBase_CreateEdgeWithID");
static_assert(sizeof(MeshDescriptionBase_CreateEdgeWithID) == 0x00000C, "Wrong size on MeshDescriptionBase_CreateEdgeWithID");
static_assert(offsetof(MeshDescriptionBase_CreateEdgeWithID, EdgeID) == 0x000000, "Member 'MeshDescriptionBase_CreateEdgeWithID::EdgeID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_CreateEdgeWithID, VertexID0) == 0x000004, "Member 'MeshDescriptionBase_CreateEdgeWithID::VertexID0' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_CreateEdgeWithID, VertexID1) == 0x000008, "Member 'MeshDescriptionBase_CreateEdgeWithID::VertexID1' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.CreatePolygon
// 0x0030 (0x0030 - 0x0000)
struct MeshDescriptionBase_CreatePolygon final
{
public:
	struct FPolygonGroupID                        PolygonGroupID;                                    // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_416E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVertexInstanceID>              VertexInstanceIDs;                                 // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FEdgeID>                        NewEdgeIDs;                                        // 0x0018(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FPolygonID                             ReturnValue;                                       // 0x0028(0x0004)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_416F[0x4];                                     // 0x002C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MeshDescriptionBase_CreatePolygon) == 0x000008, "Wrong alignment on MeshDescriptionBase_CreatePolygon");
static_assert(sizeof(MeshDescriptionBase_CreatePolygon) == 0x000030, "Wrong size on MeshDescriptionBase_CreatePolygon");
static_assert(offsetof(MeshDescriptionBase_CreatePolygon, PolygonGroupID) == 0x000000, "Member 'MeshDescriptionBase_CreatePolygon::PolygonGroupID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_CreatePolygon, VertexInstanceIDs) == 0x000008, "Member 'MeshDescriptionBase_CreatePolygon::VertexInstanceIDs' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_CreatePolygon, NewEdgeIDs) == 0x000018, "Member 'MeshDescriptionBase_CreatePolygon::NewEdgeIDs' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_CreatePolygon, ReturnValue) == 0x000028, "Member 'MeshDescriptionBase_CreatePolygon::ReturnValue' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.CreatePolygonGroup
// 0x0004 (0x0004 - 0x0000)
struct MeshDescriptionBase_CreatePolygonGroup final
{
public:
	struct FPolygonGroupID                        ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_CreatePolygonGroup) == 0x000004, "Wrong alignment on MeshDescriptionBase_CreatePolygonGroup");
static_assert(sizeof(MeshDescriptionBase_CreatePolygonGroup) == 0x000004, "Wrong size on MeshDescriptionBase_CreatePolygonGroup");
static_assert(offsetof(MeshDescriptionBase_CreatePolygonGroup, ReturnValue) == 0x000000, "Member 'MeshDescriptionBase_CreatePolygonGroup::ReturnValue' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.CreatePolygonGroupWithID
// 0x0004 (0x0004 - 0x0000)
struct MeshDescriptionBase_CreatePolygonGroupWithID final
{
public:
	struct FPolygonGroupID                        PolygonGroupID;                                    // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_CreatePolygonGroupWithID) == 0x000004, "Wrong alignment on MeshDescriptionBase_CreatePolygonGroupWithID");
static_assert(sizeof(MeshDescriptionBase_CreatePolygonGroupWithID) == 0x000004, "Wrong size on MeshDescriptionBase_CreatePolygonGroupWithID");
static_assert(offsetof(MeshDescriptionBase_CreatePolygonGroupWithID, PolygonGroupID) == 0x000000, "Member 'MeshDescriptionBase_CreatePolygonGroupWithID::PolygonGroupID' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.CreatePolygonWithID
// 0x0028 (0x0028 - 0x0000)
struct MeshDescriptionBase_CreatePolygonWithID final
{
public:
	struct FPolygonID                             PolygonID;                                         // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPolygonGroupID                        PolygonGroupID;                                    // 0x0004(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVertexInstanceID>              VertexInstanceIDs;                                 // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FEdgeID>                        NewEdgeIDs;                                        // 0x0018(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_CreatePolygonWithID) == 0x000008, "Wrong alignment on MeshDescriptionBase_CreatePolygonWithID");
static_assert(sizeof(MeshDescriptionBase_CreatePolygonWithID) == 0x000028, "Wrong size on MeshDescriptionBase_CreatePolygonWithID");
static_assert(offsetof(MeshDescriptionBase_CreatePolygonWithID, PolygonID) == 0x000000, "Member 'MeshDescriptionBase_CreatePolygonWithID::PolygonID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_CreatePolygonWithID, PolygonGroupID) == 0x000004, "Member 'MeshDescriptionBase_CreatePolygonWithID::PolygonGroupID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_CreatePolygonWithID, VertexInstanceIDs) == 0x000008, "Member 'MeshDescriptionBase_CreatePolygonWithID::VertexInstanceIDs' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_CreatePolygonWithID, NewEdgeIDs) == 0x000018, "Member 'MeshDescriptionBase_CreatePolygonWithID::NewEdgeIDs' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.CreateTriangle
// 0x0030 (0x0030 - 0x0000)
struct MeshDescriptionBase_CreateTriangle final
{
public:
	struct FPolygonGroupID                        PolygonGroupID;                                    // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4170[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVertexInstanceID>              VertexInstanceIDs;                                 // 0x0008(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FEdgeID>                        NewEdgeIDs;                                        // 0x0018(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FTriangleID                            ReturnValue;                                       // 0x0028(0x0004)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4171[0x4];                                     // 0x002C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MeshDescriptionBase_CreateTriangle) == 0x000008, "Wrong alignment on MeshDescriptionBase_CreateTriangle");
static_assert(sizeof(MeshDescriptionBase_CreateTriangle) == 0x000030, "Wrong size on MeshDescriptionBase_CreateTriangle");
static_assert(offsetof(MeshDescriptionBase_CreateTriangle, PolygonGroupID) == 0x000000, "Member 'MeshDescriptionBase_CreateTriangle::PolygonGroupID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_CreateTriangle, VertexInstanceIDs) == 0x000008, "Member 'MeshDescriptionBase_CreateTriangle::VertexInstanceIDs' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_CreateTriangle, NewEdgeIDs) == 0x000018, "Member 'MeshDescriptionBase_CreateTriangle::NewEdgeIDs' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_CreateTriangle, ReturnValue) == 0x000028, "Member 'MeshDescriptionBase_CreateTriangle::ReturnValue' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.CreateTriangleWithID
// 0x0028 (0x0028 - 0x0000)
struct MeshDescriptionBase_CreateTriangleWithID final
{
public:
	struct FTriangleID                            TriangleID;                                        // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPolygonGroupID                        PolygonGroupID;                                    // 0x0004(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVertexInstanceID>              VertexInstanceIDs;                                 // 0x0008(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FEdgeID>                        NewEdgeIDs;                                        // 0x0018(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_CreateTriangleWithID) == 0x000008, "Wrong alignment on MeshDescriptionBase_CreateTriangleWithID");
static_assert(sizeof(MeshDescriptionBase_CreateTriangleWithID) == 0x000028, "Wrong size on MeshDescriptionBase_CreateTriangleWithID");
static_assert(offsetof(MeshDescriptionBase_CreateTriangleWithID, TriangleID) == 0x000000, "Member 'MeshDescriptionBase_CreateTriangleWithID::TriangleID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_CreateTriangleWithID, PolygonGroupID) == 0x000004, "Member 'MeshDescriptionBase_CreateTriangleWithID::PolygonGroupID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_CreateTriangleWithID, VertexInstanceIDs) == 0x000008, "Member 'MeshDescriptionBase_CreateTriangleWithID::VertexInstanceIDs' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_CreateTriangleWithID, NewEdgeIDs) == 0x000018, "Member 'MeshDescriptionBase_CreateTriangleWithID::NewEdgeIDs' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.CreateVertex
// 0x0004 (0x0004 - 0x0000)
struct MeshDescriptionBase_CreateVertex final
{
public:
	struct FVertexID                              ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_CreateVertex) == 0x000004, "Wrong alignment on MeshDescriptionBase_CreateVertex");
static_assert(sizeof(MeshDescriptionBase_CreateVertex) == 0x000004, "Wrong size on MeshDescriptionBase_CreateVertex");
static_assert(offsetof(MeshDescriptionBase_CreateVertex, ReturnValue) == 0x000000, "Member 'MeshDescriptionBase_CreateVertex::ReturnValue' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.CreateVertexInstance
// 0x0008 (0x0008 - 0x0000)
struct MeshDescriptionBase_CreateVertexInstance final
{
public:
	struct FVertexID                              VertexID;                                          // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexInstanceID                      ReturnValue;                                       // 0x0004(0x0004)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_CreateVertexInstance) == 0x000004, "Wrong alignment on MeshDescriptionBase_CreateVertexInstance");
static_assert(sizeof(MeshDescriptionBase_CreateVertexInstance) == 0x000008, "Wrong size on MeshDescriptionBase_CreateVertexInstance");
static_assert(offsetof(MeshDescriptionBase_CreateVertexInstance, VertexID) == 0x000000, "Member 'MeshDescriptionBase_CreateVertexInstance::VertexID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_CreateVertexInstance, ReturnValue) == 0x000004, "Member 'MeshDescriptionBase_CreateVertexInstance::ReturnValue' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.CreateVertexInstanceWithID
// 0x0008 (0x0008 - 0x0000)
struct MeshDescriptionBase_CreateVertexInstanceWithID final
{
public:
	struct FVertexInstanceID                      VertexInstanceID;                                  // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexID                              VertexID;                                          // 0x0004(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_CreateVertexInstanceWithID) == 0x000004, "Wrong alignment on MeshDescriptionBase_CreateVertexInstanceWithID");
static_assert(sizeof(MeshDescriptionBase_CreateVertexInstanceWithID) == 0x000008, "Wrong size on MeshDescriptionBase_CreateVertexInstanceWithID");
static_assert(offsetof(MeshDescriptionBase_CreateVertexInstanceWithID, VertexInstanceID) == 0x000000, "Member 'MeshDescriptionBase_CreateVertexInstanceWithID::VertexInstanceID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_CreateVertexInstanceWithID, VertexID) == 0x000004, "Member 'MeshDescriptionBase_CreateVertexInstanceWithID::VertexID' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.CreateVertexWithID
// 0x0004 (0x0004 - 0x0000)
struct MeshDescriptionBase_CreateVertexWithID final
{
public:
	struct FVertexID                              VertexID;                                          // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_CreateVertexWithID) == 0x000004, "Wrong alignment on MeshDescriptionBase_CreateVertexWithID");
static_assert(sizeof(MeshDescriptionBase_CreateVertexWithID) == 0x000004, "Wrong size on MeshDescriptionBase_CreateVertexWithID");
static_assert(offsetof(MeshDescriptionBase_CreateVertexWithID, VertexID) == 0x000000, "Member 'MeshDescriptionBase_CreateVertexWithID::VertexID' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.DeleteEdge
// 0x0018 (0x0018 - 0x0000)
struct MeshDescriptionBase_DeleteEdge final
{
public:
	struct FEdgeID                                EdgeID;                                            // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4172[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVertexID>                      OrphanedVertices;                                  // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_DeleteEdge) == 0x000008, "Wrong alignment on MeshDescriptionBase_DeleteEdge");
static_assert(sizeof(MeshDescriptionBase_DeleteEdge) == 0x000018, "Wrong size on MeshDescriptionBase_DeleteEdge");
static_assert(offsetof(MeshDescriptionBase_DeleteEdge, EdgeID) == 0x000000, "Member 'MeshDescriptionBase_DeleteEdge::EdgeID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_DeleteEdge, OrphanedVertices) == 0x000008, "Member 'MeshDescriptionBase_DeleteEdge::OrphanedVertices' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.DeletePolygon
// 0x0038 (0x0038 - 0x0000)
struct MeshDescriptionBase_DeletePolygon final
{
public:
	struct FPolygonID                             PolygonID;                                         // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4173[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FEdgeID>                        OrphanedEdges;                                     // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVertexInstanceID>              OrphanedVertexInstances;                           // 0x0018(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPolygonGroupID>                OrphanedPolygonGroups;                             // 0x0028(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_DeletePolygon) == 0x000008, "Wrong alignment on MeshDescriptionBase_DeletePolygon");
static_assert(sizeof(MeshDescriptionBase_DeletePolygon) == 0x000038, "Wrong size on MeshDescriptionBase_DeletePolygon");
static_assert(offsetof(MeshDescriptionBase_DeletePolygon, PolygonID) == 0x000000, "Member 'MeshDescriptionBase_DeletePolygon::PolygonID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_DeletePolygon, OrphanedEdges) == 0x000008, "Member 'MeshDescriptionBase_DeletePolygon::OrphanedEdges' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_DeletePolygon, OrphanedVertexInstances) == 0x000018, "Member 'MeshDescriptionBase_DeletePolygon::OrphanedVertexInstances' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_DeletePolygon, OrphanedPolygonGroups) == 0x000028, "Member 'MeshDescriptionBase_DeletePolygon::OrphanedPolygonGroups' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.DeletePolygonGroup
// 0x0004 (0x0004 - 0x0000)
struct MeshDescriptionBase_DeletePolygonGroup final
{
public:
	struct FPolygonGroupID                        PolygonGroupID;                                    // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_DeletePolygonGroup) == 0x000004, "Wrong alignment on MeshDescriptionBase_DeletePolygonGroup");
static_assert(sizeof(MeshDescriptionBase_DeletePolygonGroup) == 0x000004, "Wrong size on MeshDescriptionBase_DeletePolygonGroup");
static_assert(offsetof(MeshDescriptionBase_DeletePolygonGroup, PolygonGroupID) == 0x000000, "Member 'MeshDescriptionBase_DeletePolygonGroup::PolygonGroupID' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.DeleteTriangle
// 0x0038 (0x0038 - 0x0000)
struct MeshDescriptionBase_DeleteTriangle final
{
public:
	struct FTriangleID                            TriangleID;                                        // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4174[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FEdgeID>                        OrphanedEdges;                                     // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVertexInstanceID>              OrphanedVertexInstances;                           // 0x0018(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPolygonGroupID>                OrphanedPolygonGroupsPtr;                          // 0x0028(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_DeleteTriangle) == 0x000008, "Wrong alignment on MeshDescriptionBase_DeleteTriangle");
static_assert(sizeof(MeshDescriptionBase_DeleteTriangle) == 0x000038, "Wrong size on MeshDescriptionBase_DeleteTriangle");
static_assert(offsetof(MeshDescriptionBase_DeleteTriangle, TriangleID) == 0x000000, "Member 'MeshDescriptionBase_DeleteTriangle::TriangleID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_DeleteTriangle, OrphanedEdges) == 0x000008, "Member 'MeshDescriptionBase_DeleteTriangle::OrphanedEdges' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_DeleteTriangle, OrphanedVertexInstances) == 0x000018, "Member 'MeshDescriptionBase_DeleteTriangle::OrphanedVertexInstances' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_DeleteTriangle, OrphanedPolygonGroupsPtr) == 0x000028, "Member 'MeshDescriptionBase_DeleteTriangle::OrphanedPolygonGroupsPtr' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.DeleteVertex
// 0x0004 (0x0004 - 0x0000)
struct MeshDescriptionBase_DeleteVertex final
{
public:
	struct FVertexID                              VertexID;                                          // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_DeleteVertex) == 0x000004, "Wrong alignment on MeshDescriptionBase_DeleteVertex");
static_assert(sizeof(MeshDescriptionBase_DeleteVertex) == 0x000004, "Wrong size on MeshDescriptionBase_DeleteVertex");
static_assert(offsetof(MeshDescriptionBase_DeleteVertex, VertexID) == 0x000000, "Member 'MeshDescriptionBase_DeleteVertex::VertexID' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.DeleteVertexInstance
// 0x0018 (0x0018 - 0x0000)
struct MeshDescriptionBase_DeleteVertexInstance final
{
public:
	struct FVertexInstanceID                      VertexInstanceID;                                  // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4175[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVertexID>                      OrphanedVertices;                                  // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_DeleteVertexInstance) == 0x000008, "Wrong alignment on MeshDescriptionBase_DeleteVertexInstance");
static_assert(sizeof(MeshDescriptionBase_DeleteVertexInstance) == 0x000018, "Wrong size on MeshDescriptionBase_DeleteVertexInstance");
static_assert(offsetof(MeshDescriptionBase_DeleteVertexInstance, VertexInstanceID) == 0x000000, "Member 'MeshDescriptionBase_DeleteVertexInstance::VertexInstanceID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_DeleteVertexInstance, OrphanedVertices) == 0x000008, "Member 'MeshDescriptionBase_DeleteVertexInstance::OrphanedVertices' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.ReserveNewEdges
// 0x0004 (0x0004 - 0x0000)
struct MeshDescriptionBase_ReserveNewEdges final
{
public:
	int32                                         NumberOfNewEdges;                                  // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_ReserveNewEdges) == 0x000004, "Wrong alignment on MeshDescriptionBase_ReserveNewEdges");
static_assert(sizeof(MeshDescriptionBase_ReserveNewEdges) == 0x000004, "Wrong size on MeshDescriptionBase_ReserveNewEdges");
static_assert(offsetof(MeshDescriptionBase_ReserveNewEdges, NumberOfNewEdges) == 0x000000, "Member 'MeshDescriptionBase_ReserveNewEdges::NumberOfNewEdges' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.ReserveNewPolygonGroups
// 0x0004 (0x0004 - 0x0000)
struct MeshDescriptionBase_ReserveNewPolygonGroups final
{
public:
	int32                                         NumberOfNewPolygonGroups;                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_ReserveNewPolygonGroups) == 0x000004, "Wrong alignment on MeshDescriptionBase_ReserveNewPolygonGroups");
static_assert(sizeof(MeshDescriptionBase_ReserveNewPolygonGroups) == 0x000004, "Wrong size on MeshDescriptionBase_ReserveNewPolygonGroups");
static_assert(offsetof(MeshDescriptionBase_ReserveNewPolygonGroups, NumberOfNewPolygonGroups) == 0x000000, "Member 'MeshDescriptionBase_ReserveNewPolygonGroups::NumberOfNewPolygonGroups' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.ReserveNewPolygons
// 0x0004 (0x0004 - 0x0000)
struct MeshDescriptionBase_ReserveNewPolygons final
{
public:
	int32                                         NumberOfNewPolygons;                               // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_ReserveNewPolygons) == 0x000004, "Wrong alignment on MeshDescriptionBase_ReserveNewPolygons");
static_assert(sizeof(MeshDescriptionBase_ReserveNewPolygons) == 0x000004, "Wrong size on MeshDescriptionBase_ReserveNewPolygons");
static_assert(offsetof(MeshDescriptionBase_ReserveNewPolygons, NumberOfNewPolygons) == 0x000000, "Member 'MeshDescriptionBase_ReserveNewPolygons::NumberOfNewPolygons' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.ReserveNewTriangles
// 0x0004 (0x0004 - 0x0000)
struct MeshDescriptionBase_ReserveNewTriangles final
{
public:
	int32                                         NumberOfNewTriangles;                              // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_ReserveNewTriangles) == 0x000004, "Wrong alignment on MeshDescriptionBase_ReserveNewTriangles");
static_assert(sizeof(MeshDescriptionBase_ReserveNewTriangles) == 0x000004, "Wrong size on MeshDescriptionBase_ReserveNewTriangles");
static_assert(offsetof(MeshDescriptionBase_ReserveNewTriangles, NumberOfNewTriangles) == 0x000000, "Member 'MeshDescriptionBase_ReserveNewTriangles::NumberOfNewTriangles' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.ReserveNewVertexInstances
// 0x0004 (0x0004 - 0x0000)
struct MeshDescriptionBase_ReserveNewVertexInstances final
{
public:
	int32                                         NumberOfNewVertexInstances;                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_ReserveNewVertexInstances) == 0x000004, "Wrong alignment on MeshDescriptionBase_ReserveNewVertexInstances");
static_assert(sizeof(MeshDescriptionBase_ReserveNewVertexInstances) == 0x000004, "Wrong size on MeshDescriptionBase_ReserveNewVertexInstances");
static_assert(offsetof(MeshDescriptionBase_ReserveNewVertexInstances, NumberOfNewVertexInstances) == 0x000000, "Member 'MeshDescriptionBase_ReserveNewVertexInstances::NumberOfNewVertexInstances' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.ReserveNewVertices
// 0x0004 (0x0004 - 0x0000)
struct MeshDescriptionBase_ReserveNewVertices final
{
public:
	int32                                         NumberOfNewVertices;                               // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_ReserveNewVertices) == 0x000004, "Wrong alignment on MeshDescriptionBase_ReserveNewVertices");
static_assert(sizeof(MeshDescriptionBase_ReserveNewVertices) == 0x000004, "Wrong size on MeshDescriptionBase_ReserveNewVertices");
static_assert(offsetof(MeshDescriptionBase_ReserveNewVertices, NumberOfNewVertices) == 0x000000, "Member 'MeshDescriptionBase_ReserveNewVertices::NumberOfNewVertices' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.ReversePolygonFacing
// 0x0004 (0x0004 - 0x0000)
struct MeshDescriptionBase_ReversePolygonFacing final
{
public:
	struct FPolygonID                             PolygonID;                                         // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_ReversePolygonFacing) == 0x000004, "Wrong alignment on MeshDescriptionBase_ReversePolygonFacing");
static_assert(sizeof(MeshDescriptionBase_ReversePolygonFacing) == 0x000004, "Wrong size on MeshDescriptionBase_ReversePolygonFacing");
static_assert(offsetof(MeshDescriptionBase_ReversePolygonFacing, PolygonID) == 0x000000, "Member 'MeshDescriptionBase_ReversePolygonFacing::PolygonID' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.SetPolygonPolygonGroup
// 0x0008 (0x0008 - 0x0000)
struct MeshDescriptionBase_SetPolygonPolygonGroup final
{
public:
	struct FPolygonID                             PolygonID;                                         // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPolygonGroupID                        PolygonGroupID;                                    // 0x0004(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_SetPolygonPolygonGroup) == 0x000004, "Wrong alignment on MeshDescriptionBase_SetPolygonPolygonGroup");
static_assert(sizeof(MeshDescriptionBase_SetPolygonPolygonGroup) == 0x000008, "Wrong size on MeshDescriptionBase_SetPolygonPolygonGroup");
static_assert(offsetof(MeshDescriptionBase_SetPolygonPolygonGroup, PolygonID) == 0x000000, "Member 'MeshDescriptionBase_SetPolygonPolygonGroup::PolygonID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_SetPolygonPolygonGroup, PolygonGroupID) == 0x000004, "Member 'MeshDescriptionBase_SetPolygonPolygonGroup::PolygonGroupID' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.SetPolygonVertexInstance
// 0x000C (0x000C - 0x0000)
struct MeshDescriptionBase_SetPolygonVertexInstance final
{
public:
	struct FPolygonID                             PolygonID;                                         // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PerimeterIndex;                                    // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexInstanceID                      VertexInstanceID;                                  // 0x0008(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_SetPolygonVertexInstance) == 0x000004, "Wrong alignment on MeshDescriptionBase_SetPolygonVertexInstance");
static_assert(sizeof(MeshDescriptionBase_SetPolygonVertexInstance) == 0x00000C, "Wrong size on MeshDescriptionBase_SetPolygonVertexInstance");
static_assert(offsetof(MeshDescriptionBase_SetPolygonVertexInstance, PolygonID) == 0x000000, "Member 'MeshDescriptionBase_SetPolygonVertexInstance::PolygonID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_SetPolygonVertexInstance, PerimeterIndex) == 0x000004, "Member 'MeshDescriptionBase_SetPolygonVertexInstance::PerimeterIndex' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_SetPolygonVertexInstance, VertexInstanceID) == 0x000008, "Member 'MeshDescriptionBase_SetPolygonVertexInstance::VertexInstanceID' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.SetVertexPosition
// 0x0010 (0x0010 - 0x0000)
struct MeshDescriptionBase_SetVertexPosition final
{
public:
	struct FVertexID                              VertexID;                                          // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Position;                                          // 0x0004(0x000C)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_SetVertexPosition) == 0x000004, "Wrong alignment on MeshDescriptionBase_SetVertexPosition");
static_assert(sizeof(MeshDescriptionBase_SetVertexPosition) == 0x000010, "Wrong size on MeshDescriptionBase_SetVertexPosition");
static_assert(offsetof(MeshDescriptionBase_SetVertexPosition, VertexID) == 0x000000, "Member 'MeshDescriptionBase_SetVertexPosition::VertexID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_SetVertexPosition, Position) == 0x000004, "Member 'MeshDescriptionBase_SetVertexPosition::Position' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedPolygons
// 0x0018 (0x0018 - 0x0000)
struct MeshDescriptionBase_GetEdgeConnectedPolygons final
{
public:
	struct FEdgeID                                EdgeID;                                            // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4176[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FPolygonID>                     OutConnectedPolygonIDs;                            // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_GetEdgeConnectedPolygons) == 0x000008, "Wrong alignment on MeshDescriptionBase_GetEdgeConnectedPolygons");
static_assert(sizeof(MeshDescriptionBase_GetEdgeConnectedPolygons) == 0x000018, "Wrong size on MeshDescriptionBase_GetEdgeConnectedPolygons");
static_assert(offsetof(MeshDescriptionBase_GetEdgeConnectedPolygons, EdgeID) == 0x000000, "Member 'MeshDescriptionBase_GetEdgeConnectedPolygons::EdgeID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_GetEdgeConnectedPolygons, OutConnectedPolygonIDs) == 0x000008, "Member 'MeshDescriptionBase_GetEdgeConnectedPolygons::OutConnectedPolygonIDs' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedTriangles
// 0x0018 (0x0018 - 0x0000)
struct MeshDescriptionBase_GetEdgeConnectedTriangles final
{
public:
	struct FEdgeID                                EdgeID;                                            // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4177[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FTriangleID>                    OutConnectedTriangleIDs;                           // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_GetEdgeConnectedTriangles) == 0x000008, "Wrong alignment on MeshDescriptionBase_GetEdgeConnectedTriangles");
static_assert(sizeof(MeshDescriptionBase_GetEdgeConnectedTriangles) == 0x000018, "Wrong size on MeshDescriptionBase_GetEdgeConnectedTriangles");
static_assert(offsetof(MeshDescriptionBase_GetEdgeConnectedTriangles, EdgeID) == 0x000000, "Member 'MeshDescriptionBase_GetEdgeConnectedTriangles::EdgeID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_GetEdgeConnectedTriangles, OutConnectedTriangleIDs) == 0x000008, "Member 'MeshDescriptionBase_GetEdgeConnectedTriangles::OutConnectedTriangleIDs' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.GetEdgeVertex
// 0x000C (0x000C - 0x0000)
struct MeshDescriptionBase_GetEdgeVertex final
{
public:
	struct FEdgeID                                EdgeID;                                            // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         VertexNumber;                                      // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexID                              ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_GetEdgeVertex) == 0x000004, "Wrong alignment on MeshDescriptionBase_GetEdgeVertex");
static_assert(sizeof(MeshDescriptionBase_GetEdgeVertex) == 0x00000C, "Wrong size on MeshDescriptionBase_GetEdgeVertex");
static_assert(offsetof(MeshDescriptionBase_GetEdgeVertex, EdgeID) == 0x000000, "Member 'MeshDescriptionBase_GetEdgeVertex::EdgeID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_GetEdgeVertex, VertexNumber) == 0x000004, "Member 'MeshDescriptionBase_GetEdgeVertex::VertexNumber' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_GetEdgeVertex, ReturnValue) == 0x000008, "Member 'MeshDescriptionBase_GetEdgeVertex::ReturnValue' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.GetEdgeVertices
// 0x0018 (0x0018 - 0x0000)
struct MeshDescriptionBase_GetEdgeVertices final
{
public:
	struct FEdgeID                                EdgeID;                                            // 0x0000(0x0004)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4178[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVertexID>                      OutVertexIDs;                                      // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_GetEdgeVertices) == 0x000008, "Wrong alignment on MeshDescriptionBase_GetEdgeVertices");
static_assert(sizeof(MeshDescriptionBase_GetEdgeVertices) == 0x000018, "Wrong size on MeshDescriptionBase_GetEdgeVertices");
static_assert(offsetof(MeshDescriptionBase_GetEdgeVertices, EdgeID) == 0x000000, "Member 'MeshDescriptionBase_GetEdgeVertices::EdgeID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_GetEdgeVertices, OutVertexIDs) == 0x000008, "Member 'MeshDescriptionBase_GetEdgeVertices::OutVertexIDs' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedPolygons
// 0x0008 (0x0008 - 0x0000)
struct MeshDescriptionBase_GetNumEdgeConnectedPolygons final
{
public:
	struct FEdgeID                                EdgeID;                                            // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_GetNumEdgeConnectedPolygons) == 0x000004, "Wrong alignment on MeshDescriptionBase_GetNumEdgeConnectedPolygons");
static_assert(sizeof(MeshDescriptionBase_GetNumEdgeConnectedPolygons) == 0x000008, "Wrong size on MeshDescriptionBase_GetNumEdgeConnectedPolygons");
static_assert(offsetof(MeshDescriptionBase_GetNumEdgeConnectedPolygons, EdgeID) == 0x000000, "Member 'MeshDescriptionBase_GetNumEdgeConnectedPolygons::EdgeID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_GetNumEdgeConnectedPolygons, ReturnValue) == 0x000004, "Member 'MeshDescriptionBase_GetNumEdgeConnectedPolygons::ReturnValue' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedTriangles
// 0x0008 (0x0008 - 0x0000)
struct MeshDescriptionBase_GetNumEdgeConnectedTriangles final
{
public:
	struct FEdgeID                                EdgeID;                                            // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_GetNumEdgeConnectedTriangles) == 0x000004, "Wrong alignment on MeshDescriptionBase_GetNumEdgeConnectedTriangles");
static_assert(sizeof(MeshDescriptionBase_GetNumEdgeConnectedTriangles) == 0x000008, "Wrong size on MeshDescriptionBase_GetNumEdgeConnectedTriangles");
static_assert(offsetof(MeshDescriptionBase_GetNumEdgeConnectedTriangles, EdgeID) == 0x000000, "Member 'MeshDescriptionBase_GetNumEdgeConnectedTriangles::EdgeID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_GetNumEdgeConnectedTriangles, ReturnValue) == 0x000004, "Member 'MeshDescriptionBase_GetNumEdgeConnectedTriangles::ReturnValue' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.GetNumPolygonGroupPolygons
// 0x0008 (0x0008 - 0x0000)
struct MeshDescriptionBase_GetNumPolygonGroupPolygons final
{
public:
	struct FPolygonGroupID                        PolygonGroupID;                                    // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_GetNumPolygonGroupPolygons) == 0x000004, "Wrong alignment on MeshDescriptionBase_GetNumPolygonGroupPolygons");
static_assert(sizeof(MeshDescriptionBase_GetNumPolygonGroupPolygons) == 0x000008, "Wrong size on MeshDescriptionBase_GetNumPolygonGroupPolygons");
static_assert(offsetof(MeshDescriptionBase_GetNumPolygonGroupPolygons, PolygonGroupID) == 0x000000, "Member 'MeshDescriptionBase_GetNumPolygonGroupPolygons::PolygonGroupID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_GetNumPolygonGroupPolygons, ReturnValue) == 0x000004, "Member 'MeshDescriptionBase_GetNumPolygonGroupPolygons::ReturnValue' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.GetNumPolygonInternalEdges
// 0x0008 (0x0008 - 0x0000)
struct MeshDescriptionBase_GetNumPolygonInternalEdges final
{
public:
	struct FPolygonID                             PolygonID;                                         // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_GetNumPolygonInternalEdges) == 0x000004, "Wrong alignment on MeshDescriptionBase_GetNumPolygonInternalEdges");
static_assert(sizeof(MeshDescriptionBase_GetNumPolygonInternalEdges) == 0x000008, "Wrong size on MeshDescriptionBase_GetNumPolygonInternalEdges");
static_assert(offsetof(MeshDescriptionBase_GetNumPolygonInternalEdges, PolygonID) == 0x000000, "Member 'MeshDescriptionBase_GetNumPolygonInternalEdges::PolygonID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_GetNumPolygonInternalEdges, ReturnValue) == 0x000004, "Member 'MeshDescriptionBase_GetNumPolygonInternalEdges::ReturnValue' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.GetNumPolygonTriangles
// 0x0008 (0x0008 - 0x0000)
struct MeshDescriptionBase_GetNumPolygonTriangles final
{
public:
	struct FPolygonID                             PolygonID;                                         // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_GetNumPolygonTriangles) == 0x000004, "Wrong alignment on MeshDescriptionBase_GetNumPolygonTriangles");
static_assert(sizeof(MeshDescriptionBase_GetNumPolygonTriangles) == 0x000008, "Wrong size on MeshDescriptionBase_GetNumPolygonTriangles");
static_assert(offsetof(MeshDescriptionBase_GetNumPolygonTriangles, PolygonID) == 0x000000, "Member 'MeshDescriptionBase_GetNumPolygonTriangles::PolygonID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_GetNumPolygonTriangles, ReturnValue) == 0x000004, "Member 'MeshDescriptionBase_GetNumPolygonTriangles::ReturnValue' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.GetNumPolygonVertices
// 0x0008 (0x0008 - 0x0000)
struct MeshDescriptionBase_GetNumPolygonVertices final
{
public:
	struct FPolygonID                             PolygonID;                                         // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_GetNumPolygonVertices) == 0x000004, "Wrong alignment on MeshDescriptionBase_GetNumPolygonVertices");
static_assert(sizeof(MeshDescriptionBase_GetNumPolygonVertices) == 0x000008, "Wrong size on MeshDescriptionBase_GetNumPolygonVertices");
static_assert(offsetof(MeshDescriptionBase_GetNumPolygonVertices, PolygonID) == 0x000000, "Member 'MeshDescriptionBase_GetNumPolygonVertices::PolygonID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_GetNumPolygonVertices, ReturnValue) == 0x000004, "Member 'MeshDescriptionBase_GetNumPolygonVertices::ReturnValue' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedEdges
// 0x0008 (0x0008 - 0x0000)
struct MeshDescriptionBase_GetNumVertexConnectedEdges final
{
public:
	struct FVertexID                              VertexID;                                          // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_GetNumVertexConnectedEdges) == 0x000004, "Wrong alignment on MeshDescriptionBase_GetNumVertexConnectedEdges");
static_assert(sizeof(MeshDescriptionBase_GetNumVertexConnectedEdges) == 0x000008, "Wrong size on MeshDescriptionBase_GetNumVertexConnectedEdges");
static_assert(offsetof(MeshDescriptionBase_GetNumVertexConnectedEdges, VertexID) == 0x000000, "Member 'MeshDescriptionBase_GetNumVertexConnectedEdges::VertexID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_GetNumVertexConnectedEdges, ReturnValue) == 0x000004, "Member 'MeshDescriptionBase_GetNumVertexConnectedEdges::ReturnValue' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedPolygons
// 0x0008 (0x0008 - 0x0000)
struct MeshDescriptionBase_GetNumVertexConnectedPolygons final
{
public:
	struct FVertexID                              VertexID;                                          // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_GetNumVertexConnectedPolygons) == 0x000004, "Wrong alignment on MeshDescriptionBase_GetNumVertexConnectedPolygons");
static_assert(sizeof(MeshDescriptionBase_GetNumVertexConnectedPolygons) == 0x000008, "Wrong size on MeshDescriptionBase_GetNumVertexConnectedPolygons");
static_assert(offsetof(MeshDescriptionBase_GetNumVertexConnectedPolygons, VertexID) == 0x000000, "Member 'MeshDescriptionBase_GetNumVertexConnectedPolygons::VertexID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_GetNumVertexConnectedPolygons, ReturnValue) == 0x000004, "Member 'MeshDescriptionBase_GetNumVertexConnectedPolygons::ReturnValue' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedTriangles
// 0x0008 (0x0008 - 0x0000)
struct MeshDescriptionBase_GetNumVertexConnectedTriangles final
{
public:
	struct FVertexID                              VertexID;                                          // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_GetNumVertexConnectedTriangles) == 0x000004, "Wrong alignment on MeshDescriptionBase_GetNumVertexConnectedTriangles");
static_assert(sizeof(MeshDescriptionBase_GetNumVertexConnectedTriangles) == 0x000008, "Wrong size on MeshDescriptionBase_GetNumVertexConnectedTriangles");
static_assert(offsetof(MeshDescriptionBase_GetNumVertexConnectedTriangles, VertexID) == 0x000000, "Member 'MeshDescriptionBase_GetNumVertexConnectedTriangles::VertexID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_GetNumVertexConnectedTriangles, ReturnValue) == 0x000004, "Member 'MeshDescriptionBase_GetNumVertexConnectedTriangles::ReturnValue' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedPolygons
// 0x0008 (0x0008 - 0x0000)
struct MeshDescriptionBase_GetNumVertexInstanceConnectedPolygons final
{
public:
	struct FVertexInstanceID                      VertexInstanceID;                                  // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_GetNumVertexInstanceConnectedPolygons) == 0x000004, "Wrong alignment on MeshDescriptionBase_GetNumVertexInstanceConnectedPolygons");
static_assert(sizeof(MeshDescriptionBase_GetNumVertexInstanceConnectedPolygons) == 0x000008, "Wrong size on MeshDescriptionBase_GetNumVertexInstanceConnectedPolygons");
static_assert(offsetof(MeshDescriptionBase_GetNumVertexInstanceConnectedPolygons, VertexInstanceID) == 0x000000, "Member 'MeshDescriptionBase_GetNumVertexInstanceConnectedPolygons::VertexInstanceID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_GetNumVertexInstanceConnectedPolygons, ReturnValue) == 0x000004, "Member 'MeshDescriptionBase_GetNumVertexInstanceConnectedPolygons::ReturnValue' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedTriangles
// 0x0008 (0x0008 - 0x0000)
struct MeshDescriptionBase_GetNumVertexInstanceConnectedTriangles final
{
public:
	struct FVertexInstanceID                      VertexInstanceID;                                  // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_GetNumVertexInstanceConnectedTriangles) == 0x000004, "Wrong alignment on MeshDescriptionBase_GetNumVertexInstanceConnectedTriangles");
static_assert(sizeof(MeshDescriptionBase_GetNumVertexInstanceConnectedTriangles) == 0x000008, "Wrong size on MeshDescriptionBase_GetNumVertexInstanceConnectedTriangles");
static_assert(offsetof(MeshDescriptionBase_GetNumVertexInstanceConnectedTriangles, VertexInstanceID) == 0x000000, "Member 'MeshDescriptionBase_GetNumVertexInstanceConnectedTriangles::VertexInstanceID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_GetNumVertexInstanceConnectedTriangles, ReturnValue) == 0x000004, "Member 'MeshDescriptionBase_GetNumVertexInstanceConnectedTriangles::ReturnValue' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.GetNumVertexVertexInstances
// 0x0008 (0x0008 - 0x0000)
struct MeshDescriptionBase_GetNumVertexVertexInstances final
{
public:
	struct FVertexID                              VertexID;                                          // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_GetNumVertexVertexInstances) == 0x000004, "Wrong alignment on MeshDescriptionBase_GetNumVertexVertexInstances");
static_assert(sizeof(MeshDescriptionBase_GetNumVertexVertexInstances) == 0x000008, "Wrong size on MeshDescriptionBase_GetNumVertexVertexInstances");
static_assert(offsetof(MeshDescriptionBase_GetNumVertexVertexInstances, VertexID) == 0x000000, "Member 'MeshDescriptionBase_GetNumVertexVertexInstances::VertexID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_GetNumVertexVertexInstances, ReturnValue) == 0x000004, "Member 'MeshDescriptionBase_GetNumVertexVertexInstances::ReturnValue' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.GetPolygonAdjacentPolygons
// 0x0018 (0x0018 - 0x0000)
struct MeshDescriptionBase_GetPolygonAdjacentPolygons final
{
public:
	struct FPolygonID                             PolygonID;                                         // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4179[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FPolygonID>                     OutPolygonIDs;                                     // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_GetPolygonAdjacentPolygons) == 0x000008, "Wrong alignment on MeshDescriptionBase_GetPolygonAdjacentPolygons");
static_assert(sizeof(MeshDescriptionBase_GetPolygonAdjacentPolygons) == 0x000018, "Wrong size on MeshDescriptionBase_GetPolygonAdjacentPolygons");
static_assert(offsetof(MeshDescriptionBase_GetPolygonAdjacentPolygons, PolygonID) == 0x000000, "Member 'MeshDescriptionBase_GetPolygonAdjacentPolygons::PolygonID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_GetPolygonAdjacentPolygons, OutPolygonIDs) == 0x000008, "Member 'MeshDescriptionBase_GetPolygonAdjacentPolygons::OutPolygonIDs' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.GetPolygonGroupPolygons
// 0x0018 (0x0018 - 0x0000)
struct MeshDescriptionBase_GetPolygonGroupPolygons final
{
public:
	struct FPolygonGroupID                        PolygonGroupID;                                    // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_417A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FPolygonID>                     OutPolygonIDs;                                     // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_GetPolygonGroupPolygons) == 0x000008, "Wrong alignment on MeshDescriptionBase_GetPolygonGroupPolygons");
static_assert(sizeof(MeshDescriptionBase_GetPolygonGroupPolygons) == 0x000018, "Wrong size on MeshDescriptionBase_GetPolygonGroupPolygons");
static_assert(offsetof(MeshDescriptionBase_GetPolygonGroupPolygons, PolygonGroupID) == 0x000000, "Member 'MeshDescriptionBase_GetPolygonGroupPolygons::PolygonGroupID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_GetPolygonGroupPolygons, OutPolygonIDs) == 0x000008, "Member 'MeshDescriptionBase_GetPolygonGroupPolygons::OutPolygonIDs' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.GetPolygonInternalEdges
// 0x0018 (0x0018 - 0x0000)
struct MeshDescriptionBase_GetPolygonInternalEdges final
{
public:
	struct FPolygonID                             PolygonID;                                         // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_417B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FEdgeID>                        OutEdgeIDs;                                        // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_GetPolygonInternalEdges) == 0x000008, "Wrong alignment on MeshDescriptionBase_GetPolygonInternalEdges");
static_assert(sizeof(MeshDescriptionBase_GetPolygonInternalEdges) == 0x000018, "Wrong size on MeshDescriptionBase_GetPolygonInternalEdges");
static_assert(offsetof(MeshDescriptionBase_GetPolygonInternalEdges, PolygonID) == 0x000000, "Member 'MeshDescriptionBase_GetPolygonInternalEdges::PolygonID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_GetPolygonInternalEdges, OutEdgeIDs) == 0x000008, "Member 'MeshDescriptionBase_GetPolygonInternalEdges::OutEdgeIDs' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.GetPolygonPerimeterEdges
// 0x0018 (0x0018 - 0x0000)
struct MeshDescriptionBase_GetPolygonPerimeterEdges final
{
public:
	struct FPolygonID                             PolygonID;                                         // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_417C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FEdgeID>                        OutEdgeIDs;                                        // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_GetPolygonPerimeterEdges) == 0x000008, "Wrong alignment on MeshDescriptionBase_GetPolygonPerimeterEdges");
static_assert(sizeof(MeshDescriptionBase_GetPolygonPerimeterEdges) == 0x000018, "Wrong size on MeshDescriptionBase_GetPolygonPerimeterEdges");
static_assert(offsetof(MeshDescriptionBase_GetPolygonPerimeterEdges, PolygonID) == 0x000000, "Member 'MeshDescriptionBase_GetPolygonPerimeterEdges::PolygonID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_GetPolygonPerimeterEdges, OutEdgeIDs) == 0x000008, "Member 'MeshDescriptionBase_GetPolygonPerimeterEdges::OutEdgeIDs' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.GetPolygonPolygonGroup
// 0x0008 (0x0008 - 0x0000)
struct MeshDescriptionBase_GetPolygonPolygonGroup final
{
public:
	struct FPolygonID                             PolygonID;                                         // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPolygonGroupID                        ReturnValue;                                       // 0x0004(0x0004)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_GetPolygonPolygonGroup) == 0x000004, "Wrong alignment on MeshDescriptionBase_GetPolygonPolygonGroup");
static_assert(sizeof(MeshDescriptionBase_GetPolygonPolygonGroup) == 0x000008, "Wrong size on MeshDescriptionBase_GetPolygonPolygonGroup");
static_assert(offsetof(MeshDescriptionBase_GetPolygonPolygonGroup, PolygonID) == 0x000000, "Member 'MeshDescriptionBase_GetPolygonPolygonGroup::PolygonID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_GetPolygonPolygonGroup, ReturnValue) == 0x000004, "Member 'MeshDescriptionBase_GetPolygonPolygonGroup::ReturnValue' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.GetPolygonTriangles
// 0x0018 (0x0018 - 0x0000)
struct MeshDescriptionBase_GetPolygonTriangles final
{
public:
	struct FPolygonID                             PolygonID;                                         // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_417D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FTriangleID>                    OutTriangleIDs;                                    // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_GetPolygonTriangles) == 0x000008, "Wrong alignment on MeshDescriptionBase_GetPolygonTriangles");
static_assert(sizeof(MeshDescriptionBase_GetPolygonTriangles) == 0x000018, "Wrong size on MeshDescriptionBase_GetPolygonTriangles");
static_assert(offsetof(MeshDescriptionBase_GetPolygonTriangles, PolygonID) == 0x000000, "Member 'MeshDescriptionBase_GetPolygonTriangles::PolygonID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_GetPolygonTriangles, OutTriangleIDs) == 0x000008, "Member 'MeshDescriptionBase_GetPolygonTriangles::OutTriangleIDs' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.GetPolygonVertexInstances
// 0x0018 (0x0018 - 0x0000)
struct MeshDescriptionBase_GetPolygonVertexInstances final
{
public:
	struct FPolygonID                             PolygonID;                                         // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_417E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVertexInstanceID>              OutVertexInstanceIDs;                              // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_GetPolygonVertexInstances) == 0x000008, "Wrong alignment on MeshDescriptionBase_GetPolygonVertexInstances");
static_assert(sizeof(MeshDescriptionBase_GetPolygonVertexInstances) == 0x000018, "Wrong size on MeshDescriptionBase_GetPolygonVertexInstances");
static_assert(offsetof(MeshDescriptionBase_GetPolygonVertexInstances, PolygonID) == 0x000000, "Member 'MeshDescriptionBase_GetPolygonVertexInstances::PolygonID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_GetPolygonVertexInstances, OutVertexInstanceIDs) == 0x000008, "Member 'MeshDescriptionBase_GetPolygonVertexInstances::OutVertexInstanceIDs' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.GetPolygonVertices
// 0x0018 (0x0018 - 0x0000)
struct MeshDescriptionBase_GetPolygonVertices final
{
public:
	struct FPolygonID                             PolygonID;                                         // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_417F[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVertexID>                      OutVertexIDs;                                      // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_GetPolygonVertices) == 0x000008, "Wrong alignment on MeshDescriptionBase_GetPolygonVertices");
static_assert(sizeof(MeshDescriptionBase_GetPolygonVertices) == 0x000018, "Wrong size on MeshDescriptionBase_GetPolygonVertices");
static_assert(offsetof(MeshDescriptionBase_GetPolygonVertices, PolygonID) == 0x000000, "Member 'MeshDescriptionBase_GetPolygonVertices::PolygonID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_GetPolygonVertices, OutVertexIDs) == 0x000008, "Member 'MeshDescriptionBase_GetPolygonVertices::OutVertexIDs' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.GetTriangleAdjacentTriangles
// 0x0018 (0x0018 - 0x0000)
struct MeshDescriptionBase_GetTriangleAdjacentTriangles final
{
public:
	struct FTriangleID                            TriangleID;                                        // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4180[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FTriangleID>                    OutTriangleIDs;                                    // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_GetTriangleAdjacentTriangles) == 0x000008, "Wrong alignment on MeshDescriptionBase_GetTriangleAdjacentTriangles");
static_assert(sizeof(MeshDescriptionBase_GetTriangleAdjacentTriangles) == 0x000018, "Wrong size on MeshDescriptionBase_GetTriangleAdjacentTriangles");
static_assert(offsetof(MeshDescriptionBase_GetTriangleAdjacentTriangles, TriangleID) == 0x000000, "Member 'MeshDescriptionBase_GetTriangleAdjacentTriangles::TriangleID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_GetTriangleAdjacentTriangles, OutTriangleIDs) == 0x000008, "Member 'MeshDescriptionBase_GetTriangleAdjacentTriangles::OutTriangleIDs' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.GetTriangleEdges
// 0x0018 (0x0018 - 0x0000)
struct MeshDescriptionBase_GetTriangleEdges final
{
public:
	struct FTriangleID                            TriangleID;                                        // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4181[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FEdgeID>                        OutEdgeIDs;                                        // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_GetTriangleEdges) == 0x000008, "Wrong alignment on MeshDescriptionBase_GetTriangleEdges");
static_assert(sizeof(MeshDescriptionBase_GetTriangleEdges) == 0x000018, "Wrong size on MeshDescriptionBase_GetTriangleEdges");
static_assert(offsetof(MeshDescriptionBase_GetTriangleEdges, TriangleID) == 0x000000, "Member 'MeshDescriptionBase_GetTriangleEdges::TriangleID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_GetTriangleEdges, OutEdgeIDs) == 0x000008, "Member 'MeshDescriptionBase_GetTriangleEdges::OutEdgeIDs' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.GetTrianglePolygon
// 0x0008 (0x0008 - 0x0000)
struct MeshDescriptionBase_GetTrianglePolygon final
{
public:
	struct FTriangleID                            TriangleID;                                        // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPolygonID                             ReturnValue;                                       // 0x0004(0x0004)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_GetTrianglePolygon) == 0x000004, "Wrong alignment on MeshDescriptionBase_GetTrianglePolygon");
static_assert(sizeof(MeshDescriptionBase_GetTrianglePolygon) == 0x000008, "Wrong size on MeshDescriptionBase_GetTrianglePolygon");
static_assert(offsetof(MeshDescriptionBase_GetTrianglePolygon, TriangleID) == 0x000000, "Member 'MeshDescriptionBase_GetTrianglePolygon::TriangleID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_GetTrianglePolygon, ReturnValue) == 0x000004, "Member 'MeshDescriptionBase_GetTrianglePolygon::ReturnValue' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.GetTrianglePolygonGroup
// 0x0008 (0x0008 - 0x0000)
struct MeshDescriptionBase_GetTrianglePolygonGroup final
{
public:
	struct FTriangleID                            TriangleID;                                        // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPolygonGroupID                        ReturnValue;                                       // 0x0004(0x0004)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_GetTrianglePolygonGroup) == 0x000004, "Wrong alignment on MeshDescriptionBase_GetTrianglePolygonGroup");
static_assert(sizeof(MeshDescriptionBase_GetTrianglePolygonGroup) == 0x000008, "Wrong size on MeshDescriptionBase_GetTrianglePolygonGroup");
static_assert(offsetof(MeshDescriptionBase_GetTrianglePolygonGroup, TriangleID) == 0x000000, "Member 'MeshDescriptionBase_GetTrianglePolygonGroup::TriangleID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_GetTrianglePolygonGroup, ReturnValue) == 0x000004, "Member 'MeshDescriptionBase_GetTrianglePolygonGroup::ReturnValue' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstance
// 0x000C (0x000C - 0x0000)
struct MeshDescriptionBase_GetTriangleVertexInstance final
{
public:
	struct FTriangleID                            TriangleID;                                        // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Param_Index;                                       // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexInstanceID                      ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_GetTriangleVertexInstance) == 0x000004, "Wrong alignment on MeshDescriptionBase_GetTriangleVertexInstance");
static_assert(sizeof(MeshDescriptionBase_GetTriangleVertexInstance) == 0x00000C, "Wrong size on MeshDescriptionBase_GetTriangleVertexInstance");
static_assert(offsetof(MeshDescriptionBase_GetTriangleVertexInstance, TriangleID) == 0x000000, "Member 'MeshDescriptionBase_GetTriangleVertexInstance::TriangleID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_GetTriangleVertexInstance, Param_Index) == 0x000004, "Member 'MeshDescriptionBase_GetTriangleVertexInstance::Param_Index' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_GetTriangleVertexInstance, ReturnValue) == 0x000008, "Member 'MeshDescriptionBase_GetTriangleVertexInstance::ReturnValue' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstances
// 0x0018 (0x0018 - 0x0000)
struct MeshDescriptionBase_GetTriangleVertexInstances final
{
public:
	struct FTriangleID                            TriangleID;                                        // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4182[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVertexInstanceID>              OutVertexInstanceIDs;                              // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_GetTriangleVertexInstances) == 0x000008, "Wrong alignment on MeshDescriptionBase_GetTriangleVertexInstances");
static_assert(sizeof(MeshDescriptionBase_GetTriangleVertexInstances) == 0x000018, "Wrong size on MeshDescriptionBase_GetTriangleVertexInstances");
static_assert(offsetof(MeshDescriptionBase_GetTriangleVertexInstances, TriangleID) == 0x000000, "Member 'MeshDescriptionBase_GetTriangleVertexInstances::TriangleID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_GetTriangleVertexInstances, OutVertexInstanceIDs) == 0x000008, "Member 'MeshDescriptionBase_GetTriangleVertexInstances::OutVertexInstanceIDs' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.GetTriangleVertices
// 0x0018 (0x0018 - 0x0000)
struct MeshDescriptionBase_GetTriangleVertices final
{
public:
	struct FTriangleID                            TriangleID;                                        // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4183[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVertexID>                      OutVertexIDs;                                      // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_GetTriangleVertices) == 0x000008, "Wrong alignment on MeshDescriptionBase_GetTriangleVertices");
static_assert(sizeof(MeshDescriptionBase_GetTriangleVertices) == 0x000018, "Wrong size on MeshDescriptionBase_GetTriangleVertices");
static_assert(offsetof(MeshDescriptionBase_GetTriangleVertices, TriangleID) == 0x000000, "Member 'MeshDescriptionBase_GetTriangleVertices::TriangleID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_GetTriangleVertices, OutVertexIDs) == 0x000008, "Member 'MeshDescriptionBase_GetTriangleVertices::OutVertexIDs' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.GetVertexAdjacentVertices
// 0x0018 (0x0018 - 0x0000)
struct MeshDescriptionBase_GetVertexAdjacentVertices final
{
public:
	struct FVertexID                              VertexID;                                          // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4184[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVertexID>                      OutAdjacentVertexIDs;                              // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_GetVertexAdjacentVertices) == 0x000008, "Wrong alignment on MeshDescriptionBase_GetVertexAdjacentVertices");
static_assert(sizeof(MeshDescriptionBase_GetVertexAdjacentVertices) == 0x000018, "Wrong size on MeshDescriptionBase_GetVertexAdjacentVertices");
static_assert(offsetof(MeshDescriptionBase_GetVertexAdjacentVertices, VertexID) == 0x000000, "Member 'MeshDescriptionBase_GetVertexAdjacentVertices::VertexID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_GetVertexAdjacentVertices, OutAdjacentVertexIDs) == 0x000008, "Member 'MeshDescriptionBase_GetVertexAdjacentVertices::OutAdjacentVertexIDs' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.GetVertexConnectedEdges
// 0x0018 (0x0018 - 0x0000)
struct MeshDescriptionBase_GetVertexConnectedEdges final
{
public:
	struct FVertexID                              VertexID;                                          // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4185[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FEdgeID>                        OutEdgeIDs;                                        // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_GetVertexConnectedEdges) == 0x000008, "Wrong alignment on MeshDescriptionBase_GetVertexConnectedEdges");
static_assert(sizeof(MeshDescriptionBase_GetVertexConnectedEdges) == 0x000018, "Wrong size on MeshDescriptionBase_GetVertexConnectedEdges");
static_assert(offsetof(MeshDescriptionBase_GetVertexConnectedEdges, VertexID) == 0x000000, "Member 'MeshDescriptionBase_GetVertexConnectedEdges::VertexID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_GetVertexConnectedEdges, OutEdgeIDs) == 0x000008, "Member 'MeshDescriptionBase_GetVertexConnectedEdges::OutEdgeIDs' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.GetVertexConnectedPolygons
// 0x0018 (0x0018 - 0x0000)
struct MeshDescriptionBase_GetVertexConnectedPolygons final
{
public:
	struct FVertexID                              VertexID;                                          // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4186[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FPolygonID>                     OutConnectedPolygonIDs;                            // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_GetVertexConnectedPolygons) == 0x000008, "Wrong alignment on MeshDescriptionBase_GetVertexConnectedPolygons");
static_assert(sizeof(MeshDescriptionBase_GetVertexConnectedPolygons) == 0x000018, "Wrong size on MeshDescriptionBase_GetVertexConnectedPolygons");
static_assert(offsetof(MeshDescriptionBase_GetVertexConnectedPolygons, VertexID) == 0x000000, "Member 'MeshDescriptionBase_GetVertexConnectedPolygons::VertexID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_GetVertexConnectedPolygons, OutConnectedPolygonIDs) == 0x000008, "Member 'MeshDescriptionBase_GetVertexConnectedPolygons::OutConnectedPolygonIDs' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.GetVertexConnectedTriangles
// 0x0018 (0x0018 - 0x0000)
struct MeshDescriptionBase_GetVertexConnectedTriangles final
{
public:
	struct FVertexID                              VertexID;                                          // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4187[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FTriangleID>                    OutConnectedTriangleIDs;                           // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_GetVertexConnectedTriangles) == 0x000008, "Wrong alignment on MeshDescriptionBase_GetVertexConnectedTriangles");
static_assert(sizeof(MeshDescriptionBase_GetVertexConnectedTriangles) == 0x000018, "Wrong size on MeshDescriptionBase_GetVertexConnectedTriangles");
static_assert(offsetof(MeshDescriptionBase_GetVertexConnectedTriangles, VertexID) == 0x000000, "Member 'MeshDescriptionBase_GetVertexConnectedTriangles::VertexID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_GetVertexConnectedTriangles, OutConnectedTriangleIDs) == 0x000008, "Member 'MeshDescriptionBase_GetVertexConnectedTriangles::OutConnectedTriangleIDs' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedPolygons
// 0x0018 (0x0018 - 0x0000)
struct MeshDescriptionBase_GetVertexInstanceConnectedPolygons final
{
public:
	struct FVertexInstanceID                      VertexInstanceID;                                  // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4188[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FPolygonID>                     OutConnectedPolygonIDs;                            // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_GetVertexInstanceConnectedPolygons) == 0x000008, "Wrong alignment on MeshDescriptionBase_GetVertexInstanceConnectedPolygons");
static_assert(sizeof(MeshDescriptionBase_GetVertexInstanceConnectedPolygons) == 0x000018, "Wrong size on MeshDescriptionBase_GetVertexInstanceConnectedPolygons");
static_assert(offsetof(MeshDescriptionBase_GetVertexInstanceConnectedPolygons, VertexInstanceID) == 0x000000, "Member 'MeshDescriptionBase_GetVertexInstanceConnectedPolygons::VertexInstanceID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_GetVertexInstanceConnectedPolygons, OutConnectedPolygonIDs) == 0x000008, "Member 'MeshDescriptionBase_GetVertexInstanceConnectedPolygons::OutConnectedPolygonIDs' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedTriangles
// 0x0018 (0x0018 - 0x0000)
struct MeshDescriptionBase_GetVertexInstanceConnectedTriangles final
{
public:
	struct FVertexInstanceID                      VertexInstanceID;                                  // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4189[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FTriangleID>                    OutConnectedTriangleIDs;                           // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_GetVertexInstanceConnectedTriangles) == 0x000008, "Wrong alignment on MeshDescriptionBase_GetVertexInstanceConnectedTriangles");
static_assert(sizeof(MeshDescriptionBase_GetVertexInstanceConnectedTriangles) == 0x000018, "Wrong size on MeshDescriptionBase_GetVertexInstanceConnectedTriangles");
static_assert(offsetof(MeshDescriptionBase_GetVertexInstanceConnectedTriangles, VertexInstanceID) == 0x000000, "Member 'MeshDescriptionBase_GetVertexInstanceConnectedTriangles::VertexInstanceID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_GetVertexInstanceConnectedTriangles, OutConnectedTriangleIDs) == 0x000008, "Member 'MeshDescriptionBase_GetVertexInstanceConnectedTriangles::OutConnectedTriangleIDs' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForPolygonVertex
// 0x000C (0x000C - 0x0000)
struct MeshDescriptionBase_GetVertexInstanceForPolygonVertex final
{
public:
	struct FPolygonID                             PolygonID;                                         // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexID                              VertexID;                                          // 0x0004(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexInstanceID                      ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_GetVertexInstanceForPolygonVertex) == 0x000004, "Wrong alignment on MeshDescriptionBase_GetVertexInstanceForPolygonVertex");
static_assert(sizeof(MeshDescriptionBase_GetVertexInstanceForPolygonVertex) == 0x00000C, "Wrong size on MeshDescriptionBase_GetVertexInstanceForPolygonVertex");
static_assert(offsetof(MeshDescriptionBase_GetVertexInstanceForPolygonVertex, PolygonID) == 0x000000, "Member 'MeshDescriptionBase_GetVertexInstanceForPolygonVertex::PolygonID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_GetVertexInstanceForPolygonVertex, VertexID) == 0x000004, "Member 'MeshDescriptionBase_GetVertexInstanceForPolygonVertex::VertexID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_GetVertexInstanceForPolygonVertex, ReturnValue) == 0x000008, "Member 'MeshDescriptionBase_GetVertexInstanceForPolygonVertex::ReturnValue' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForTriangleVertex
// 0x000C (0x000C - 0x0000)
struct MeshDescriptionBase_GetVertexInstanceForTriangleVertex final
{
public:
	struct FTriangleID                            TriangleID;                                        // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexID                              VertexID;                                          // 0x0004(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexInstanceID                      ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_GetVertexInstanceForTriangleVertex) == 0x000004, "Wrong alignment on MeshDescriptionBase_GetVertexInstanceForTriangleVertex");
static_assert(sizeof(MeshDescriptionBase_GetVertexInstanceForTriangleVertex) == 0x00000C, "Wrong size on MeshDescriptionBase_GetVertexInstanceForTriangleVertex");
static_assert(offsetof(MeshDescriptionBase_GetVertexInstanceForTriangleVertex, TriangleID) == 0x000000, "Member 'MeshDescriptionBase_GetVertexInstanceForTriangleVertex::TriangleID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_GetVertexInstanceForTriangleVertex, VertexID) == 0x000004, "Member 'MeshDescriptionBase_GetVertexInstanceForTriangleVertex::VertexID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_GetVertexInstanceForTriangleVertex, ReturnValue) == 0x000008, "Member 'MeshDescriptionBase_GetVertexInstanceForTriangleVertex::ReturnValue' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.GetVertexInstancePairEdge
// 0x000C (0x000C - 0x0000)
struct MeshDescriptionBase_GetVertexInstancePairEdge final
{
public:
	struct FVertexInstanceID                      VertexInstanceID0;                                 // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexInstanceID                      VertexInstanceID1;                                 // 0x0004(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEdgeID                                ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_GetVertexInstancePairEdge) == 0x000004, "Wrong alignment on MeshDescriptionBase_GetVertexInstancePairEdge");
static_assert(sizeof(MeshDescriptionBase_GetVertexInstancePairEdge) == 0x00000C, "Wrong size on MeshDescriptionBase_GetVertexInstancePairEdge");
static_assert(offsetof(MeshDescriptionBase_GetVertexInstancePairEdge, VertexInstanceID0) == 0x000000, "Member 'MeshDescriptionBase_GetVertexInstancePairEdge::VertexInstanceID0' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_GetVertexInstancePairEdge, VertexInstanceID1) == 0x000004, "Member 'MeshDescriptionBase_GetVertexInstancePairEdge::VertexInstanceID1' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_GetVertexInstancePairEdge, ReturnValue) == 0x000008, "Member 'MeshDescriptionBase_GetVertexInstancePairEdge::ReturnValue' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceVertex
// 0x0008 (0x0008 - 0x0000)
struct MeshDescriptionBase_GetVertexInstanceVertex final
{
public:
	struct FVertexInstanceID                      VertexInstanceID;                                  // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexID                              ReturnValue;                                       // 0x0004(0x0004)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_GetVertexInstanceVertex) == 0x000004, "Wrong alignment on MeshDescriptionBase_GetVertexInstanceVertex");
static_assert(sizeof(MeshDescriptionBase_GetVertexInstanceVertex) == 0x000008, "Wrong size on MeshDescriptionBase_GetVertexInstanceVertex");
static_assert(offsetof(MeshDescriptionBase_GetVertexInstanceVertex, VertexInstanceID) == 0x000000, "Member 'MeshDescriptionBase_GetVertexInstanceVertex::VertexInstanceID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_GetVertexInstanceVertex, ReturnValue) == 0x000004, "Member 'MeshDescriptionBase_GetVertexInstanceVertex::ReturnValue' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.GetVertexPairEdge
// 0x000C (0x000C - 0x0000)
struct MeshDescriptionBase_GetVertexPairEdge final
{
public:
	struct FVertexID                              VertexID0;                                         // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexID                              VertexID1;                                         // 0x0004(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEdgeID                                ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_GetVertexPairEdge) == 0x000004, "Wrong alignment on MeshDescriptionBase_GetVertexPairEdge");
static_assert(sizeof(MeshDescriptionBase_GetVertexPairEdge) == 0x00000C, "Wrong size on MeshDescriptionBase_GetVertexPairEdge");
static_assert(offsetof(MeshDescriptionBase_GetVertexPairEdge, VertexID0) == 0x000000, "Member 'MeshDescriptionBase_GetVertexPairEdge::VertexID0' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_GetVertexPairEdge, VertexID1) == 0x000004, "Member 'MeshDescriptionBase_GetVertexPairEdge::VertexID1' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_GetVertexPairEdge, ReturnValue) == 0x000008, "Member 'MeshDescriptionBase_GetVertexPairEdge::ReturnValue' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.GetVertexPosition
// 0x0010 (0x0010 - 0x0000)
struct MeshDescriptionBase_GetVertexPosition final
{
public:
	struct FVertexID                              VertexID;                                          // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                ReturnValue;                                       // 0x0004(0x000C)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_GetVertexPosition) == 0x000004, "Wrong alignment on MeshDescriptionBase_GetVertexPosition");
static_assert(sizeof(MeshDescriptionBase_GetVertexPosition) == 0x000010, "Wrong size on MeshDescriptionBase_GetVertexPosition");
static_assert(offsetof(MeshDescriptionBase_GetVertexPosition, VertexID) == 0x000000, "Member 'MeshDescriptionBase_GetVertexPosition::VertexID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_GetVertexPosition, ReturnValue) == 0x000004, "Member 'MeshDescriptionBase_GetVertexPosition::ReturnValue' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.GetVertexVertexInstances
// 0x0018 (0x0018 - 0x0000)
struct MeshDescriptionBase_GetVertexVertexInstances final
{
public:
	struct FVertexID                              VertexID;                                          // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_418A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVertexInstanceID>              OutVertexInstanceIDs;                              // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_GetVertexVertexInstances) == 0x000008, "Wrong alignment on MeshDescriptionBase_GetVertexVertexInstances");
static_assert(sizeof(MeshDescriptionBase_GetVertexVertexInstances) == 0x000018, "Wrong size on MeshDescriptionBase_GetVertexVertexInstances");
static_assert(offsetof(MeshDescriptionBase_GetVertexVertexInstances, VertexID) == 0x000000, "Member 'MeshDescriptionBase_GetVertexVertexInstances::VertexID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_GetVertexVertexInstances, OutVertexInstanceIDs) == 0x000008, "Member 'MeshDescriptionBase_GetVertexVertexInstances::OutVertexInstanceIDs' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.IsEdgeInternal
// 0x0008 (0x0008 - 0x0000)
struct MeshDescriptionBase_IsEdgeInternal final
{
public:
	struct FEdgeID                                EdgeID;                                            // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_418B[0x3];                                     // 0x0005(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MeshDescriptionBase_IsEdgeInternal) == 0x000004, "Wrong alignment on MeshDescriptionBase_IsEdgeInternal");
static_assert(sizeof(MeshDescriptionBase_IsEdgeInternal) == 0x000008, "Wrong size on MeshDescriptionBase_IsEdgeInternal");
static_assert(offsetof(MeshDescriptionBase_IsEdgeInternal, EdgeID) == 0x000000, "Member 'MeshDescriptionBase_IsEdgeInternal::EdgeID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_IsEdgeInternal, ReturnValue) == 0x000004, "Member 'MeshDescriptionBase_IsEdgeInternal::ReturnValue' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.IsEdgeInternalToPolygon
// 0x000C (0x000C - 0x0000)
struct MeshDescriptionBase_IsEdgeInternalToPolygon final
{
public:
	struct FEdgeID                                EdgeID;                                            // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPolygonID                             PolygonID;                                         // 0x0004(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_418C[0x3];                                     // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MeshDescriptionBase_IsEdgeInternalToPolygon) == 0x000004, "Wrong alignment on MeshDescriptionBase_IsEdgeInternalToPolygon");
static_assert(sizeof(MeshDescriptionBase_IsEdgeInternalToPolygon) == 0x00000C, "Wrong size on MeshDescriptionBase_IsEdgeInternalToPolygon");
static_assert(offsetof(MeshDescriptionBase_IsEdgeInternalToPolygon, EdgeID) == 0x000000, "Member 'MeshDescriptionBase_IsEdgeInternalToPolygon::EdgeID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_IsEdgeInternalToPolygon, PolygonID) == 0x000004, "Member 'MeshDescriptionBase_IsEdgeInternalToPolygon::PolygonID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_IsEdgeInternalToPolygon, ReturnValue) == 0x000008, "Member 'MeshDescriptionBase_IsEdgeInternalToPolygon::ReturnValue' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.IsEdgeValid
// 0x0008 (0x0008 - 0x0000)
struct MeshDescriptionBase_IsEdgeValid final
{
public:
	struct FEdgeID                                EdgeID;                                            // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_418D[0x3];                                     // 0x0005(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MeshDescriptionBase_IsEdgeValid) == 0x000004, "Wrong alignment on MeshDescriptionBase_IsEdgeValid");
static_assert(sizeof(MeshDescriptionBase_IsEdgeValid) == 0x000008, "Wrong size on MeshDescriptionBase_IsEdgeValid");
static_assert(offsetof(MeshDescriptionBase_IsEdgeValid, EdgeID) == 0x000000, "Member 'MeshDescriptionBase_IsEdgeValid::EdgeID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_IsEdgeValid, ReturnValue) == 0x000004, "Member 'MeshDescriptionBase_IsEdgeValid::ReturnValue' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.IsEmpty
// 0x0001 (0x0001 - 0x0000)
struct MeshDescriptionBase_IsEmpty final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MeshDescriptionBase_IsEmpty) == 0x000001, "Wrong alignment on MeshDescriptionBase_IsEmpty");
static_assert(sizeof(MeshDescriptionBase_IsEmpty) == 0x000001, "Wrong size on MeshDescriptionBase_IsEmpty");
static_assert(offsetof(MeshDescriptionBase_IsEmpty, ReturnValue) == 0x000000, "Member 'MeshDescriptionBase_IsEmpty::ReturnValue' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.IsPolygonGroupValid
// 0x0008 (0x0008 - 0x0000)
struct MeshDescriptionBase_IsPolygonGroupValid final
{
public:
	struct FPolygonGroupID                        PolygonGroupID;                                    // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_418E[0x3];                                     // 0x0005(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MeshDescriptionBase_IsPolygonGroupValid) == 0x000004, "Wrong alignment on MeshDescriptionBase_IsPolygonGroupValid");
static_assert(sizeof(MeshDescriptionBase_IsPolygonGroupValid) == 0x000008, "Wrong size on MeshDescriptionBase_IsPolygonGroupValid");
static_assert(offsetof(MeshDescriptionBase_IsPolygonGroupValid, PolygonGroupID) == 0x000000, "Member 'MeshDescriptionBase_IsPolygonGroupValid::PolygonGroupID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_IsPolygonGroupValid, ReturnValue) == 0x000004, "Member 'MeshDescriptionBase_IsPolygonGroupValid::ReturnValue' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.IsPolygonValid
// 0x0008 (0x0008 - 0x0000)
struct MeshDescriptionBase_IsPolygonValid final
{
public:
	struct FPolygonID                             PolygonID;                                         // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_418F[0x3];                                     // 0x0005(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MeshDescriptionBase_IsPolygonValid) == 0x000004, "Wrong alignment on MeshDescriptionBase_IsPolygonValid");
static_assert(sizeof(MeshDescriptionBase_IsPolygonValid) == 0x000008, "Wrong size on MeshDescriptionBase_IsPolygonValid");
static_assert(offsetof(MeshDescriptionBase_IsPolygonValid, PolygonID) == 0x000000, "Member 'MeshDescriptionBase_IsPolygonValid::PolygonID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_IsPolygonValid, ReturnValue) == 0x000004, "Member 'MeshDescriptionBase_IsPolygonValid::ReturnValue' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.IsTrianglePartOfNgon
// 0x0008 (0x0008 - 0x0000)
struct MeshDescriptionBase_IsTrianglePartOfNgon final
{
public:
	struct FTriangleID                            TriangleID;                                        // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4190[0x3];                                     // 0x0005(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MeshDescriptionBase_IsTrianglePartOfNgon) == 0x000004, "Wrong alignment on MeshDescriptionBase_IsTrianglePartOfNgon");
static_assert(sizeof(MeshDescriptionBase_IsTrianglePartOfNgon) == 0x000008, "Wrong size on MeshDescriptionBase_IsTrianglePartOfNgon");
static_assert(offsetof(MeshDescriptionBase_IsTrianglePartOfNgon, TriangleID) == 0x000000, "Member 'MeshDescriptionBase_IsTrianglePartOfNgon::TriangleID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_IsTrianglePartOfNgon, ReturnValue) == 0x000004, "Member 'MeshDescriptionBase_IsTrianglePartOfNgon::ReturnValue' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.IsTriangleValid
// 0x0008 (0x0008 - 0x0000)
struct MeshDescriptionBase_IsTriangleValid final
{
public:
	struct FTriangleID                            TriangleID;                                        // 0x0000(0x0004)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4191[0x3];                                     // 0x0005(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MeshDescriptionBase_IsTriangleValid) == 0x000004, "Wrong alignment on MeshDescriptionBase_IsTriangleValid");
static_assert(sizeof(MeshDescriptionBase_IsTriangleValid) == 0x000008, "Wrong size on MeshDescriptionBase_IsTriangleValid");
static_assert(offsetof(MeshDescriptionBase_IsTriangleValid, TriangleID) == 0x000000, "Member 'MeshDescriptionBase_IsTriangleValid::TriangleID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_IsTriangleValid, ReturnValue) == 0x000004, "Member 'MeshDescriptionBase_IsTriangleValid::ReturnValue' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.IsVertexInstanceValid
// 0x0008 (0x0008 - 0x0000)
struct MeshDescriptionBase_IsVertexInstanceValid final
{
public:
	struct FVertexInstanceID                      VertexInstanceID;                                  // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4192[0x3];                                     // 0x0005(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MeshDescriptionBase_IsVertexInstanceValid) == 0x000004, "Wrong alignment on MeshDescriptionBase_IsVertexInstanceValid");
static_assert(sizeof(MeshDescriptionBase_IsVertexInstanceValid) == 0x000008, "Wrong size on MeshDescriptionBase_IsVertexInstanceValid");
static_assert(offsetof(MeshDescriptionBase_IsVertexInstanceValid, VertexInstanceID) == 0x000000, "Member 'MeshDescriptionBase_IsVertexInstanceValid::VertexInstanceID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_IsVertexInstanceValid, ReturnValue) == 0x000004, "Member 'MeshDescriptionBase_IsVertexInstanceValid::ReturnValue' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.IsVertexOrphaned
// 0x0008 (0x0008 - 0x0000)
struct MeshDescriptionBase_IsVertexOrphaned final
{
public:
	struct FVertexID                              VertexID;                                          // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4193[0x3];                                     // 0x0005(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MeshDescriptionBase_IsVertexOrphaned) == 0x000004, "Wrong alignment on MeshDescriptionBase_IsVertexOrphaned");
static_assert(sizeof(MeshDescriptionBase_IsVertexOrphaned) == 0x000008, "Wrong size on MeshDescriptionBase_IsVertexOrphaned");
static_assert(offsetof(MeshDescriptionBase_IsVertexOrphaned, VertexID) == 0x000000, "Member 'MeshDescriptionBase_IsVertexOrphaned::VertexID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_IsVertexOrphaned, ReturnValue) == 0x000004, "Member 'MeshDescriptionBase_IsVertexOrphaned::ReturnValue' has a wrong offset!");

// Function MeshDescription.MeshDescriptionBase.IsVertexValid
// 0x0008 (0x0008 - 0x0000)
struct MeshDescriptionBase_IsVertexValid final
{
public:
	struct FVertexID                              VertexID;                                          // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4194[0x3];                                     // 0x0005(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MeshDescriptionBase_IsVertexValid) == 0x000004, "Wrong alignment on MeshDescriptionBase_IsVertexValid");
static_assert(sizeof(MeshDescriptionBase_IsVertexValid) == 0x000008, "Wrong size on MeshDescriptionBase_IsVertexValid");
static_assert(offsetof(MeshDescriptionBase_IsVertexValid, VertexID) == 0x000000, "Member 'MeshDescriptionBase_IsVertexValid::VertexID' has a wrong offset!");
static_assert(offsetof(MeshDescriptionBase_IsVertexValid, ReturnValue) == 0x000004, "Member 'MeshDescriptionBase_IsVertexValid::ReturnValue' has a wrong offset!");

}

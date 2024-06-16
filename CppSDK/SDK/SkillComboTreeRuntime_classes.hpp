#pragma once

 

// Package: SkillComboTreeRuntime

#include "Basic.hpp"

#include "SkillComboTreeRuntime_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class SkillComboTreeRuntime.SCTGraph
// 0x0050 (0x0078 - 0x0028)
class USCTGraph final : public UObject
{
public:
	TArray<class USCTGraphNode*>                  RootNodes;                                         // 0x0028(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, NativeAccessSpecifierPublic)
	TArray<class USCTGraphNode*>                  AllNodes;                                          // 0x0038(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, NativeAccessSpecifierPublic)
	TArray<class USCTGraphEdge*>                  AllEdges;                                          // 0x0048(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FSCTComboOnlySkill>             ComboOnlySkills;                                   // 0x0058(0x0010)(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	TArray<class FName>                           ComboOnlySkillNames;                               // 0x0068(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SCTGraph">();
	}
	static class USCTGraph* GetDefaultObj()
	{
		return GetDefaultObjImpl<USCTGraph>();
	}
};
static_assert(alignof(USCTGraph) == 0x000008, "Wrong alignment on USCTGraph");
static_assert(sizeof(USCTGraph) == 0x000078, "Wrong size on USCTGraph");
static_assert(offsetof(USCTGraph, RootNodes) == 0x000028, "Member 'USCTGraph::RootNodes' has a wrong offset!");
static_assert(offsetof(USCTGraph, AllNodes) == 0x000038, "Member 'USCTGraph::AllNodes' has a wrong offset!");
static_assert(offsetof(USCTGraph, AllEdges) == 0x000048, "Member 'USCTGraph::AllEdges' has a wrong offset!");
static_assert(offsetof(USCTGraph, ComboOnlySkills) == 0x000058, "Member 'USCTGraph::ComboOnlySkills' has a wrong offset!");
static_assert(offsetof(USCTGraph, ComboOnlySkillNames) == 0x000068, "Member 'USCTGraph::ComboOnlySkillNames' has a wrong offset!");

// Class SkillComboTreeRuntime.SCTGraphEdge
// 0x0048 (0x0070 - 0x0028)
class USCTGraphEdge final : public UObject
{
public:
	class USCTGraph*                              Graph;                                             // 0x0028(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                           ActivationTags;                                    // 0x0030(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class FName>                           DeactivationTags;                                  // 0x0040(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                          bAbsolute;                                         // 0x0050(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseProbability;                                   // 0x0051(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D08[0x2];                                     // 0x0052(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSCTProbabilityRange                   ProbabilityRange;                                  // 0x0054(0x0008)(Edit, DisableEditOnInstance, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D09[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USCTGraphNode*                          StartNode;                                         // 0x0060(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USCTGraphNode*                          EndNode;                                           // 0x0068(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SCTGraphEdge">();
	}
	static class USCTGraphEdge* GetDefaultObj()
	{
		return GetDefaultObjImpl<USCTGraphEdge>();
	}
};
static_assert(alignof(USCTGraphEdge) == 0x000008, "Wrong alignment on USCTGraphEdge");
static_assert(sizeof(USCTGraphEdge) == 0x000070, "Wrong size on USCTGraphEdge");
static_assert(offsetof(USCTGraphEdge, Graph) == 0x000028, "Member 'USCTGraphEdge::Graph' has a wrong offset!");
static_assert(offsetof(USCTGraphEdge, ActivationTags) == 0x000030, "Member 'USCTGraphEdge::ActivationTags' has a wrong offset!");
static_assert(offsetof(USCTGraphEdge, DeactivationTags) == 0x000040, "Member 'USCTGraphEdge::DeactivationTags' has a wrong offset!");
static_assert(offsetof(USCTGraphEdge, bAbsolute) == 0x000050, "Member 'USCTGraphEdge::bAbsolute' has a wrong offset!");
static_assert(offsetof(USCTGraphEdge, bUseProbability) == 0x000051, "Member 'USCTGraphEdge::bUseProbability' has a wrong offset!");
static_assert(offsetof(USCTGraphEdge, ProbabilityRange) == 0x000054, "Member 'USCTGraphEdge::ProbabilityRange' has a wrong offset!");
static_assert(offsetof(USCTGraphEdge, StartNode) == 0x000060, "Member 'USCTGraphEdge::StartNode' has a wrong offset!");
static_assert(offsetof(USCTGraphEdge, EndNode) == 0x000068, "Member 'USCTGraphEdge::EndNode' has a wrong offset!");

// Class SkillComboTreeRuntime.SCTGraphNode
// 0x00B0 (0x00D8 - 0x0028)
class USCTGraphNode final : public UObject
{
public:
	class USCTGraph*                              Graph;                                             // 0x0028(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USCTGraphNode*>                  ParentNodes;                                       // 0x0030(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class USCTGraphNode*>                  ChildrenNodes;                                     // 0x0040(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class USCTGraphNode*, class USCTGraphEdge*> Edges;                                             // 0x0050(0x0050)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FName                                   NodeTitle;                                         // 0x00A0(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEndPlanning;                                      // 0x00A8(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCheckHitEnd;                                      // 0x00A9(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D0A[0x6];                                     // 0x00AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           BeforeStanceNames;                                 // 0x00B0(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, NativeAccessSpecifierPublic)
	TArray<int32>                                 BeforeStanceIndexes;                               // 0x00C0(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, NativeAccessSpecifierPublic)
	int32                                         AfterStanceIndex;                                  // 0x00D0(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D0B[0x4];                                     // 0x00D4(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SCTGraphNode">();
	}
	static class USCTGraphNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<USCTGraphNode>();
	}
};
static_assert(alignof(USCTGraphNode) == 0x000008, "Wrong alignment on USCTGraphNode");
static_assert(sizeof(USCTGraphNode) == 0x0000D8, "Wrong size on USCTGraphNode");
static_assert(offsetof(USCTGraphNode, Graph) == 0x000028, "Member 'USCTGraphNode::Graph' has a wrong offset!");
static_assert(offsetof(USCTGraphNode, ParentNodes) == 0x000030, "Member 'USCTGraphNode::ParentNodes' has a wrong offset!");
static_assert(offsetof(USCTGraphNode, ChildrenNodes) == 0x000040, "Member 'USCTGraphNode::ChildrenNodes' has a wrong offset!");
static_assert(offsetof(USCTGraphNode, Edges) == 0x000050, "Member 'USCTGraphNode::Edges' has a wrong offset!");
static_assert(offsetof(USCTGraphNode, NodeTitle) == 0x0000A0, "Member 'USCTGraphNode::NodeTitle' has a wrong offset!");
static_assert(offsetof(USCTGraphNode, bEndPlanning) == 0x0000A8, "Member 'USCTGraphNode::bEndPlanning' has a wrong offset!");
static_assert(offsetof(USCTGraphNode, bCheckHitEnd) == 0x0000A9, "Member 'USCTGraphNode::bCheckHitEnd' has a wrong offset!");
static_assert(offsetof(USCTGraphNode, BeforeStanceNames) == 0x0000B0, "Member 'USCTGraphNode::BeforeStanceNames' has a wrong offset!");
static_assert(offsetof(USCTGraphNode, BeforeStanceIndexes) == 0x0000C0, "Member 'USCTGraphNode::BeforeStanceIndexes' has a wrong offset!");
static_assert(offsetof(USCTGraphNode, AfterStanceIndex) == 0x0000D0, "Member 'USCTGraphNode::AfterStanceIndex' has a wrong offset!");

}


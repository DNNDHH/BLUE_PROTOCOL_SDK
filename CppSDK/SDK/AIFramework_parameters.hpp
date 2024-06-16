#pragma once

 

// Package: AIFramework

#include "Basic.hpp"

#include "AIFramework_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "AIModule_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function AIFramework.AIFwBlueprintLibrary.ClothoidInterp
// 0x0030 (0x0030 - 0x0000)
struct AIFwBlueprintLibrary_ClothoidInterp final
{
public:
	struct FVector2D                              StartPosition;                                     // 0x0000(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StartAngle;                                        // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              EndPosition;                                       // 0x000C(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EndAngle;                                          // 0x0014(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIFwClothoidSegment                   ReturnValue;                                       // 0x0018(0x0018)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwBlueprintLibrary_ClothoidInterp) == 0x000004, "Wrong alignment on AIFwBlueprintLibrary_ClothoidInterp");
static_assert(sizeof(AIFwBlueprintLibrary_ClothoidInterp) == 0x000030, "Wrong size on AIFwBlueprintLibrary_ClothoidInterp");
static_assert(offsetof(AIFwBlueprintLibrary_ClothoidInterp, StartPosition) == 0x000000, "Member 'AIFwBlueprintLibrary_ClothoidInterp::StartPosition' has a wrong offset!");
static_assert(offsetof(AIFwBlueprintLibrary_ClothoidInterp, StartAngle) == 0x000008, "Member 'AIFwBlueprintLibrary_ClothoidInterp::StartAngle' has a wrong offset!");
static_assert(offsetof(AIFwBlueprintLibrary_ClothoidInterp, EndPosition) == 0x00000C, "Member 'AIFwBlueprintLibrary_ClothoidInterp::EndPosition' has a wrong offset!");
static_assert(offsetof(AIFwBlueprintLibrary_ClothoidInterp, EndAngle) == 0x000014, "Member 'AIFwBlueprintLibrary_ClothoidInterp::EndAngle' has a wrong offset!");
static_assert(offsetof(AIFwBlueprintLibrary_ClothoidInterp, ReturnValue) == 0x000018, "Member 'AIFwBlueprintLibrary_ClothoidInterp::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwBlueprintLibrary.ClothoidInterpRad
// 0x0030 (0x0030 - 0x0000)
struct AIFwBlueprintLibrary_ClothoidInterpRad final
{
public:
	struct FVector2D                              StartPosition;                                     // 0x0000(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StartAngle;                                        // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              EndPosition;                                       // 0x000C(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EndAngle;                                          // 0x0014(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIFwClothoidSegment                   ReturnValue;                                       // 0x0018(0x0018)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwBlueprintLibrary_ClothoidInterpRad) == 0x000004, "Wrong alignment on AIFwBlueprintLibrary_ClothoidInterpRad");
static_assert(sizeof(AIFwBlueprintLibrary_ClothoidInterpRad) == 0x000030, "Wrong size on AIFwBlueprintLibrary_ClothoidInterpRad");
static_assert(offsetof(AIFwBlueprintLibrary_ClothoidInterpRad, StartPosition) == 0x000000, "Member 'AIFwBlueprintLibrary_ClothoidInterpRad::StartPosition' has a wrong offset!");
static_assert(offsetof(AIFwBlueprintLibrary_ClothoidInterpRad, StartAngle) == 0x000008, "Member 'AIFwBlueprintLibrary_ClothoidInterpRad::StartAngle' has a wrong offset!");
static_assert(offsetof(AIFwBlueprintLibrary_ClothoidInterpRad, EndPosition) == 0x00000C, "Member 'AIFwBlueprintLibrary_ClothoidInterpRad::EndPosition' has a wrong offset!");
static_assert(offsetof(AIFwBlueprintLibrary_ClothoidInterpRad, EndAngle) == 0x000014, "Member 'AIFwBlueprintLibrary_ClothoidInterpRad::EndAngle' has a wrong offset!");
static_assert(offsetof(AIFwBlueprintLibrary_ClothoidInterpRad, ReturnValue) == 0x000018, "Member 'AIFwBlueprintLibrary_ClothoidInterpRad::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwBlueprintLibrary.GetAIDirector
// 0x0010 (0x0010 - 0x0000)
struct AIFwBlueprintLibrary_GetAIDirector final
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AAIFwAIDirector*                        ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwBlueprintLibrary_GetAIDirector) == 0x000008, "Wrong alignment on AIFwBlueprintLibrary_GetAIDirector");
static_assert(sizeof(AIFwBlueprintLibrary_GetAIDirector) == 0x000010, "Wrong size on AIFwBlueprintLibrary_GetAIDirector");
static_assert(offsetof(AIFwBlueprintLibrary_GetAIDirector, WorldContextObject) == 0x000000, "Member 'AIFwBlueprintLibrary_GetAIDirector::WorldContextObject' has a wrong offset!");
static_assert(offsetof(AIFwBlueprintLibrary_GetAIDirector, ReturnValue) == 0x000008, "Member 'AIFwBlueprintLibrary_GetAIDirector::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwBlueprintLibrary.GetAIFwBlackboard
// 0x0010 (0x0010 - 0x0000)
struct AIFwBlueprintLibrary_GetAIFwBlackboard final
{
public:
	class AActor*                                 Target;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAIFwBlackboardComponent*               ReturnValue;                                       // 0x0008(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwBlueprintLibrary_GetAIFwBlackboard) == 0x000008, "Wrong alignment on AIFwBlueprintLibrary_GetAIFwBlackboard");
static_assert(sizeof(AIFwBlueprintLibrary_GetAIFwBlackboard) == 0x000010, "Wrong size on AIFwBlueprintLibrary_GetAIFwBlackboard");
static_assert(offsetof(AIFwBlueprintLibrary_GetAIFwBlackboard, Target) == 0x000000, "Member 'AIFwBlueprintLibrary_GetAIFwBlackboard::Target' has a wrong offset!");
static_assert(offsetof(AIFwBlueprintLibrary_GetAIFwBlackboard, ReturnValue) == 0x000008, "Member 'AIFwBlueprintLibrary_GetAIFwBlackboard::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwBlueprintLibrary.GetClothoidLocationAtTime
// 0x0024 (0x0024 - 0x0000)
struct AIFwBlueprintLibrary_GetClothoidLocationAtTime final
{
public:
	struct FAIFwClothoidSegment                   Segment;                                           // 0x0000(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                         Time;                                              // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              ReturnValue;                                       // 0x001C(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwBlueprintLibrary_GetClothoidLocationAtTime) == 0x000004, "Wrong alignment on AIFwBlueprintLibrary_GetClothoidLocationAtTime");
static_assert(sizeof(AIFwBlueprintLibrary_GetClothoidLocationAtTime) == 0x000024, "Wrong size on AIFwBlueprintLibrary_GetClothoidLocationAtTime");
static_assert(offsetof(AIFwBlueprintLibrary_GetClothoidLocationAtTime, Segment) == 0x000000, "Member 'AIFwBlueprintLibrary_GetClothoidLocationAtTime::Segment' has a wrong offset!");
static_assert(offsetof(AIFwBlueprintLibrary_GetClothoidLocationAtTime, Time) == 0x000018, "Member 'AIFwBlueprintLibrary_GetClothoidLocationAtTime::Time' has a wrong offset!");
static_assert(offsetof(AIFwBlueprintLibrary_GetClothoidLocationAtTime, ReturnValue) == 0x00001C, "Member 'AIFwBlueprintLibrary_GetClothoidLocationAtTime::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwBlueprintLibrary.GetFactionRelation
// 0x0018 (0x0018 - 0x0000)
struct AIFwBlueprintLibrary_GetFactionRelation final
{
public:
	class AActor*                                 From;                                              // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 To;                                                // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReturnValue;                                       // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A4F[0x4];                                     // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AIFwBlueprintLibrary_GetFactionRelation) == 0x000008, "Wrong alignment on AIFwBlueprintLibrary_GetFactionRelation");
static_assert(sizeof(AIFwBlueprintLibrary_GetFactionRelation) == 0x000018, "Wrong size on AIFwBlueprintLibrary_GetFactionRelation");
static_assert(offsetof(AIFwBlueprintLibrary_GetFactionRelation, From) == 0x000000, "Member 'AIFwBlueprintLibrary_GetFactionRelation::From' has a wrong offset!");
static_assert(offsetof(AIFwBlueprintLibrary_GetFactionRelation, To) == 0x000008, "Member 'AIFwBlueprintLibrary_GetFactionRelation::To' has a wrong offset!");
static_assert(offsetof(AIFwBlueprintLibrary_GetFactionRelation, ReturnValue) == 0x000010, "Member 'AIFwBlueprintLibrary_GetFactionRelation::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwBlueprintLibrary.GetMultipleClothoidLocationAtTime
// 0x0044 (0x0044 - 0x0000)
struct AIFwBlueprintLibrary_GetMultipleClothoidLocationAtTime final
{
public:
	struct FAIFwMultipleClothoidSegment           Segment;                                           // 0x0000(0x0038)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                         Time;                                              // 0x0038(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              ReturnValue;                                       // 0x003C(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwBlueprintLibrary_GetMultipleClothoidLocationAtTime) == 0x000004, "Wrong alignment on AIFwBlueprintLibrary_GetMultipleClothoidLocationAtTime");
static_assert(sizeof(AIFwBlueprintLibrary_GetMultipleClothoidLocationAtTime) == 0x000044, "Wrong size on AIFwBlueprintLibrary_GetMultipleClothoidLocationAtTime");
static_assert(offsetof(AIFwBlueprintLibrary_GetMultipleClothoidLocationAtTime, Segment) == 0x000000, "Member 'AIFwBlueprintLibrary_GetMultipleClothoidLocationAtTime::Segment' has a wrong offset!");
static_assert(offsetof(AIFwBlueprintLibrary_GetMultipleClothoidLocationAtTime, Time) == 0x000038, "Member 'AIFwBlueprintLibrary_GetMultipleClothoidLocationAtTime::Time' has a wrong offset!");
static_assert(offsetof(AIFwBlueprintLibrary_GetMultipleClothoidLocationAtTime, ReturnValue) == 0x00003C, "Member 'AIFwBlueprintLibrary_GetMultipleClothoidLocationAtTime::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwBlueprintLibrary.Hash32
// 0x0018 (0x0018 - 0x0000)
struct AIFwBlueprintLibrary_Hash32 final
{
public:
	class FString                                 String;                                            // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A50[0x4];                                     // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AIFwBlueprintLibrary_Hash32) == 0x000008, "Wrong alignment on AIFwBlueprintLibrary_Hash32");
static_assert(sizeof(AIFwBlueprintLibrary_Hash32) == 0x000018, "Wrong size on AIFwBlueprintLibrary_Hash32");
static_assert(offsetof(AIFwBlueprintLibrary_Hash32, String) == 0x000000, "Member 'AIFwBlueprintLibrary_Hash32::String' has a wrong offset!");
static_assert(offsetof(AIFwBlueprintLibrary_Hash32, ReturnValue) == 0x000010, "Member 'AIFwBlueprintLibrary_Hash32::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwBlueprintLibrary.MultipleClothoidInterp
// 0x0058 (0x0058 - 0x0000)
struct AIFwBlueprintLibrary_MultipleClothoidInterp final
{
public:
	struct FVector2D                              StartPosition;                                     // 0x0000(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StartAngle;                                        // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StartCurvature;                                    // 0x000C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              EndPosition;                                       // 0x0010(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EndAngle;                                          // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EndCurvature;                                      // 0x001C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIFwMultipleClothoidSegment           ReturnValue;                                       // 0x0020(0x0038)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwBlueprintLibrary_MultipleClothoidInterp) == 0x000004, "Wrong alignment on AIFwBlueprintLibrary_MultipleClothoidInterp");
static_assert(sizeof(AIFwBlueprintLibrary_MultipleClothoidInterp) == 0x000058, "Wrong size on AIFwBlueprintLibrary_MultipleClothoidInterp");
static_assert(offsetof(AIFwBlueprintLibrary_MultipleClothoidInterp, StartPosition) == 0x000000, "Member 'AIFwBlueprintLibrary_MultipleClothoidInterp::StartPosition' has a wrong offset!");
static_assert(offsetof(AIFwBlueprintLibrary_MultipleClothoidInterp, StartAngle) == 0x000008, "Member 'AIFwBlueprintLibrary_MultipleClothoidInterp::StartAngle' has a wrong offset!");
static_assert(offsetof(AIFwBlueprintLibrary_MultipleClothoidInterp, StartCurvature) == 0x00000C, "Member 'AIFwBlueprintLibrary_MultipleClothoidInterp::StartCurvature' has a wrong offset!");
static_assert(offsetof(AIFwBlueprintLibrary_MultipleClothoidInterp, EndPosition) == 0x000010, "Member 'AIFwBlueprintLibrary_MultipleClothoidInterp::EndPosition' has a wrong offset!");
static_assert(offsetof(AIFwBlueprintLibrary_MultipleClothoidInterp, EndAngle) == 0x000018, "Member 'AIFwBlueprintLibrary_MultipleClothoidInterp::EndAngle' has a wrong offset!");
static_assert(offsetof(AIFwBlueprintLibrary_MultipleClothoidInterp, EndCurvature) == 0x00001C, "Member 'AIFwBlueprintLibrary_MultipleClothoidInterp::EndCurvature' has a wrong offset!");
static_assert(offsetof(AIFwBlueprintLibrary_MultipleClothoidInterp, ReturnValue) == 0x000020, "Member 'AIFwBlueprintLibrary_MultipleClothoidInterp::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwBlueprintLibrary.MultipleClothoidInterpRad
// 0x0058 (0x0058 - 0x0000)
struct AIFwBlueprintLibrary_MultipleClothoidInterpRad final
{
public:
	struct FVector2D                              StartPosition;                                     // 0x0000(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StartAngle;                                        // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StartCurvature;                                    // 0x000C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              EndPosition;                                       // 0x0010(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EndAngle;                                          // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EndCurvature;                                      // 0x001C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIFwMultipleClothoidSegment           ReturnValue;                                       // 0x0020(0x0038)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwBlueprintLibrary_MultipleClothoidInterpRad) == 0x000004, "Wrong alignment on AIFwBlueprintLibrary_MultipleClothoidInterpRad");
static_assert(sizeof(AIFwBlueprintLibrary_MultipleClothoidInterpRad) == 0x000058, "Wrong size on AIFwBlueprintLibrary_MultipleClothoidInterpRad");
static_assert(offsetof(AIFwBlueprintLibrary_MultipleClothoidInterpRad, StartPosition) == 0x000000, "Member 'AIFwBlueprintLibrary_MultipleClothoidInterpRad::StartPosition' has a wrong offset!");
static_assert(offsetof(AIFwBlueprintLibrary_MultipleClothoidInterpRad, StartAngle) == 0x000008, "Member 'AIFwBlueprintLibrary_MultipleClothoidInterpRad::StartAngle' has a wrong offset!");
static_assert(offsetof(AIFwBlueprintLibrary_MultipleClothoidInterpRad, StartCurvature) == 0x00000C, "Member 'AIFwBlueprintLibrary_MultipleClothoidInterpRad::StartCurvature' has a wrong offset!");
static_assert(offsetof(AIFwBlueprintLibrary_MultipleClothoidInterpRad, EndPosition) == 0x000010, "Member 'AIFwBlueprintLibrary_MultipleClothoidInterpRad::EndPosition' has a wrong offset!");
static_assert(offsetof(AIFwBlueprintLibrary_MultipleClothoidInterpRad, EndAngle) == 0x000018, "Member 'AIFwBlueprintLibrary_MultipleClothoidInterpRad::EndAngle' has a wrong offset!");
static_assert(offsetof(AIFwBlueprintLibrary_MultipleClothoidInterpRad, EndCurvature) == 0x00001C, "Member 'AIFwBlueprintLibrary_MultipleClothoidInterpRad::EndCurvature' has a wrong offset!");
static_assert(offsetof(AIFwBlueprintLibrary_MultipleClothoidInterpRad, ReturnValue) == 0x000020, "Member 'AIFwBlueprintLibrary_MultipleClothoidInterpRad::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwBlueprintLibrary.RunAIFwBehaviorTree
// 0x0018 (0x0018 - 0x0000)
struct AIFwBlueprintLibrary_RunAIFwBehaviorTree final
{
public:
	class AActor*                                 Target;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAIFwBehaviorTree*                      BehaviorTree;                                      // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bLooping;                                          // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0011(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A51[0x6];                                     // 0x0012(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AIFwBlueprintLibrary_RunAIFwBehaviorTree) == 0x000008, "Wrong alignment on AIFwBlueprintLibrary_RunAIFwBehaviorTree");
static_assert(sizeof(AIFwBlueprintLibrary_RunAIFwBehaviorTree) == 0x000018, "Wrong size on AIFwBlueprintLibrary_RunAIFwBehaviorTree");
static_assert(offsetof(AIFwBlueprintLibrary_RunAIFwBehaviorTree, Target) == 0x000000, "Member 'AIFwBlueprintLibrary_RunAIFwBehaviorTree::Target' has a wrong offset!");
static_assert(offsetof(AIFwBlueprintLibrary_RunAIFwBehaviorTree, BehaviorTree) == 0x000008, "Member 'AIFwBlueprintLibrary_RunAIFwBehaviorTree::BehaviorTree' has a wrong offset!");
static_assert(offsetof(AIFwBlueprintLibrary_RunAIFwBehaviorTree, bLooping) == 0x000010, "Member 'AIFwBlueprintLibrary_RunAIFwBehaviorTree::bLooping' has a wrong offset!");
static_assert(offsetof(AIFwBlueprintLibrary_RunAIFwBehaviorTree, ReturnValue) == 0x000011, "Member 'AIFwBlueprintLibrary_RunAIFwBehaviorTree::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwAIDirector.ReceiveOnActorSpawned
// 0x0008 (0x0008 - 0x0000)
struct AIFwAIDirector_ReceiveOnActorSpawned final
{
public:
	class AActor*                                 SpawnedActor;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwAIDirector_ReceiveOnActorSpawned) == 0x000008, "Wrong alignment on AIFwAIDirector_ReceiveOnActorSpawned");
static_assert(sizeof(AIFwAIDirector_ReceiveOnActorSpawned) == 0x000008, "Wrong size on AIFwAIDirector_ReceiveOnActorSpawned");
static_assert(offsetof(AIFwAIDirector_ReceiveOnActorSpawned, SpawnedActor) == 0x000000, "Member 'AIFwAIDirector_ReceiveOnActorSpawned::SpawnedActor' has a wrong offset!");

// Function AIFramework.AIFwPerceptionComponent.SetSenseEnabled
// 0x0018 (0x0018 - 0x0000)
struct AIFwPerceptionComponent_SetSenseEnabled final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnabled;                                          // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A56[0x7];                                     // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AIFwPerceptionComponent_SetSenseEnabled) == 0x000008, "Wrong alignment on AIFwPerceptionComponent_SetSenseEnabled");
static_assert(sizeof(AIFwPerceptionComponent_SetSenseEnabled) == 0x000018, "Wrong size on AIFwPerceptionComponent_SetSenseEnabled");
static_assert(offsetof(AIFwPerceptionComponent_SetSenseEnabled, Tag) == 0x000000, "Member 'AIFwPerceptionComponent_SetSenseEnabled::Tag' has a wrong offset!");
static_assert(offsetof(AIFwPerceptionComponent_SetSenseEnabled, bEnabled) == 0x000010, "Member 'AIFwPerceptionComponent_SetSenseEnabled::bEnabled' has a wrong offset!");

// Function AIFramework.AIFwPerceptionComponent.GetSensedActors
// 0x0020 (0x0020 - 0x0000)
struct AIFwPerceptionComponent_GetSensedActors final
{
public:
	class FString                                 Tag;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                         ReturnValue;                                       // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwPerceptionComponent_GetSensedActors) == 0x000008, "Wrong alignment on AIFwPerceptionComponent_GetSensedActors");
static_assert(sizeof(AIFwPerceptionComponent_GetSensedActors) == 0x000020, "Wrong size on AIFwPerceptionComponent_GetSensedActors");
static_assert(offsetof(AIFwPerceptionComponent_GetSensedActors, Tag) == 0x000000, "Member 'AIFwPerceptionComponent_GetSensedActors::Tag' has a wrong offset!");
static_assert(offsetof(AIFwPerceptionComponent_GetSensedActors, ReturnValue) == 0x000010, "Member 'AIFwPerceptionComponent_GetSensedActors::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwPerceptionComponent.GetSensedActorsCount
// 0x0004 (0x0004 - 0x0000)
struct AIFwPerceptionComponent_GetSensedActorsCount final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwPerceptionComponent_GetSensedActorsCount) == 0x000004, "Wrong alignment on AIFwPerceptionComponent_GetSensedActorsCount");
static_assert(sizeof(AIFwPerceptionComponent_GetSensedActorsCount) == 0x000004, "Wrong size on AIFwPerceptionComponent_GetSensedActorsCount");
static_assert(offsetof(AIFwPerceptionComponent_GetSensedActorsCount, ReturnValue) == 0x000000, "Member 'AIFwPerceptionComponent_GetSensedActorsCount::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwPerceptionTreeInstanceBlueprintWrapper.RunInstantParameterizedPerceptionTree
// 0x0030 (0x0030 - 0x0000)
struct AIFwPerceptionTreeInstanceBlueprintWrapper_RunInstantParameterizedPerceptionTree final
{
public:
	class AActor*                                 Target;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIFwParameterizedBTRequest            Query;                                             // 0x0008(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                         MaxCount;                                          // 0x0020(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A59[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAIFwPerceptionTreeInstanceBlueprintWrapper* ReturnValue;                                       // 0x0028(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwPerceptionTreeInstanceBlueprintWrapper_RunInstantParameterizedPerceptionTree) == 0x000008, "Wrong alignment on AIFwPerceptionTreeInstanceBlueprintWrapper_RunInstantParameterizedPerceptionTree");
static_assert(sizeof(AIFwPerceptionTreeInstanceBlueprintWrapper_RunInstantParameterizedPerceptionTree) == 0x000030, "Wrong size on AIFwPerceptionTreeInstanceBlueprintWrapper_RunInstantParameterizedPerceptionTree");
static_assert(offsetof(AIFwPerceptionTreeInstanceBlueprintWrapper_RunInstantParameterizedPerceptionTree, Target) == 0x000000, "Member 'AIFwPerceptionTreeInstanceBlueprintWrapper_RunInstantParameterizedPerceptionTree::Target' has a wrong offset!");
static_assert(offsetof(AIFwPerceptionTreeInstanceBlueprintWrapper_RunInstantParameterizedPerceptionTree, Query) == 0x000008, "Member 'AIFwPerceptionTreeInstanceBlueprintWrapper_RunInstantParameterizedPerceptionTree::Query' has a wrong offset!");
static_assert(offsetof(AIFwPerceptionTreeInstanceBlueprintWrapper_RunInstantParameterizedPerceptionTree, MaxCount) == 0x000020, "Member 'AIFwPerceptionTreeInstanceBlueprintWrapper_RunInstantParameterizedPerceptionTree::MaxCount' has a wrong offset!");
static_assert(offsetof(AIFwPerceptionTreeInstanceBlueprintWrapper_RunInstantParameterizedPerceptionTree, ReturnValue) == 0x000028, "Member 'AIFwPerceptionTreeInstanceBlueprintWrapper_RunInstantParameterizedPerceptionTree::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwPerceptionTreeInstanceBlueprintWrapper.RunInstantParameterizedPerceptionTreeRandom
// 0x0030 (0x0030 - 0x0000)
struct AIFwPerceptionTreeInstanceBlueprintWrapper_RunInstantParameterizedPerceptionTreeRandom final
{
public:
	class AActor*                                 Target;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIFwParameterizedBTRequest            Query;                                             // 0x0008(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                         MaxCount;                                          // 0x0020(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A5A[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAIFwPerceptionTreeInstanceBlueprintWrapper* ReturnValue;                                       // 0x0028(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwPerceptionTreeInstanceBlueprintWrapper_RunInstantParameterizedPerceptionTreeRandom) == 0x000008, "Wrong alignment on AIFwPerceptionTreeInstanceBlueprintWrapper_RunInstantParameterizedPerceptionTreeRandom");
static_assert(sizeof(AIFwPerceptionTreeInstanceBlueprintWrapper_RunInstantParameterizedPerceptionTreeRandom) == 0x000030, "Wrong size on AIFwPerceptionTreeInstanceBlueprintWrapper_RunInstantParameterizedPerceptionTreeRandom");
static_assert(offsetof(AIFwPerceptionTreeInstanceBlueprintWrapper_RunInstantParameterizedPerceptionTreeRandom, Target) == 0x000000, "Member 'AIFwPerceptionTreeInstanceBlueprintWrapper_RunInstantParameterizedPerceptionTreeRandom::Target' has a wrong offset!");
static_assert(offsetof(AIFwPerceptionTreeInstanceBlueprintWrapper_RunInstantParameterizedPerceptionTreeRandom, Query) == 0x000008, "Member 'AIFwPerceptionTreeInstanceBlueprintWrapper_RunInstantParameterizedPerceptionTreeRandom::Query' has a wrong offset!");
static_assert(offsetof(AIFwPerceptionTreeInstanceBlueprintWrapper_RunInstantParameterizedPerceptionTreeRandom, MaxCount) == 0x000020, "Member 'AIFwPerceptionTreeInstanceBlueprintWrapper_RunInstantParameterizedPerceptionTreeRandom::MaxCount' has a wrong offset!");
static_assert(offsetof(AIFwPerceptionTreeInstanceBlueprintWrapper_RunInstantParameterizedPerceptionTreeRandom, ReturnValue) == 0x000028, "Member 'AIFwPerceptionTreeInstanceBlueprintWrapper_RunInstantParameterizedPerceptionTreeRandom::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwPerceptionTreeInstanceBlueprintWrapper.RunInstantPerceptionTree
// 0x0018 (0x0018 - 0x0000)
struct AIFwPerceptionTreeInstanceBlueprintWrapper_RunInstantPerceptionTree final
{
public:
	class AActor*                                 Target;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAIFwBehaviorTree*                      Template;                                          // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAIFwPerceptionTreeInstanceBlueprintWrapper* ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwPerceptionTreeInstanceBlueprintWrapper_RunInstantPerceptionTree) == 0x000008, "Wrong alignment on AIFwPerceptionTreeInstanceBlueprintWrapper_RunInstantPerceptionTree");
static_assert(sizeof(AIFwPerceptionTreeInstanceBlueprintWrapper_RunInstantPerceptionTree) == 0x000018, "Wrong size on AIFwPerceptionTreeInstanceBlueprintWrapper_RunInstantPerceptionTree");
static_assert(offsetof(AIFwPerceptionTreeInstanceBlueprintWrapper_RunInstantPerceptionTree, Target) == 0x000000, "Member 'AIFwPerceptionTreeInstanceBlueprintWrapper_RunInstantPerceptionTree::Target' has a wrong offset!");
static_assert(offsetof(AIFwPerceptionTreeInstanceBlueprintWrapper_RunInstantPerceptionTree, Template) == 0x000008, "Member 'AIFwPerceptionTreeInstanceBlueprintWrapper_RunInstantPerceptionTree::Template' has a wrong offset!");
static_assert(offsetof(AIFwPerceptionTreeInstanceBlueprintWrapper_RunInstantPerceptionTree, ReturnValue) == 0x000010, "Member 'AIFwPerceptionTreeInstanceBlueprintWrapper_RunInstantPerceptionTree::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwPerceptionTreeInstanceBlueprintWrapper.RunPerceptionTree
// 0x0018 (0x0018 - 0x0000)
struct AIFwPerceptionTreeInstanceBlueprintWrapper_RunPerceptionTree final
{
public:
	class AActor*                                 Target;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAIFwBehaviorTree*                      Template;                                          // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAIFwPerceptionTreeInstanceBlueprintWrapper* ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwPerceptionTreeInstanceBlueprintWrapper_RunPerceptionTree) == 0x000008, "Wrong alignment on AIFwPerceptionTreeInstanceBlueprintWrapper_RunPerceptionTree");
static_assert(sizeof(AIFwPerceptionTreeInstanceBlueprintWrapper_RunPerceptionTree) == 0x000018, "Wrong size on AIFwPerceptionTreeInstanceBlueprintWrapper_RunPerceptionTree");
static_assert(offsetof(AIFwPerceptionTreeInstanceBlueprintWrapper_RunPerceptionTree, Target) == 0x000000, "Member 'AIFwPerceptionTreeInstanceBlueprintWrapper_RunPerceptionTree::Target' has a wrong offset!");
static_assert(offsetof(AIFwPerceptionTreeInstanceBlueprintWrapper_RunPerceptionTree, Template) == 0x000008, "Member 'AIFwPerceptionTreeInstanceBlueprintWrapper_RunPerceptionTree::Template' has a wrong offset!");
static_assert(offsetof(AIFwPerceptionTreeInstanceBlueprintWrapper_RunPerceptionTree, ReturnValue) == 0x000010, "Member 'AIFwPerceptionTreeInstanceBlueprintWrapper_RunPerceptionTree::ReturnValue' has a wrong offset!");

// DelegateFunction AIFramework.AIFwPerceptionTreeInstanceBlueprintWrapper.AIFwOnPerceptionTreeFinishedWrapper__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct AIFwPerceptionTreeInstanceBlueprintWrapper_AIFwOnPerceptionTreeFinishedWrapper__DelegateSignature final
{
public:
	class UAIFwPerceptionTreeInstanceBlueprintWrapper* QueryInstance;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwPerceptionTreeInstanceBlueprintWrapper_AIFwOnPerceptionTreeFinishedWrapper__DelegateSignature) == 0x000008, "Wrong alignment on AIFwPerceptionTreeInstanceBlueprintWrapper_AIFwOnPerceptionTreeFinishedWrapper__DelegateSignature");
static_assert(sizeof(AIFwPerceptionTreeInstanceBlueprintWrapper_AIFwOnPerceptionTreeFinishedWrapper__DelegateSignature) == 0x000008, "Wrong size on AIFwPerceptionTreeInstanceBlueprintWrapper_AIFwOnPerceptionTreeFinishedWrapper__DelegateSignature");
static_assert(offsetof(AIFwPerceptionTreeInstanceBlueprintWrapper_AIFwOnPerceptionTreeFinishedWrapper__DelegateSignature, QueryInstance) == 0x000000, "Member 'AIFwPerceptionTreeInstanceBlueprintWrapper_AIFwOnPerceptionTreeFinishedWrapper__DelegateSignature::QueryInstance' has a wrong offset!");

// Function AIFramework.AIFwPerceptionTreeInstanceBlueprintWrapper.GetResultCount
// 0x0004 (0x0004 - 0x0000)
struct AIFwPerceptionTreeInstanceBlueprintWrapper_GetResultCount final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwPerceptionTreeInstanceBlueprintWrapper_GetResultCount) == 0x000004, "Wrong alignment on AIFwPerceptionTreeInstanceBlueprintWrapper_GetResultCount");
static_assert(sizeof(AIFwPerceptionTreeInstanceBlueprintWrapper_GetResultCount) == 0x000004, "Wrong size on AIFwPerceptionTreeInstanceBlueprintWrapper_GetResultCount");
static_assert(offsetof(AIFwPerceptionTreeInstanceBlueprintWrapper_GetResultCount, ReturnValue) == 0x000000, "Member 'AIFwPerceptionTreeInstanceBlueprintWrapper_GetResultCount::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwPerceptionTreeInstanceBlueprintWrapper.GetResultsAsActors
// 0x0010 (0x0010 - 0x0000)
struct AIFwPerceptionTreeInstanceBlueprintWrapper_GetResultsAsActors final
{
public:
	TArray<class AActor*>                         ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwPerceptionTreeInstanceBlueprintWrapper_GetResultsAsActors) == 0x000008, "Wrong alignment on AIFwPerceptionTreeInstanceBlueprintWrapper_GetResultsAsActors");
static_assert(sizeof(AIFwPerceptionTreeInstanceBlueprintWrapper_GetResultsAsActors) == 0x000010, "Wrong size on AIFwPerceptionTreeInstanceBlueprintWrapper_GetResultsAsActors");
static_assert(offsetof(AIFwPerceptionTreeInstanceBlueprintWrapper_GetResultsAsActors, ReturnValue) == 0x000000, "Member 'AIFwPerceptionTreeInstanceBlueprintWrapper_GetResultsAsActors::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwPerceptionTreeInstanceBlueprintWrapper.GetResultsAsLocations
// 0x0010 (0x0010 - 0x0000)
struct AIFwPerceptionTreeInstanceBlueprintWrapper_GetResultsAsLocations final
{
public:
	TArray<struct FVector>                        ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwPerceptionTreeInstanceBlueprintWrapper_GetResultsAsLocations) == 0x000008, "Wrong alignment on AIFwPerceptionTreeInstanceBlueprintWrapper_GetResultsAsLocations");
static_assert(sizeof(AIFwPerceptionTreeInstanceBlueprintWrapper_GetResultsAsLocations) == 0x000010, "Wrong size on AIFwPerceptionTreeInstanceBlueprintWrapper_GetResultsAsLocations");
static_assert(offsetof(AIFwPerceptionTreeInstanceBlueprintWrapper_GetResultsAsLocations, ReturnValue) == 0x000000, "Member 'AIFwPerceptionTreeInstanceBlueprintWrapper_GetResultsAsLocations::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwBlackboardBlueprintLibrary.ClearValue
// 0x0028 (0x0028 - 0x0000)
struct AIFwBlackboardBlueprintLibrary_ClearValue final
{
public:
	struct FAIFwBlackboard                        Blackboard;                                        // 0x0000(0x0018)(Parm, OutParm, NativeAccessSpecifierPublic)
	class FString                                 KeyName;                                           // 0x0018(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwBlackboardBlueprintLibrary_ClearValue) == 0x000008, "Wrong alignment on AIFwBlackboardBlueprintLibrary_ClearValue");
static_assert(sizeof(AIFwBlackboardBlueprintLibrary_ClearValue) == 0x000028, "Wrong size on AIFwBlackboardBlueprintLibrary_ClearValue");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_ClearValue, Blackboard) == 0x000000, "Member 'AIFwBlackboardBlueprintLibrary_ClearValue::Blackboard' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_ClearValue, KeyName) == 0x000018, "Member 'AIFwBlackboardBlueprintLibrary_ClearValue::KeyName' has a wrong offset!");

// Function AIFramework.AIFwBlackboardBlueprintLibrary.GetValueAsBool
// 0x0030 (0x0030 - 0x0000)
struct AIFwBlackboardBlueprintLibrary_GetValueAsBool final
{
public:
	struct FAIFwBlackboard                        Blackboard;                                        // 0x0000(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                 KeyName;                                           // 0x0018(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0028(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A5B[0x7];                                     // 0x0029(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AIFwBlackboardBlueprintLibrary_GetValueAsBool) == 0x000008, "Wrong alignment on AIFwBlackboardBlueprintLibrary_GetValueAsBool");
static_assert(sizeof(AIFwBlackboardBlueprintLibrary_GetValueAsBool) == 0x000030, "Wrong size on AIFwBlackboardBlueprintLibrary_GetValueAsBool");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_GetValueAsBool, Blackboard) == 0x000000, "Member 'AIFwBlackboardBlueprintLibrary_GetValueAsBool::Blackboard' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_GetValueAsBool, KeyName) == 0x000018, "Member 'AIFwBlackboardBlueprintLibrary_GetValueAsBool::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_GetValueAsBool, ReturnValue) == 0x000028, "Member 'AIFwBlackboardBlueprintLibrary_GetValueAsBool::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwBlackboardBlueprintLibrary.GetValueAsClass
// 0x0030 (0x0030 - 0x0000)
struct AIFwBlackboardBlueprintLibrary_GetValueAsClass final
{
public:
	struct FAIFwBlackboard                        Blackboard;                                        // 0x0000(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                 KeyName;                                           // 0x0018(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                 ReturnValue;                                       // 0x0028(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwBlackboardBlueprintLibrary_GetValueAsClass) == 0x000008, "Wrong alignment on AIFwBlackboardBlueprintLibrary_GetValueAsClass");
static_assert(sizeof(AIFwBlackboardBlueprintLibrary_GetValueAsClass) == 0x000030, "Wrong size on AIFwBlackboardBlueprintLibrary_GetValueAsClass");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_GetValueAsClass, Blackboard) == 0x000000, "Member 'AIFwBlackboardBlueprintLibrary_GetValueAsClass::Blackboard' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_GetValueAsClass, KeyName) == 0x000018, "Member 'AIFwBlackboardBlueprintLibrary_GetValueAsClass::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_GetValueAsClass, ReturnValue) == 0x000028, "Member 'AIFwBlackboardBlueprintLibrary_GetValueAsClass::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwBlackboardBlueprintLibrary.GetValueAsFloat
// 0x0030 (0x0030 - 0x0000)
struct AIFwBlackboardBlueprintLibrary_GetValueAsFloat final
{
public:
	struct FAIFwBlackboard                        Blackboard;                                        // 0x0000(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                 KeyName;                                           // 0x0018(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReturnValue;                                       // 0x0028(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A5C[0x4];                                     // 0x002C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AIFwBlackboardBlueprintLibrary_GetValueAsFloat) == 0x000008, "Wrong alignment on AIFwBlackboardBlueprintLibrary_GetValueAsFloat");
static_assert(sizeof(AIFwBlackboardBlueprintLibrary_GetValueAsFloat) == 0x000030, "Wrong size on AIFwBlackboardBlueprintLibrary_GetValueAsFloat");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_GetValueAsFloat, Blackboard) == 0x000000, "Member 'AIFwBlackboardBlueprintLibrary_GetValueAsFloat::Blackboard' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_GetValueAsFloat, KeyName) == 0x000018, "Member 'AIFwBlackboardBlueprintLibrary_GetValueAsFloat::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_GetValueAsFloat, ReturnValue) == 0x000028, "Member 'AIFwBlackboardBlueprintLibrary_GetValueAsFloat::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwBlackboardBlueprintLibrary.GetValueAsInt
// 0x0030 (0x0030 - 0x0000)
struct AIFwBlackboardBlueprintLibrary_GetValueAsInt final
{
public:
	struct FAIFwBlackboard                        Blackboard;                                        // 0x0000(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                 KeyName;                                           // 0x0018(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0028(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A5D[0x4];                                     // 0x002C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AIFwBlackboardBlueprintLibrary_GetValueAsInt) == 0x000008, "Wrong alignment on AIFwBlackboardBlueprintLibrary_GetValueAsInt");
static_assert(sizeof(AIFwBlackboardBlueprintLibrary_GetValueAsInt) == 0x000030, "Wrong size on AIFwBlackboardBlueprintLibrary_GetValueAsInt");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_GetValueAsInt, Blackboard) == 0x000000, "Member 'AIFwBlackboardBlueprintLibrary_GetValueAsInt::Blackboard' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_GetValueAsInt, KeyName) == 0x000018, "Member 'AIFwBlackboardBlueprintLibrary_GetValueAsInt::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_GetValueAsInt, ReturnValue) == 0x000028, "Member 'AIFwBlackboardBlueprintLibrary_GetValueAsInt::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwBlackboardBlueprintLibrary.GetValueAsName
// 0x0030 (0x0030 - 0x0000)
struct AIFwBlackboardBlueprintLibrary_GetValueAsName final
{
public:
	struct FAIFwBlackboard                        Blackboard;                                        // 0x0000(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                 KeyName;                                           // 0x0018(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   ReturnValue;                                       // 0x0028(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwBlackboardBlueprintLibrary_GetValueAsName) == 0x000008, "Wrong alignment on AIFwBlackboardBlueprintLibrary_GetValueAsName");
static_assert(sizeof(AIFwBlackboardBlueprintLibrary_GetValueAsName) == 0x000030, "Wrong size on AIFwBlackboardBlueprintLibrary_GetValueAsName");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_GetValueAsName, Blackboard) == 0x000000, "Member 'AIFwBlackboardBlueprintLibrary_GetValueAsName::Blackboard' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_GetValueAsName, KeyName) == 0x000018, "Member 'AIFwBlackboardBlueprintLibrary_GetValueAsName::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_GetValueAsName, ReturnValue) == 0x000028, "Member 'AIFwBlackboardBlueprintLibrary_GetValueAsName::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwBlackboardBlueprintLibrary.GetValueAsObject
// 0x0030 (0x0030 - 0x0000)
struct AIFwBlackboardBlueprintLibrary_GetValueAsObject final
{
public:
	struct FAIFwBlackboard                        Blackboard;                                        // 0x0000(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                 KeyName;                                           // 0x0018(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                ReturnValue;                                       // 0x0028(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwBlackboardBlueprintLibrary_GetValueAsObject) == 0x000008, "Wrong alignment on AIFwBlackboardBlueprintLibrary_GetValueAsObject");
static_assert(sizeof(AIFwBlackboardBlueprintLibrary_GetValueAsObject) == 0x000030, "Wrong size on AIFwBlackboardBlueprintLibrary_GetValueAsObject");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_GetValueAsObject, Blackboard) == 0x000000, "Member 'AIFwBlackboardBlueprintLibrary_GetValueAsObject::Blackboard' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_GetValueAsObject, KeyName) == 0x000018, "Member 'AIFwBlackboardBlueprintLibrary_GetValueAsObject::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_GetValueAsObject, ReturnValue) == 0x000028, "Member 'AIFwBlackboardBlueprintLibrary_GetValueAsObject::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwBlackboardBlueprintLibrary.GetValueAsObjectArray
// 0x0038 (0x0038 - 0x0000)
struct AIFwBlackboardBlueprintLibrary_GetValueAsObjectArray final
{
public:
	struct FAIFwBlackboard                        Blackboard;                                        // 0x0000(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                 KeyName;                                           // 0x0018(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UObject*>                        ReturnValue;                                       // 0x0028(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwBlackboardBlueprintLibrary_GetValueAsObjectArray) == 0x000008, "Wrong alignment on AIFwBlackboardBlueprintLibrary_GetValueAsObjectArray");
static_assert(sizeof(AIFwBlackboardBlueprintLibrary_GetValueAsObjectArray) == 0x000038, "Wrong size on AIFwBlackboardBlueprintLibrary_GetValueAsObjectArray");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_GetValueAsObjectArray, Blackboard) == 0x000000, "Member 'AIFwBlackboardBlueprintLibrary_GetValueAsObjectArray::Blackboard' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_GetValueAsObjectArray, KeyName) == 0x000018, "Member 'AIFwBlackboardBlueprintLibrary_GetValueAsObjectArray::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_GetValueAsObjectArray, ReturnValue) == 0x000028, "Member 'AIFwBlackboardBlueprintLibrary_GetValueAsObjectArray::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwBlackboardBlueprintLibrary.GetValueAsString
// 0x0038 (0x0038 - 0x0000)
struct AIFwBlackboardBlueprintLibrary_GetValueAsString final
{
public:
	struct FAIFwBlackboard                        Blackboard;                                        // 0x0000(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                 KeyName;                                           // 0x0018(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ReturnValue;                                       // 0x0028(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwBlackboardBlueprintLibrary_GetValueAsString) == 0x000008, "Wrong alignment on AIFwBlackboardBlueprintLibrary_GetValueAsString");
static_assert(sizeof(AIFwBlackboardBlueprintLibrary_GetValueAsString) == 0x000038, "Wrong size on AIFwBlackboardBlueprintLibrary_GetValueAsString");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_GetValueAsString, Blackboard) == 0x000000, "Member 'AIFwBlackboardBlueprintLibrary_GetValueAsString::Blackboard' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_GetValueAsString, KeyName) == 0x000018, "Member 'AIFwBlackboardBlueprintLibrary_GetValueAsString::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_GetValueAsString, ReturnValue) == 0x000028, "Member 'AIFwBlackboardBlueprintLibrary_GetValueAsString::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwBlackboardBlueprintLibrary.GetValueAsVector
// 0x0038 (0x0038 - 0x0000)
struct AIFwBlackboardBlueprintLibrary_GetValueAsVector final
{
public:
	struct FAIFwBlackboard                        Blackboard;                                        // 0x0000(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                 KeyName;                                           // 0x0018(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                ReturnValue;                                       // 0x0028(0x000C)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A5E[0x4];                                     // 0x0034(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AIFwBlackboardBlueprintLibrary_GetValueAsVector) == 0x000008, "Wrong alignment on AIFwBlackboardBlueprintLibrary_GetValueAsVector");
static_assert(sizeof(AIFwBlackboardBlueprintLibrary_GetValueAsVector) == 0x000038, "Wrong size on AIFwBlackboardBlueprintLibrary_GetValueAsVector");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_GetValueAsVector, Blackboard) == 0x000000, "Member 'AIFwBlackboardBlueprintLibrary_GetValueAsVector::Blackboard' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_GetValueAsVector, KeyName) == 0x000018, "Member 'AIFwBlackboardBlueprintLibrary_GetValueAsVector::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_GetValueAsVector, ReturnValue) == 0x000028, "Member 'AIFwBlackboardBlueprintLibrary_GetValueAsVector::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwBlackboardBlueprintLibrary.GetValueAsVectorArray
// 0x0038 (0x0038 - 0x0000)
struct AIFwBlackboardBlueprintLibrary_GetValueAsVectorArray final
{
public:
	struct FAIFwBlackboard                        Blackboard;                                        // 0x0000(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                 KeyName;                                           // 0x0018(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                        ReturnValue;                                       // 0x0028(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwBlackboardBlueprintLibrary_GetValueAsVectorArray) == 0x000008, "Wrong alignment on AIFwBlackboardBlueprintLibrary_GetValueAsVectorArray");
static_assert(sizeof(AIFwBlackboardBlueprintLibrary_GetValueAsVectorArray) == 0x000038, "Wrong size on AIFwBlackboardBlueprintLibrary_GetValueAsVectorArray");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_GetValueAsVectorArray, Blackboard) == 0x000000, "Member 'AIFwBlackboardBlueprintLibrary_GetValueAsVectorArray::Blackboard' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_GetValueAsVectorArray, KeyName) == 0x000018, "Member 'AIFwBlackboardBlueprintLibrary_GetValueAsVectorArray::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_GetValueAsVectorArray, ReturnValue) == 0x000028, "Member 'AIFwBlackboardBlueprintLibrary_GetValueAsVectorArray::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwBlackboardBlueprintLibrary.IsValidKey
// 0x0030 (0x0030 - 0x0000)
struct AIFwBlackboardBlueprintLibrary_IsValidKey final
{
public:
	struct FAIFwBlackboard                        Blackboard;                                        // 0x0000(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                 KeyName;                                           // 0x0018(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0028(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A5F[0x7];                                     // 0x0029(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AIFwBlackboardBlueprintLibrary_IsValidKey) == 0x000008, "Wrong alignment on AIFwBlackboardBlueprintLibrary_IsValidKey");
static_assert(sizeof(AIFwBlackboardBlueprintLibrary_IsValidKey) == 0x000030, "Wrong size on AIFwBlackboardBlueprintLibrary_IsValidKey");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_IsValidKey, Blackboard) == 0x000000, "Member 'AIFwBlackboardBlueprintLibrary_IsValidKey::Blackboard' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_IsValidKey, KeyName) == 0x000018, "Member 'AIFwBlackboardBlueprintLibrary_IsValidKey::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_IsValidKey, ReturnValue) == 0x000028, "Member 'AIFwBlackboardBlueprintLibrary_IsValidKey::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwBlackboardBlueprintLibrary.SetValueAsBool
// 0x0030 (0x0030 - 0x0000)
struct AIFwBlackboardBlueprintLibrary_SetValueAsBool final
{
public:
	struct FAIFwBlackboard                        Blackboard;                                        // 0x0000(0x0018)(Parm, OutParm, NativeAccessSpecifierPublic)
	class FString                                 KeyName;                                           // 0x0018(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          BoolValue;                                         // 0x0028(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A60[0x7];                                     // 0x0029(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AIFwBlackboardBlueprintLibrary_SetValueAsBool) == 0x000008, "Wrong alignment on AIFwBlackboardBlueprintLibrary_SetValueAsBool");
static_assert(sizeof(AIFwBlackboardBlueprintLibrary_SetValueAsBool) == 0x000030, "Wrong size on AIFwBlackboardBlueprintLibrary_SetValueAsBool");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_SetValueAsBool, Blackboard) == 0x000000, "Member 'AIFwBlackboardBlueprintLibrary_SetValueAsBool::Blackboard' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_SetValueAsBool, KeyName) == 0x000018, "Member 'AIFwBlackboardBlueprintLibrary_SetValueAsBool::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_SetValueAsBool, BoolValue) == 0x000028, "Member 'AIFwBlackboardBlueprintLibrary_SetValueAsBool::BoolValue' has a wrong offset!");

// Function AIFramework.AIFwBlackboardBlueprintLibrary.SetValueAsClass
// 0x0030 (0x0030 - 0x0000)
struct AIFwBlackboardBlueprintLibrary_SetValueAsClass final
{
public:
	struct FAIFwBlackboard                        Blackboard;                                        // 0x0000(0x0018)(Parm, OutParm, NativeAccessSpecifierPublic)
	class FString                                 KeyName;                                           // 0x0018(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                 ClassValue;                                        // 0x0028(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwBlackboardBlueprintLibrary_SetValueAsClass) == 0x000008, "Wrong alignment on AIFwBlackboardBlueprintLibrary_SetValueAsClass");
static_assert(sizeof(AIFwBlackboardBlueprintLibrary_SetValueAsClass) == 0x000030, "Wrong size on AIFwBlackboardBlueprintLibrary_SetValueAsClass");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_SetValueAsClass, Blackboard) == 0x000000, "Member 'AIFwBlackboardBlueprintLibrary_SetValueAsClass::Blackboard' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_SetValueAsClass, KeyName) == 0x000018, "Member 'AIFwBlackboardBlueprintLibrary_SetValueAsClass::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_SetValueAsClass, ClassValue) == 0x000028, "Member 'AIFwBlackboardBlueprintLibrary_SetValueAsClass::ClassValue' has a wrong offset!");

// Function AIFramework.AIFwBlackboardBlueprintLibrary.SetValueAsFloat
// 0x0030 (0x0030 - 0x0000)
struct AIFwBlackboardBlueprintLibrary_SetValueAsFloat final
{
public:
	struct FAIFwBlackboard                        Blackboard;                                        // 0x0000(0x0018)(Parm, OutParm, NativeAccessSpecifierPublic)
	class FString                                 KeyName;                                           // 0x0018(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FloatValue;                                        // 0x0028(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A61[0x4];                                     // 0x002C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AIFwBlackboardBlueprintLibrary_SetValueAsFloat) == 0x000008, "Wrong alignment on AIFwBlackboardBlueprintLibrary_SetValueAsFloat");
static_assert(sizeof(AIFwBlackboardBlueprintLibrary_SetValueAsFloat) == 0x000030, "Wrong size on AIFwBlackboardBlueprintLibrary_SetValueAsFloat");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_SetValueAsFloat, Blackboard) == 0x000000, "Member 'AIFwBlackboardBlueprintLibrary_SetValueAsFloat::Blackboard' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_SetValueAsFloat, KeyName) == 0x000018, "Member 'AIFwBlackboardBlueprintLibrary_SetValueAsFloat::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_SetValueAsFloat, FloatValue) == 0x000028, "Member 'AIFwBlackboardBlueprintLibrary_SetValueAsFloat::FloatValue' has a wrong offset!");

// Function AIFramework.AIFwBlackboardBlueprintLibrary.SetValueAsInt
// 0x0030 (0x0030 - 0x0000)
struct AIFwBlackboardBlueprintLibrary_SetValueAsInt final
{
public:
	struct FAIFwBlackboard                        Blackboard;                                        // 0x0000(0x0018)(Parm, OutParm, NativeAccessSpecifierPublic)
	class FString                                 KeyName;                                           // 0x0018(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         IntValue;                                          // 0x0028(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A62[0x4];                                     // 0x002C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AIFwBlackboardBlueprintLibrary_SetValueAsInt) == 0x000008, "Wrong alignment on AIFwBlackboardBlueprintLibrary_SetValueAsInt");
static_assert(sizeof(AIFwBlackboardBlueprintLibrary_SetValueAsInt) == 0x000030, "Wrong size on AIFwBlackboardBlueprintLibrary_SetValueAsInt");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_SetValueAsInt, Blackboard) == 0x000000, "Member 'AIFwBlackboardBlueprintLibrary_SetValueAsInt::Blackboard' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_SetValueAsInt, KeyName) == 0x000018, "Member 'AIFwBlackboardBlueprintLibrary_SetValueAsInt::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_SetValueAsInt, IntValue) == 0x000028, "Member 'AIFwBlackboardBlueprintLibrary_SetValueAsInt::IntValue' has a wrong offset!");

// Function AIFramework.AIFwBlackboardBlueprintLibrary.SetValueAsName
// 0x0030 (0x0030 - 0x0000)
struct AIFwBlackboardBlueprintLibrary_SetValueAsName final
{
public:
	struct FAIFwBlackboard                        Blackboard;                                        // 0x0000(0x0018)(Parm, OutParm, NativeAccessSpecifierPublic)
	class FString                                 KeyName;                                           // 0x0018(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   NameValue;                                         // 0x0028(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwBlackboardBlueprintLibrary_SetValueAsName) == 0x000008, "Wrong alignment on AIFwBlackboardBlueprintLibrary_SetValueAsName");
static_assert(sizeof(AIFwBlackboardBlueprintLibrary_SetValueAsName) == 0x000030, "Wrong size on AIFwBlackboardBlueprintLibrary_SetValueAsName");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_SetValueAsName, Blackboard) == 0x000000, "Member 'AIFwBlackboardBlueprintLibrary_SetValueAsName::Blackboard' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_SetValueAsName, KeyName) == 0x000018, "Member 'AIFwBlackboardBlueprintLibrary_SetValueAsName::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_SetValueAsName, NameValue) == 0x000028, "Member 'AIFwBlackboardBlueprintLibrary_SetValueAsName::NameValue' has a wrong offset!");

// Function AIFramework.AIFwBlackboardBlueprintLibrary.SetValueAsObject
// 0x0030 (0x0030 - 0x0000)
struct AIFwBlackboardBlueprintLibrary_SetValueAsObject final
{
public:
	struct FAIFwBlackboard                        Blackboard;                                        // 0x0000(0x0018)(Parm, OutParm, NativeAccessSpecifierPublic)
	class FString                                 KeyName;                                           // 0x0018(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                ObjectValue;                                       // 0x0028(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwBlackboardBlueprintLibrary_SetValueAsObject) == 0x000008, "Wrong alignment on AIFwBlackboardBlueprintLibrary_SetValueAsObject");
static_assert(sizeof(AIFwBlackboardBlueprintLibrary_SetValueAsObject) == 0x000030, "Wrong size on AIFwBlackboardBlueprintLibrary_SetValueAsObject");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_SetValueAsObject, Blackboard) == 0x000000, "Member 'AIFwBlackboardBlueprintLibrary_SetValueAsObject::Blackboard' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_SetValueAsObject, KeyName) == 0x000018, "Member 'AIFwBlackboardBlueprintLibrary_SetValueAsObject::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_SetValueAsObject, ObjectValue) == 0x000028, "Member 'AIFwBlackboardBlueprintLibrary_SetValueAsObject::ObjectValue' has a wrong offset!");

// Function AIFramework.AIFwBlackboardBlueprintLibrary.SetValueAsObjectArray
// 0x0038 (0x0038 - 0x0000)
struct AIFwBlackboardBlueprintLibrary_SetValueAsObjectArray final
{
public:
	struct FAIFwBlackboard                        Blackboard;                                        // 0x0000(0x0018)(Parm, OutParm, NativeAccessSpecifierPublic)
	class FString                                 KeyName;                                           // 0x0018(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UObject*>                        ObjectArray;                                       // 0x0028(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwBlackboardBlueprintLibrary_SetValueAsObjectArray) == 0x000008, "Wrong alignment on AIFwBlackboardBlueprintLibrary_SetValueAsObjectArray");
static_assert(sizeof(AIFwBlackboardBlueprintLibrary_SetValueAsObjectArray) == 0x000038, "Wrong size on AIFwBlackboardBlueprintLibrary_SetValueAsObjectArray");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_SetValueAsObjectArray, Blackboard) == 0x000000, "Member 'AIFwBlackboardBlueprintLibrary_SetValueAsObjectArray::Blackboard' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_SetValueAsObjectArray, KeyName) == 0x000018, "Member 'AIFwBlackboardBlueprintLibrary_SetValueAsObjectArray::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_SetValueAsObjectArray, ObjectArray) == 0x000028, "Member 'AIFwBlackboardBlueprintLibrary_SetValueAsObjectArray::ObjectArray' has a wrong offset!");

// Function AIFramework.AIFwBlackboardBlueprintLibrary.SetValueAsString
// 0x0038 (0x0038 - 0x0000)
struct AIFwBlackboardBlueprintLibrary_SetValueAsString final
{
public:
	struct FAIFwBlackboard                        Blackboard;                                        // 0x0000(0x0018)(Parm, OutParm, NativeAccessSpecifierPublic)
	class FString                                 KeyName;                                           // 0x0018(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 StringValue;                                       // 0x0028(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwBlackboardBlueprintLibrary_SetValueAsString) == 0x000008, "Wrong alignment on AIFwBlackboardBlueprintLibrary_SetValueAsString");
static_assert(sizeof(AIFwBlackboardBlueprintLibrary_SetValueAsString) == 0x000038, "Wrong size on AIFwBlackboardBlueprintLibrary_SetValueAsString");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_SetValueAsString, Blackboard) == 0x000000, "Member 'AIFwBlackboardBlueprintLibrary_SetValueAsString::Blackboard' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_SetValueAsString, KeyName) == 0x000018, "Member 'AIFwBlackboardBlueprintLibrary_SetValueAsString::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_SetValueAsString, StringValue) == 0x000028, "Member 'AIFwBlackboardBlueprintLibrary_SetValueAsString::StringValue' has a wrong offset!");

// Function AIFramework.AIFwBlackboardBlueprintLibrary.SetValueAsVector
// 0x0038 (0x0038 - 0x0000)
struct AIFwBlackboardBlueprintLibrary_SetValueAsVector final
{
public:
	struct FAIFwBlackboard                        Blackboard;                                        // 0x0000(0x0018)(Parm, OutParm, NativeAccessSpecifierPublic)
	class FString                                 KeyName;                                           // 0x0018(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                VectorValue;                                       // 0x0028(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A63[0x4];                                     // 0x0034(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AIFwBlackboardBlueprintLibrary_SetValueAsVector) == 0x000008, "Wrong alignment on AIFwBlackboardBlueprintLibrary_SetValueAsVector");
static_assert(sizeof(AIFwBlackboardBlueprintLibrary_SetValueAsVector) == 0x000038, "Wrong size on AIFwBlackboardBlueprintLibrary_SetValueAsVector");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_SetValueAsVector, Blackboard) == 0x000000, "Member 'AIFwBlackboardBlueprintLibrary_SetValueAsVector::Blackboard' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_SetValueAsVector, KeyName) == 0x000018, "Member 'AIFwBlackboardBlueprintLibrary_SetValueAsVector::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_SetValueAsVector, VectorValue) == 0x000028, "Member 'AIFwBlackboardBlueprintLibrary_SetValueAsVector::VectorValue' has a wrong offset!");

// Function AIFramework.AIFwBlackboardBlueprintLibrary.SetValueAsVectorArray
// 0x0038 (0x0038 - 0x0000)
struct AIFwBlackboardBlueprintLibrary_SetValueAsVectorArray final
{
public:
	struct FAIFwBlackboard                        Blackboard;                                        // 0x0000(0x0018)(Parm, OutParm, NativeAccessSpecifierPublic)
	class FString                                 KeyName;                                           // 0x0018(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                        VectorArray;                                       // 0x0028(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwBlackboardBlueprintLibrary_SetValueAsVectorArray) == 0x000008, "Wrong alignment on AIFwBlackboardBlueprintLibrary_SetValueAsVectorArray");
static_assert(sizeof(AIFwBlackboardBlueprintLibrary_SetValueAsVectorArray) == 0x000038, "Wrong size on AIFwBlackboardBlueprintLibrary_SetValueAsVectorArray");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_SetValueAsVectorArray, Blackboard) == 0x000000, "Member 'AIFwBlackboardBlueprintLibrary_SetValueAsVectorArray::Blackboard' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_SetValueAsVectorArray, KeyName) == 0x000018, "Member 'AIFwBlackboardBlueprintLibrary_SetValueAsVectorArray::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardBlueprintLibrary_SetValueAsVectorArray, VectorArray) == 0x000028, "Member 'AIFwBlackboardBlueprintLibrary_SetValueAsVectorArray::VectorArray' has a wrong offset!");

// Function AIFramework.AIFwBlackboardComponent.BindToUE4Blackboard
// 0x0020 (0x0020 - 0x0000)
struct AIFwBlackboardComponent_BindToUE4Blackboard final
{
public:
	class FString                                 KeyName;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlackboardComponent*                   OtherBlackboard;                                   // 0x0010(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   OtherKeyName;                                      // 0x0018(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwBlackboardComponent_BindToUE4Blackboard) == 0x000008, "Wrong alignment on AIFwBlackboardComponent_BindToUE4Blackboard");
static_assert(sizeof(AIFwBlackboardComponent_BindToUE4Blackboard) == 0x000020, "Wrong size on AIFwBlackboardComponent_BindToUE4Blackboard");
static_assert(offsetof(AIFwBlackboardComponent_BindToUE4Blackboard, KeyName) == 0x000000, "Member 'AIFwBlackboardComponent_BindToUE4Blackboard::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardComponent_BindToUE4Blackboard, OtherBlackboard) == 0x000010, "Member 'AIFwBlackboardComponent_BindToUE4Blackboard::OtherBlackboard' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardComponent_BindToUE4Blackboard, OtherKeyName) == 0x000018, "Member 'AIFwBlackboardComponent_BindToUE4Blackboard::OtherKeyName' has a wrong offset!");

// Function AIFramework.AIFwBlackboardComponent.ClearValue
// 0x0010 (0x0010 - 0x0000)
struct AIFwBlackboardComponent_ClearValue final
{
public:
	class FString                                 KeyName;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwBlackboardComponent_ClearValue) == 0x000008, "Wrong alignment on AIFwBlackboardComponent_ClearValue");
static_assert(sizeof(AIFwBlackboardComponent_ClearValue) == 0x000010, "Wrong size on AIFwBlackboardComponent_ClearValue");
static_assert(offsetof(AIFwBlackboardComponent_ClearValue, KeyName) == 0x000000, "Member 'AIFwBlackboardComponent_ClearValue::KeyName' has a wrong offset!");

// Function AIFramework.AIFwBlackboardComponent.SetValueAsBool
// 0x0018 (0x0018 - 0x0000)
struct AIFwBlackboardComponent_SetValueAsBool final
{
public:
	class FString                                 KeyName;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          BoolValue;                                         // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A65[0x7];                                     // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AIFwBlackboardComponent_SetValueAsBool) == 0x000008, "Wrong alignment on AIFwBlackboardComponent_SetValueAsBool");
static_assert(sizeof(AIFwBlackboardComponent_SetValueAsBool) == 0x000018, "Wrong size on AIFwBlackboardComponent_SetValueAsBool");
static_assert(offsetof(AIFwBlackboardComponent_SetValueAsBool, KeyName) == 0x000000, "Member 'AIFwBlackboardComponent_SetValueAsBool::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardComponent_SetValueAsBool, BoolValue) == 0x000010, "Member 'AIFwBlackboardComponent_SetValueAsBool::BoolValue' has a wrong offset!");

// Function AIFramework.AIFwBlackboardComponent.SetValueAsClass
// 0x0018 (0x0018 - 0x0000)
struct AIFwBlackboardComponent_SetValueAsClass final
{
public:
	class FString                                 KeyName;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                 ClassValue;                                        // 0x0010(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwBlackboardComponent_SetValueAsClass) == 0x000008, "Wrong alignment on AIFwBlackboardComponent_SetValueAsClass");
static_assert(sizeof(AIFwBlackboardComponent_SetValueAsClass) == 0x000018, "Wrong size on AIFwBlackboardComponent_SetValueAsClass");
static_assert(offsetof(AIFwBlackboardComponent_SetValueAsClass, KeyName) == 0x000000, "Member 'AIFwBlackboardComponent_SetValueAsClass::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardComponent_SetValueAsClass, ClassValue) == 0x000010, "Member 'AIFwBlackboardComponent_SetValueAsClass::ClassValue' has a wrong offset!");

// Function AIFramework.AIFwBlackboardComponent.SetValueAsEnum
// 0x0018 (0x0018 - 0x0000)
struct AIFwBlackboardComponent_SetValueAsEnum final
{
public:
	class FString                                 KeyName;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         EnumValue;                                         // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A66[0x7];                                     // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AIFwBlackboardComponent_SetValueAsEnum) == 0x000008, "Wrong alignment on AIFwBlackboardComponent_SetValueAsEnum");
static_assert(sizeof(AIFwBlackboardComponent_SetValueAsEnum) == 0x000018, "Wrong size on AIFwBlackboardComponent_SetValueAsEnum");
static_assert(offsetof(AIFwBlackboardComponent_SetValueAsEnum, KeyName) == 0x000000, "Member 'AIFwBlackboardComponent_SetValueAsEnum::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardComponent_SetValueAsEnum, EnumValue) == 0x000010, "Member 'AIFwBlackboardComponent_SetValueAsEnum::EnumValue' has a wrong offset!");

// Function AIFramework.AIFwBlackboardComponent.SetValueAsFloat
// 0x0018 (0x0018 - 0x0000)
struct AIFwBlackboardComponent_SetValueAsFloat final
{
public:
	class FString                                 KeyName;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FloatValue;                                        // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A67[0x4];                                     // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AIFwBlackboardComponent_SetValueAsFloat) == 0x000008, "Wrong alignment on AIFwBlackboardComponent_SetValueAsFloat");
static_assert(sizeof(AIFwBlackboardComponent_SetValueAsFloat) == 0x000018, "Wrong size on AIFwBlackboardComponent_SetValueAsFloat");
static_assert(offsetof(AIFwBlackboardComponent_SetValueAsFloat, KeyName) == 0x000000, "Member 'AIFwBlackboardComponent_SetValueAsFloat::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardComponent_SetValueAsFloat, FloatValue) == 0x000010, "Member 'AIFwBlackboardComponent_SetValueAsFloat::FloatValue' has a wrong offset!");

// Function AIFramework.AIFwBlackboardComponent.SetValueAsInt
// 0x0018 (0x0018 - 0x0000)
struct AIFwBlackboardComponent_SetValueAsInt final
{
public:
	class FString                                 KeyName;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         IntValue;                                          // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A68[0x4];                                     // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AIFwBlackboardComponent_SetValueAsInt) == 0x000008, "Wrong alignment on AIFwBlackboardComponent_SetValueAsInt");
static_assert(sizeof(AIFwBlackboardComponent_SetValueAsInt) == 0x000018, "Wrong size on AIFwBlackboardComponent_SetValueAsInt");
static_assert(offsetof(AIFwBlackboardComponent_SetValueAsInt, KeyName) == 0x000000, "Member 'AIFwBlackboardComponent_SetValueAsInt::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardComponent_SetValueAsInt, IntValue) == 0x000010, "Member 'AIFwBlackboardComponent_SetValueAsInt::IntValue' has a wrong offset!");

// Function AIFramework.AIFwBlackboardComponent.SetValueAsIntArray
// 0x0020 (0x0020 - 0x0000)
struct AIFwBlackboardComponent_SetValueAsIntArray final
{
public:
	class FString                                 KeyName;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                 IntArray;                                          // 0x0010(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwBlackboardComponent_SetValueAsIntArray) == 0x000008, "Wrong alignment on AIFwBlackboardComponent_SetValueAsIntArray");
static_assert(sizeof(AIFwBlackboardComponent_SetValueAsIntArray) == 0x000020, "Wrong size on AIFwBlackboardComponent_SetValueAsIntArray");
static_assert(offsetof(AIFwBlackboardComponent_SetValueAsIntArray, KeyName) == 0x000000, "Member 'AIFwBlackboardComponent_SetValueAsIntArray::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardComponent_SetValueAsIntArray, IntArray) == 0x000010, "Member 'AIFwBlackboardComponent_SetValueAsIntArray::IntArray' has a wrong offset!");

// Function AIFramework.AIFwBlackboardComponent.SetValueAsName
// 0x0018 (0x0018 - 0x0000)
struct AIFwBlackboardComponent_SetValueAsName final
{
public:
	class FString                                 KeyName;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   NameValue;                                         // 0x0010(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwBlackboardComponent_SetValueAsName) == 0x000008, "Wrong alignment on AIFwBlackboardComponent_SetValueAsName");
static_assert(sizeof(AIFwBlackboardComponent_SetValueAsName) == 0x000018, "Wrong size on AIFwBlackboardComponent_SetValueAsName");
static_assert(offsetof(AIFwBlackboardComponent_SetValueAsName, KeyName) == 0x000000, "Member 'AIFwBlackboardComponent_SetValueAsName::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardComponent_SetValueAsName, NameValue) == 0x000010, "Member 'AIFwBlackboardComponent_SetValueAsName::NameValue' has a wrong offset!");

// Function AIFramework.AIFwBlackboardComponent.SetValueAsObject
// 0x0018 (0x0018 - 0x0000)
struct AIFwBlackboardComponent_SetValueAsObject final
{
public:
	class FString                                 KeyName;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                ObjectValue;                                       // 0x0010(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwBlackboardComponent_SetValueAsObject) == 0x000008, "Wrong alignment on AIFwBlackboardComponent_SetValueAsObject");
static_assert(sizeof(AIFwBlackboardComponent_SetValueAsObject) == 0x000018, "Wrong size on AIFwBlackboardComponent_SetValueAsObject");
static_assert(offsetof(AIFwBlackboardComponent_SetValueAsObject, KeyName) == 0x000000, "Member 'AIFwBlackboardComponent_SetValueAsObject::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardComponent_SetValueAsObject, ObjectValue) == 0x000010, "Member 'AIFwBlackboardComponent_SetValueAsObject::ObjectValue' has a wrong offset!");

// Function AIFramework.AIFwBlackboardComponent.SetValueAsObjectArray
// 0x0020 (0x0020 - 0x0000)
struct AIFwBlackboardComponent_SetValueAsObjectArray final
{
public:
	class FString                                 KeyName;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UObject*>                        ObjectArray;                                       // 0x0010(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwBlackboardComponent_SetValueAsObjectArray) == 0x000008, "Wrong alignment on AIFwBlackboardComponent_SetValueAsObjectArray");
static_assert(sizeof(AIFwBlackboardComponent_SetValueAsObjectArray) == 0x000020, "Wrong size on AIFwBlackboardComponent_SetValueAsObjectArray");
static_assert(offsetof(AIFwBlackboardComponent_SetValueAsObjectArray, KeyName) == 0x000000, "Member 'AIFwBlackboardComponent_SetValueAsObjectArray::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardComponent_SetValueAsObjectArray, ObjectArray) == 0x000010, "Member 'AIFwBlackboardComponent_SetValueAsObjectArray::ObjectArray' has a wrong offset!");

// Function AIFramework.AIFwBlackboardComponent.SetValueAsRotator
// 0x0020 (0x0020 - 0x0000)
struct AIFwBlackboardComponent_SetValueAsRotator final
{
public:
	class FString                                 KeyName;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               VectorValue;                                       // 0x0010(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A69[0x4];                                     // 0x001C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AIFwBlackboardComponent_SetValueAsRotator) == 0x000008, "Wrong alignment on AIFwBlackboardComponent_SetValueAsRotator");
static_assert(sizeof(AIFwBlackboardComponent_SetValueAsRotator) == 0x000020, "Wrong size on AIFwBlackboardComponent_SetValueAsRotator");
static_assert(offsetof(AIFwBlackboardComponent_SetValueAsRotator, KeyName) == 0x000000, "Member 'AIFwBlackboardComponent_SetValueAsRotator::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardComponent_SetValueAsRotator, VectorValue) == 0x000010, "Member 'AIFwBlackboardComponent_SetValueAsRotator::VectorValue' has a wrong offset!");

// Function AIFramework.AIFwBlackboardComponent.SetValueAsString
// 0x0020 (0x0020 - 0x0000)
struct AIFwBlackboardComponent_SetValueAsString final
{
public:
	class FString                                 KeyName;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 StringValue;                                       // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwBlackboardComponent_SetValueAsString) == 0x000008, "Wrong alignment on AIFwBlackboardComponent_SetValueAsString");
static_assert(sizeof(AIFwBlackboardComponent_SetValueAsString) == 0x000020, "Wrong size on AIFwBlackboardComponent_SetValueAsString");
static_assert(offsetof(AIFwBlackboardComponent_SetValueAsString, KeyName) == 0x000000, "Member 'AIFwBlackboardComponent_SetValueAsString::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardComponent_SetValueAsString, StringValue) == 0x000010, "Member 'AIFwBlackboardComponent_SetValueAsString::StringValue' has a wrong offset!");

// Function AIFramework.AIFwBlackboardComponent.SetValueAsVector
// 0x0020 (0x0020 - 0x0000)
struct AIFwBlackboardComponent_SetValueAsVector final
{
public:
	class FString                                 KeyName;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                VectorValue;                                       // 0x0010(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A6A[0x4];                                     // 0x001C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AIFwBlackboardComponent_SetValueAsVector) == 0x000008, "Wrong alignment on AIFwBlackboardComponent_SetValueAsVector");
static_assert(sizeof(AIFwBlackboardComponent_SetValueAsVector) == 0x000020, "Wrong size on AIFwBlackboardComponent_SetValueAsVector");
static_assert(offsetof(AIFwBlackboardComponent_SetValueAsVector, KeyName) == 0x000000, "Member 'AIFwBlackboardComponent_SetValueAsVector::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardComponent_SetValueAsVector, VectorValue) == 0x000010, "Member 'AIFwBlackboardComponent_SetValueAsVector::VectorValue' has a wrong offset!");

// Function AIFramework.AIFwBlackboardComponent.SetValueAsVectorArray
// 0x0020 (0x0020 - 0x0000)
struct AIFwBlackboardComponent_SetValueAsVectorArray final
{
public:
	class FString                                 KeyName;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                        VectorArray;                                       // 0x0010(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwBlackboardComponent_SetValueAsVectorArray) == 0x000008, "Wrong alignment on AIFwBlackboardComponent_SetValueAsVectorArray");
static_assert(sizeof(AIFwBlackboardComponent_SetValueAsVectorArray) == 0x000020, "Wrong size on AIFwBlackboardComponent_SetValueAsVectorArray");
static_assert(offsetof(AIFwBlackboardComponent_SetValueAsVectorArray, KeyName) == 0x000000, "Member 'AIFwBlackboardComponent_SetValueAsVectorArray::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardComponent_SetValueAsVectorArray, VectorArray) == 0x000010, "Member 'AIFwBlackboardComponent_SetValueAsVectorArray::VectorArray' has a wrong offset!");

// Function AIFramework.AIFwBlackboardComponent.GetValueAsBool
// 0x0018 (0x0018 - 0x0000)
struct AIFwBlackboardComponent_GetValueAsBool final
{
public:
	class FString                                 KeyName;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A6B[0x7];                                     // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AIFwBlackboardComponent_GetValueAsBool) == 0x000008, "Wrong alignment on AIFwBlackboardComponent_GetValueAsBool");
static_assert(sizeof(AIFwBlackboardComponent_GetValueAsBool) == 0x000018, "Wrong size on AIFwBlackboardComponent_GetValueAsBool");
static_assert(offsetof(AIFwBlackboardComponent_GetValueAsBool, KeyName) == 0x000000, "Member 'AIFwBlackboardComponent_GetValueAsBool::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardComponent_GetValueAsBool, ReturnValue) == 0x000010, "Member 'AIFwBlackboardComponent_GetValueAsBool::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwBlackboardComponent.GetValueAsClass
// 0x0018 (0x0018 - 0x0000)
struct AIFwBlackboardComponent_GetValueAsClass final
{
public:
	class FString                                 KeyName;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                 ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwBlackboardComponent_GetValueAsClass) == 0x000008, "Wrong alignment on AIFwBlackboardComponent_GetValueAsClass");
static_assert(sizeof(AIFwBlackboardComponent_GetValueAsClass) == 0x000018, "Wrong size on AIFwBlackboardComponent_GetValueAsClass");
static_assert(offsetof(AIFwBlackboardComponent_GetValueAsClass, KeyName) == 0x000000, "Member 'AIFwBlackboardComponent_GetValueAsClass::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardComponent_GetValueAsClass, ReturnValue) == 0x000010, "Member 'AIFwBlackboardComponent_GetValueAsClass::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwBlackboardComponent.GetValueAsEnum
// 0x0018 (0x0018 - 0x0000)
struct AIFwBlackboardComponent_GetValueAsEnum final
{
public:
	class FString                                 KeyName;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A6C[0x7];                                     // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AIFwBlackboardComponent_GetValueAsEnum) == 0x000008, "Wrong alignment on AIFwBlackboardComponent_GetValueAsEnum");
static_assert(sizeof(AIFwBlackboardComponent_GetValueAsEnum) == 0x000018, "Wrong size on AIFwBlackboardComponent_GetValueAsEnum");
static_assert(offsetof(AIFwBlackboardComponent_GetValueAsEnum, KeyName) == 0x000000, "Member 'AIFwBlackboardComponent_GetValueAsEnum::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardComponent_GetValueAsEnum, ReturnValue) == 0x000010, "Member 'AIFwBlackboardComponent_GetValueAsEnum::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwBlackboardComponent.GetValueAsFloat
// 0x0018 (0x0018 - 0x0000)
struct AIFwBlackboardComponent_GetValueAsFloat final
{
public:
	class FString                                 KeyName;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReturnValue;                                       // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A6D[0x4];                                     // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AIFwBlackboardComponent_GetValueAsFloat) == 0x000008, "Wrong alignment on AIFwBlackboardComponent_GetValueAsFloat");
static_assert(sizeof(AIFwBlackboardComponent_GetValueAsFloat) == 0x000018, "Wrong size on AIFwBlackboardComponent_GetValueAsFloat");
static_assert(offsetof(AIFwBlackboardComponent_GetValueAsFloat, KeyName) == 0x000000, "Member 'AIFwBlackboardComponent_GetValueAsFloat::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardComponent_GetValueAsFloat, ReturnValue) == 0x000010, "Member 'AIFwBlackboardComponent_GetValueAsFloat::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwBlackboardComponent.GetValueAsInt
// 0x0018 (0x0018 - 0x0000)
struct AIFwBlackboardComponent_GetValueAsInt final
{
public:
	class FString                                 KeyName;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A6E[0x4];                                     // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AIFwBlackboardComponent_GetValueAsInt) == 0x000008, "Wrong alignment on AIFwBlackboardComponent_GetValueAsInt");
static_assert(sizeof(AIFwBlackboardComponent_GetValueAsInt) == 0x000018, "Wrong size on AIFwBlackboardComponent_GetValueAsInt");
static_assert(offsetof(AIFwBlackboardComponent_GetValueAsInt, KeyName) == 0x000000, "Member 'AIFwBlackboardComponent_GetValueAsInt::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardComponent_GetValueAsInt, ReturnValue) == 0x000010, "Member 'AIFwBlackboardComponent_GetValueAsInt::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwBlackboardComponent.GetValueAsIntArray
// 0x0020 (0x0020 - 0x0000)
struct AIFwBlackboardComponent_GetValueAsIntArray final
{
public:
	class FString                                 KeyName;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                 ReturnValue;                                       // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwBlackboardComponent_GetValueAsIntArray) == 0x000008, "Wrong alignment on AIFwBlackboardComponent_GetValueAsIntArray");
static_assert(sizeof(AIFwBlackboardComponent_GetValueAsIntArray) == 0x000020, "Wrong size on AIFwBlackboardComponent_GetValueAsIntArray");
static_assert(offsetof(AIFwBlackboardComponent_GetValueAsIntArray, KeyName) == 0x000000, "Member 'AIFwBlackboardComponent_GetValueAsIntArray::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardComponent_GetValueAsIntArray, ReturnValue) == 0x000010, "Member 'AIFwBlackboardComponent_GetValueAsIntArray::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwBlackboardComponent.GetValueAsLocation
// 0x0020 (0x0020 - 0x0000)
struct AIFwBlackboardComponent_GetValueAsLocation final
{
public:
	class FString                                 KeyName;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                ReturnValue;                                       // 0x0010(0x000C)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A6F[0x4];                                     // 0x001C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AIFwBlackboardComponent_GetValueAsLocation) == 0x000008, "Wrong alignment on AIFwBlackboardComponent_GetValueAsLocation");
static_assert(sizeof(AIFwBlackboardComponent_GetValueAsLocation) == 0x000020, "Wrong size on AIFwBlackboardComponent_GetValueAsLocation");
static_assert(offsetof(AIFwBlackboardComponent_GetValueAsLocation, KeyName) == 0x000000, "Member 'AIFwBlackboardComponent_GetValueAsLocation::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardComponent_GetValueAsLocation, ReturnValue) == 0x000010, "Member 'AIFwBlackboardComponent_GetValueAsLocation::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwBlackboardComponent.GetValueAsName
// 0x0018 (0x0018 - 0x0000)
struct AIFwBlackboardComponent_GetValueAsName final
{
public:
	class FString                                 KeyName;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwBlackboardComponent_GetValueAsName) == 0x000008, "Wrong alignment on AIFwBlackboardComponent_GetValueAsName");
static_assert(sizeof(AIFwBlackboardComponent_GetValueAsName) == 0x000018, "Wrong size on AIFwBlackboardComponent_GetValueAsName");
static_assert(offsetof(AIFwBlackboardComponent_GetValueAsName, KeyName) == 0x000000, "Member 'AIFwBlackboardComponent_GetValueAsName::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardComponent_GetValueAsName, ReturnValue) == 0x000010, "Member 'AIFwBlackboardComponent_GetValueAsName::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwBlackboardComponent.GetValueAsObject
// 0x0018 (0x0018 - 0x0000)
struct AIFwBlackboardComponent_GetValueAsObject final
{
public:
	class FString                                 KeyName;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwBlackboardComponent_GetValueAsObject) == 0x000008, "Wrong alignment on AIFwBlackboardComponent_GetValueAsObject");
static_assert(sizeof(AIFwBlackboardComponent_GetValueAsObject) == 0x000018, "Wrong size on AIFwBlackboardComponent_GetValueAsObject");
static_assert(offsetof(AIFwBlackboardComponent_GetValueAsObject, KeyName) == 0x000000, "Member 'AIFwBlackboardComponent_GetValueAsObject::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardComponent_GetValueAsObject, ReturnValue) == 0x000010, "Member 'AIFwBlackboardComponent_GetValueAsObject::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwBlackboardComponent.GetValueAsObjectArray
// 0x0020 (0x0020 - 0x0000)
struct AIFwBlackboardComponent_GetValueAsObjectArray final
{
public:
	class FString                                 KeyName;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UObject*>                        ReturnValue;                                       // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwBlackboardComponent_GetValueAsObjectArray) == 0x000008, "Wrong alignment on AIFwBlackboardComponent_GetValueAsObjectArray");
static_assert(sizeof(AIFwBlackboardComponent_GetValueAsObjectArray) == 0x000020, "Wrong size on AIFwBlackboardComponent_GetValueAsObjectArray");
static_assert(offsetof(AIFwBlackboardComponent_GetValueAsObjectArray, KeyName) == 0x000000, "Member 'AIFwBlackboardComponent_GetValueAsObjectArray::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardComponent_GetValueAsObjectArray, ReturnValue) == 0x000010, "Member 'AIFwBlackboardComponent_GetValueAsObjectArray::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwBlackboardComponent.GetValueAsRotation
// 0x0020 (0x0020 - 0x0000)
struct AIFwBlackboardComponent_GetValueAsRotation final
{
public:
	class FString                                 KeyName;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               ReturnValue;                                       // 0x0010(0x000C)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A70[0x4];                                     // 0x001C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AIFwBlackboardComponent_GetValueAsRotation) == 0x000008, "Wrong alignment on AIFwBlackboardComponent_GetValueAsRotation");
static_assert(sizeof(AIFwBlackboardComponent_GetValueAsRotation) == 0x000020, "Wrong size on AIFwBlackboardComponent_GetValueAsRotation");
static_assert(offsetof(AIFwBlackboardComponent_GetValueAsRotation, KeyName) == 0x000000, "Member 'AIFwBlackboardComponent_GetValueAsRotation::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardComponent_GetValueAsRotation, ReturnValue) == 0x000010, "Member 'AIFwBlackboardComponent_GetValueAsRotation::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwBlackboardComponent.GetValueAsRotator
// 0x0020 (0x0020 - 0x0000)
struct AIFwBlackboardComponent_GetValueAsRotator final
{
public:
	class FString                                 KeyName;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               ReturnValue;                                       // 0x0010(0x000C)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A71[0x4];                                     // 0x001C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AIFwBlackboardComponent_GetValueAsRotator) == 0x000008, "Wrong alignment on AIFwBlackboardComponent_GetValueAsRotator");
static_assert(sizeof(AIFwBlackboardComponent_GetValueAsRotator) == 0x000020, "Wrong size on AIFwBlackboardComponent_GetValueAsRotator");
static_assert(offsetof(AIFwBlackboardComponent_GetValueAsRotator, KeyName) == 0x000000, "Member 'AIFwBlackboardComponent_GetValueAsRotator::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardComponent_GetValueAsRotator, ReturnValue) == 0x000010, "Member 'AIFwBlackboardComponent_GetValueAsRotator::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwBlackboardComponent.GetValueAsString
// 0x0020 (0x0020 - 0x0000)
struct AIFwBlackboardComponent_GetValueAsString final
{
public:
	class FString                                 KeyName;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ReturnValue;                                       // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwBlackboardComponent_GetValueAsString) == 0x000008, "Wrong alignment on AIFwBlackboardComponent_GetValueAsString");
static_assert(sizeof(AIFwBlackboardComponent_GetValueAsString) == 0x000020, "Wrong size on AIFwBlackboardComponent_GetValueAsString");
static_assert(offsetof(AIFwBlackboardComponent_GetValueAsString, KeyName) == 0x000000, "Member 'AIFwBlackboardComponent_GetValueAsString::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardComponent_GetValueAsString, ReturnValue) == 0x000010, "Member 'AIFwBlackboardComponent_GetValueAsString::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwBlackboardComponent.GetValueAsVector
// 0x0020 (0x0020 - 0x0000)
struct AIFwBlackboardComponent_GetValueAsVector final
{
public:
	class FString                                 KeyName;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                ReturnValue;                                       // 0x0010(0x000C)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A72[0x4];                                     // 0x001C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AIFwBlackboardComponent_GetValueAsVector) == 0x000008, "Wrong alignment on AIFwBlackboardComponent_GetValueAsVector");
static_assert(sizeof(AIFwBlackboardComponent_GetValueAsVector) == 0x000020, "Wrong size on AIFwBlackboardComponent_GetValueAsVector");
static_assert(offsetof(AIFwBlackboardComponent_GetValueAsVector, KeyName) == 0x000000, "Member 'AIFwBlackboardComponent_GetValueAsVector::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardComponent_GetValueAsVector, ReturnValue) == 0x000010, "Member 'AIFwBlackboardComponent_GetValueAsVector::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwBlackboardComponent.GetValueAsVectorArray
// 0x0020 (0x0020 - 0x0000)
struct AIFwBlackboardComponent_GetValueAsVectorArray final
{
public:
	class FString                                 KeyName;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                        ReturnValue;                                       // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwBlackboardComponent_GetValueAsVectorArray) == 0x000008, "Wrong alignment on AIFwBlackboardComponent_GetValueAsVectorArray");
static_assert(sizeof(AIFwBlackboardComponent_GetValueAsVectorArray) == 0x000020, "Wrong size on AIFwBlackboardComponent_GetValueAsVectorArray");
static_assert(offsetof(AIFwBlackboardComponent_GetValueAsVectorArray, KeyName) == 0x000000, "Member 'AIFwBlackboardComponent_GetValueAsVectorArray::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardComponent_GetValueAsVectorArray, ReturnValue) == 0x000010, "Member 'AIFwBlackboardComponent_GetValueAsVectorArray::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwBlackboardComponent.IsValidKey
// 0x0018 (0x0018 - 0x0000)
struct AIFwBlackboardComponent_IsValidKey final
{
public:
	class FString                                 KeyName;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A73[0x7];                                     // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AIFwBlackboardComponent_IsValidKey) == 0x000008, "Wrong alignment on AIFwBlackboardComponent_IsValidKey");
static_assert(sizeof(AIFwBlackboardComponent_IsValidKey) == 0x000018, "Wrong size on AIFwBlackboardComponent_IsValidKey");
static_assert(offsetof(AIFwBlackboardComponent_IsValidKey, KeyName) == 0x000000, "Member 'AIFwBlackboardComponent_IsValidKey::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwBlackboardComponent_IsValidKey, ReturnValue) == 0x000010, "Member 'AIFwBlackboardComponent_IsValidKey::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwHierarchyComponent.Add
// 0x0010 (0x0010 - 0x0000)
struct AIFwHierarchyComponent_Add final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A8C[0x7];                                     // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AIFwHierarchyComponent_Add) == 0x000008, "Wrong alignment on AIFwHierarchyComponent_Add");
static_assert(sizeof(AIFwHierarchyComponent_Add) == 0x000010, "Wrong size on AIFwHierarchyComponent_Add");
static_assert(offsetof(AIFwHierarchyComponent_Add, Actor) == 0x000000, "Member 'AIFwHierarchyComponent_Add::Actor' has a wrong offset!");
static_assert(offsetof(AIFwHierarchyComponent_Add, ReturnValue) == 0x000008, "Member 'AIFwHierarchyComponent_Add::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwHierarchyComponent.Remove
// 0x0010 (0x0010 - 0x0000)
struct AIFwHierarchyComponent_Remove final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A8D[0x7];                                     // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AIFwHierarchyComponent_Remove) == 0x000008, "Wrong alignment on AIFwHierarchyComponent_Remove");
static_assert(sizeof(AIFwHierarchyComponent_Remove) == 0x000010, "Wrong size on AIFwHierarchyComponent_Remove");
static_assert(offsetof(AIFwHierarchyComponent_Remove, Actor) == 0x000000, "Member 'AIFwHierarchyComponent_Remove::Actor' has a wrong offset!");
static_assert(offsetof(AIFwHierarchyComponent_Remove, ReturnValue) == 0x000008, "Member 'AIFwHierarchyComponent_Remove::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwHierarchyComponent.SendMessageToChildren
// 0x0020 (0x0020 - 0x0000)
struct AIFwHierarchyComponent_SendMessageToChildren final
{
public:
	class FName                                   Message;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                MessageSource;                                     // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSuccess;                                          // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A8E[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 IgnoreActor;                                       // 0x0018(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwHierarchyComponent_SendMessageToChildren) == 0x000008, "Wrong alignment on AIFwHierarchyComponent_SendMessageToChildren");
static_assert(sizeof(AIFwHierarchyComponent_SendMessageToChildren) == 0x000020, "Wrong size on AIFwHierarchyComponent_SendMessageToChildren");
static_assert(offsetof(AIFwHierarchyComponent_SendMessageToChildren, Message) == 0x000000, "Member 'AIFwHierarchyComponent_SendMessageToChildren::Message' has a wrong offset!");
static_assert(offsetof(AIFwHierarchyComponent_SendMessageToChildren, MessageSource) == 0x000008, "Member 'AIFwHierarchyComponent_SendMessageToChildren::MessageSource' has a wrong offset!");
static_assert(offsetof(AIFwHierarchyComponent_SendMessageToChildren, bSuccess) == 0x000010, "Member 'AIFwHierarchyComponent_SendMessageToChildren::bSuccess' has a wrong offset!");
static_assert(offsetof(AIFwHierarchyComponent_SendMessageToChildren, IgnoreActor) == 0x000018, "Member 'AIFwHierarchyComponent_SendMessageToChildren::IgnoreActor' has a wrong offset!");

// Function AIFramework.AIFwHierarchyComponent.SendMessageToParent
// 0x0018 (0x0018 - 0x0000)
struct AIFwHierarchyComponent_SendMessageToParent final
{
public:
	class FName                                   Message;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                MessageSource;                                     // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSuccess;                                          // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A8F[0x7];                                     // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AIFwHierarchyComponent_SendMessageToParent) == 0x000008, "Wrong alignment on AIFwHierarchyComponent_SendMessageToParent");
static_assert(sizeof(AIFwHierarchyComponent_SendMessageToParent) == 0x000018, "Wrong size on AIFwHierarchyComponent_SendMessageToParent");
static_assert(offsetof(AIFwHierarchyComponent_SendMessageToParent, Message) == 0x000000, "Member 'AIFwHierarchyComponent_SendMessageToParent::Message' has a wrong offset!");
static_assert(offsetof(AIFwHierarchyComponent_SendMessageToParent, MessageSource) == 0x000008, "Member 'AIFwHierarchyComponent_SendMessageToParent::MessageSource' has a wrong offset!");
static_assert(offsetof(AIFwHierarchyComponent_SendMessageToParent, bSuccess) == 0x000010, "Member 'AIFwHierarchyComponent_SendMessageToParent::bSuccess' has a wrong offset!");

// Function AIFramework.AIFwHierarchyComponent.SendMessageToSiblings
// 0x0018 (0x0018 - 0x0000)
struct AIFwHierarchyComponent_SendMessageToSiblings final
{
public:
	class FName                                   Message;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                MessageSource;                                     // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSuccess;                                          // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A90[0x7];                                     // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AIFwHierarchyComponent_SendMessageToSiblings) == 0x000008, "Wrong alignment on AIFwHierarchyComponent_SendMessageToSiblings");
static_assert(sizeof(AIFwHierarchyComponent_SendMessageToSiblings) == 0x000018, "Wrong size on AIFwHierarchyComponent_SendMessageToSiblings");
static_assert(offsetof(AIFwHierarchyComponent_SendMessageToSiblings, Message) == 0x000000, "Member 'AIFwHierarchyComponent_SendMessageToSiblings::Message' has a wrong offset!");
static_assert(offsetof(AIFwHierarchyComponent_SendMessageToSiblings, MessageSource) == 0x000008, "Member 'AIFwHierarchyComponent_SendMessageToSiblings::MessageSource' has a wrong offset!");
static_assert(offsetof(AIFwHierarchyComponent_SendMessageToSiblings, bSuccess) == 0x000010, "Member 'AIFwHierarchyComponent_SendMessageToSiblings::bSuccess' has a wrong offset!");

// Function AIFramework.AIFwHTNBlueprintLibrary.HTNAlways
// 0x0010 (0x0010 - 0x0000)
struct AIFwHTNBlueprintLibrary_HTNAlways final
{
public:
	class UAIFwHTNOperator*                       Operator;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAIFwHTNTempOp_Always*                  ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwHTNBlueprintLibrary_HTNAlways) == 0x000008, "Wrong alignment on AIFwHTNBlueprintLibrary_HTNAlways");
static_assert(sizeof(AIFwHTNBlueprintLibrary_HTNAlways) == 0x000010, "Wrong size on AIFwHTNBlueprintLibrary_HTNAlways");
static_assert(offsetof(AIFwHTNBlueprintLibrary_HTNAlways, Operator) == 0x000000, "Member 'AIFwHTNBlueprintLibrary_HTNAlways::Operator' has a wrong offset!");
static_assert(offsetof(AIFwHTNBlueprintLibrary_HTNAlways, ReturnValue) == 0x000008, "Member 'AIFwHTNBlueprintLibrary_HTNAlways::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwHTNBlueprintLibrary.HTNAlwaysAfter
// 0x0018 (0x0018 - 0x0000)
struct AIFwHTNBlueprintLibrary_HTNAlwaysAfter final
{
public:
	class UAIFwHTNOperator*                       OperatorA;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAIFwHTNOperator*                       OperatorB;                                         // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAIFwHTNTempOp_AlwaysAfter*             ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwHTNBlueprintLibrary_HTNAlwaysAfter) == 0x000008, "Wrong alignment on AIFwHTNBlueprintLibrary_HTNAlwaysAfter");
static_assert(sizeof(AIFwHTNBlueprintLibrary_HTNAlwaysAfter) == 0x000018, "Wrong size on AIFwHTNBlueprintLibrary_HTNAlwaysAfter");
static_assert(offsetof(AIFwHTNBlueprintLibrary_HTNAlwaysAfter, OperatorA) == 0x000000, "Member 'AIFwHTNBlueprintLibrary_HTNAlwaysAfter::OperatorA' has a wrong offset!");
static_assert(offsetof(AIFwHTNBlueprintLibrary_HTNAlwaysAfter, OperatorB) == 0x000008, "Member 'AIFwHTNBlueprintLibrary_HTNAlwaysAfter::OperatorB' has a wrong offset!");
static_assert(offsetof(AIFwHTNBlueprintLibrary_HTNAlwaysAfter, ReturnValue) == 0x000010, "Member 'AIFwHTNBlueprintLibrary_HTNAlwaysAfter::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwHTNBlueprintLibrary.HTNAlwaysBefore
// 0x0018 (0x0018 - 0x0000)
struct AIFwHTNBlueprintLibrary_HTNAlwaysBefore final
{
public:
	class UAIFwHTNOperator*                       OperatorA;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAIFwHTNOperator*                       OperatorB;                                         // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAIFwHTNTempOp_AlwaysBefore*            ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwHTNBlueprintLibrary_HTNAlwaysBefore) == 0x000008, "Wrong alignment on AIFwHTNBlueprintLibrary_HTNAlwaysBefore");
static_assert(sizeof(AIFwHTNBlueprintLibrary_HTNAlwaysBefore) == 0x000018, "Wrong size on AIFwHTNBlueprintLibrary_HTNAlwaysBefore");
static_assert(offsetof(AIFwHTNBlueprintLibrary_HTNAlwaysBefore, OperatorA) == 0x000000, "Member 'AIFwHTNBlueprintLibrary_HTNAlwaysBefore::OperatorA' has a wrong offset!");
static_assert(offsetof(AIFwHTNBlueprintLibrary_HTNAlwaysBefore, OperatorB) == 0x000008, "Member 'AIFwHTNBlueprintLibrary_HTNAlwaysBefore::OperatorB' has a wrong offset!");
static_assert(offsetof(AIFwHTNBlueprintLibrary_HTNAlwaysBefore, ReturnValue) == 0x000010, "Member 'AIFwHTNBlueprintLibrary_HTNAlwaysBefore::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwHTNBlueprintLibrary.HTNApply
// 0x0028 (0x0028 - 0x0000)
struct AIFwHTNBlueprintLibrary_HTNApply final
{
public:
	class FString                                 TaskName;                                          // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 MethodName;                                        // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAIFwHTNOperator_Apply*                 ReturnValue;                                       // 0x0020(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwHTNBlueprintLibrary_HTNApply) == 0x000008, "Wrong alignment on AIFwHTNBlueprintLibrary_HTNApply");
static_assert(sizeof(AIFwHTNBlueprintLibrary_HTNApply) == 0x000028, "Wrong size on AIFwHTNBlueprintLibrary_HTNApply");
static_assert(offsetof(AIFwHTNBlueprintLibrary_HTNApply, TaskName) == 0x000000, "Member 'AIFwHTNBlueprintLibrary_HTNApply::TaskName' has a wrong offset!");
static_assert(offsetof(AIFwHTNBlueprintLibrary_HTNApply, MethodName) == 0x000010, "Member 'AIFwHTNBlueprintLibrary_HTNApply::MethodName' has a wrong offset!");
static_assert(offsetof(AIFwHTNBlueprintLibrary_HTNApply, ReturnValue) == 0x000020, "Member 'AIFwHTNBlueprintLibrary_HTNApply::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwHTNBlueprintLibrary.HTNNot
// 0x0010 (0x0010 - 0x0000)
struct AIFwHTNBlueprintLibrary_HTNNot final
{
public:
	class UAIFwHTNOperator*                       Operator;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAIFwHTNOperator_Not*                   ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwHTNBlueprintLibrary_HTNNot) == 0x000008, "Wrong alignment on AIFwHTNBlueprintLibrary_HTNNot");
static_assert(sizeof(AIFwHTNBlueprintLibrary_HTNNot) == 0x000010, "Wrong size on AIFwHTNBlueprintLibrary_HTNNot");
static_assert(offsetof(AIFwHTNBlueprintLibrary_HTNNot, Operator) == 0x000000, "Member 'AIFwHTNBlueprintLibrary_HTNNot::Operator' has a wrong offset!");
static_assert(offsetof(AIFwHTNBlueprintLibrary_HTNNot, ReturnValue) == 0x000008, "Member 'AIFwHTNBlueprintLibrary_HTNNot::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwHTNBlueprintLibrary.HTNOccur
// 0x0018 (0x0018 - 0x0000)
struct AIFwHTNBlueprintLibrary_HTNOccur final
{
public:
	class FString                                 TaskName;                                          // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAIFwHTNOperator_Occur*                 ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwHTNBlueprintLibrary_HTNOccur) == 0x000008, "Wrong alignment on AIFwHTNBlueprintLibrary_HTNOccur");
static_assert(sizeof(AIFwHTNBlueprintLibrary_HTNOccur) == 0x000018, "Wrong size on AIFwHTNBlueprintLibrary_HTNOccur");
static_assert(offsetof(AIFwHTNBlueprintLibrary_HTNOccur, TaskName) == 0x000000, "Member 'AIFwHTNBlueprintLibrary_HTNOccur::TaskName' has a wrong offset!");
static_assert(offsetof(AIFwHTNBlueprintLibrary_HTNOccur, ReturnValue) == 0x000010, "Member 'AIFwHTNBlueprintLibrary_HTNOccur::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwHTNBlueprintLibrary.HTNSometime
// 0x0010 (0x0010 - 0x0000)
struct AIFwHTNBlueprintLibrary_HTNSometime final
{
public:
	class UAIFwHTNOperator*                       Operator;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAIFwHTNTempOp_Sometime*                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwHTNBlueprintLibrary_HTNSometime) == 0x000008, "Wrong alignment on AIFwHTNBlueprintLibrary_HTNSometime");
static_assert(sizeof(AIFwHTNBlueprintLibrary_HTNSometime) == 0x000010, "Wrong size on AIFwHTNBlueprintLibrary_HTNSometime");
static_assert(offsetof(AIFwHTNBlueprintLibrary_HTNSometime, Operator) == 0x000000, "Member 'AIFwHTNBlueprintLibrary_HTNSometime::Operator' has a wrong offset!");
static_assert(offsetof(AIFwHTNBlueprintLibrary_HTNSometime, ReturnValue) == 0x000008, "Member 'AIFwHTNBlueprintLibrary_HTNSometime::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwHTNBlueprintLibrary.HTNSometimeAfter
// 0x0018 (0x0018 - 0x0000)
struct AIFwHTNBlueprintLibrary_HTNSometimeAfter final
{
public:
	class UAIFwHTNOperator*                       OperatorA;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAIFwHTNOperator*                       OperatorB;                                         // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAIFwHTNTempOp_SometimeAfter*           ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwHTNBlueprintLibrary_HTNSometimeAfter) == 0x000008, "Wrong alignment on AIFwHTNBlueprintLibrary_HTNSometimeAfter");
static_assert(sizeof(AIFwHTNBlueprintLibrary_HTNSometimeAfter) == 0x000018, "Wrong size on AIFwHTNBlueprintLibrary_HTNSometimeAfter");
static_assert(offsetof(AIFwHTNBlueprintLibrary_HTNSometimeAfter, OperatorA) == 0x000000, "Member 'AIFwHTNBlueprintLibrary_HTNSometimeAfter::OperatorA' has a wrong offset!");
static_assert(offsetof(AIFwHTNBlueprintLibrary_HTNSometimeAfter, OperatorB) == 0x000008, "Member 'AIFwHTNBlueprintLibrary_HTNSometimeAfter::OperatorB' has a wrong offset!");
static_assert(offsetof(AIFwHTNBlueprintLibrary_HTNSometimeAfter, ReturnValue) == 0x000010, "Member 'AIFwHTNBlueprintLibrary_HTNSometimeAfter::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwHTNBlueprintLibrary.HTNSometimeBefore
// 0x0018 (0x0018 - 0x0000)
struct AIFwHTNBlueprintLibrary_HTNSometimeBefore final
{
public:
	class UAIFwHTNOperator*                       OperatorA;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAIFwHTNOperator*                       OperatorB;                                         // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAIFwHTNTempOp_SometimeBefore*          ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwHTNBlueprintLibrary_HTNSometimeBefore) == 0x000008, "Wrong alignment on AIFwHTNBlueprintLibrary_HTNSometimeBefore");
static_assert(sizeof(AIFwHTNBlueprintLibrary_HTNSometimeBefore) == 0x000018, "Wrong size on AIFwHTNBlueprintLibrary_HTNSometimeBefore");
static_assert(offsetof(AIFwHTNBlueprintLibrary_HTNSometimeBefore, OperatorA) == 0x000000, "Member 'AIFwHTNBlueprintLibrary_HTNSometimeBefore::OperatorA' has a wrong offset!");
static_assert(offsetof(AIFwHTNBlueprintLibrary_HTNSometimeBefore, OperatorB) == 0x000008, "Member 'AIFwHTNBlueprintLibrary_HTNSometimeBefore::OperatorB' has a wrong offset!");
static_assert(offsetof(AIFwHTNBlueprintLibrary_HTNSometimeBefore, ReturnValue) == 0x000010, "Member 'AIFwHTNBlueprintLibrary_HTNSometimeBefore::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwHTNPlanningComponent.FindMethodByName
// 0x0028 (0x0028 - 0x0000)
struct AIFwHTNPlanningComponent_FindMethodByName final
{
public:
	struct FAIFwHTNTask                           Task;                                              // 0x0000(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                 Param_Name;                                        // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIFwHTNMethod                         ReturnValue;                                       // 0x0018(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwHTNPlanningComponent_FindMethodByName) == 0x000008, "Wrong alignment on AIFwHTNPlanningComponent_FindMethodByName");
static_assert(sizeof(AIFwHTNPlanningComponent_FindMethodByName) == 0x000028, "Wrong size on AIFwHTNPlanningComponent_FindMethodByName");
static_assert(offsetof(AIFwHTNPlanningComponent_FindMethodByName, Task) == 0x000000, "Member 'AIFwHTNPlanningComponent_FindMethodByName::Task' has a wrong offset!");
static_assert(offsetof(AIFwHTNPlanningComponent_FindMethodByName, Param_Name) == 0x000008, "Member 'AIFwHTNPlanningComponent_FindMethodByName::Param_Name' has a wrong offset!");
static_assert(offsetof(AIFwHTNPlanningComponent_FindMethodByName, ReturnValue) == 0x000018, "Member 'AIFwHTNPlanningComponent_FindMethodByName::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwHTNPlanningComponent.IsValidMethod
// 0x0018 (0x0018 - 0x0000)
struct AIFwHTNPlanningComponent_IsValidMethod final
{
public:
	struct FAIFwHTNMethod                         Method;                                            // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A97[0x7];                                     // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AIFwHTNPlanningComponent_IsValidMethod) == 0x000008, "Wrong alignment on AIFwHTNPlanningComponent_IsValidMethod");
static_assert(sizeof(AIFwHTNPlanningComponent_IsValidMethod) == 0x000018, "Wrong size on AIFwHTNPlanningComponent_IsValidMethod");
static_assert(offsetof(AIFwHTNPlanningComponent_IsValidMethod, Method) == 0x000000, "Member 'AIFwHTNPlanningComponent_IsValidMethod::Method' has a wrong offset!");
static_assert(offsetof(AIFwHTNPlanningComponent_IsValidMethod, ReturnValue) == 0x000010, "Member 'AIFwHTNPlanningComponent_IsValidMethod::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwHTNPlanningComponent.IsValidTask
// 0x0010 (0x0010 - 0x0000)
struct AIFwHTNPlanningComponent_IsValidTask final
{
public:
	struct FAIFwHTNTask                           Task;                                              // 0x0000(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A98[0x7];                                     // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AIFwHTNPlanningComponent_IsValidTask) == 0x000008, "Wrong alignment on AIFwHTNPlanningComponent_IsValidTask");
static_assert(sizeof(AIFwHTNPlanningComponent_IsValidTask) == 0x000010, "Wrong size on AIFwHTNPlanningComponent_IsValidTask");
static_assert(offsetof(AIFwHTNPlanningComponent_IsValidTask, Task) == 0x000000, "Member 'AIFwHTNPlanningComponent_IsValidTask::Task' has a wrong offset!");
static_assert(offsetof(AIFwHTNPlanningComponent_IsValidTask, ReturnValue) == 0x000008, "Member 'AIFwHTNPlanningComponent_IsValidTask::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwHTNPlanningComponent.SetName
// 0x0020 (0x0020 - 0x0000)
struct AIFwHTNPlanningComponent_SetName final
{
public:
	struct FAIFwHTNMethod                         Method;                                            // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                 Param_Name;                                        // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwHTNPlanningComponent_SetName) == 0x000008, "Wrong alignment on AIFwHTNPlanningComponent_SetName");
static_assert(sizeof(AIFwHTNPlanningComponent_SetName) == 0x000020, "Wrong size on AIFwHTNPlanningComponent_SetName");
static_assert(offsetof(AIFwHTNPlanningComponent_SetName, Method) == 0x000000, "Member 'AIFwHTNPlanningComponent_SetName::Method' has a wrong offset!");
static_assert(offsetof(AIFwHTNPlanningComponent_SetName, Param_Name) == 0x000010, "Member 'AIFwHTNPlanningComponent_SetName::Param_Name' has a wrong offset!");

// Function AIFramework.AIFwHTNPlanningComponent.AddGoalPreference
// 0x0020 (0x0020 - 0x0000)
struct AIFwHTNPlanningComponent_AddGoalPreference final
{
public:
	class FString                                 Param_Name;                                        // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAIFwHTNOperator*                       Operator;                                          // 0x0010(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bHardConstraint;                                   // 0x0018(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A99[0x7];                                     // 0x0019(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AIFwHTNPlanningComponent_AddGoalPreference) == 0x000008, "Wrong alignment on AIFwHTNPlanningComponent_AddGoalPreference");
static_assert(sizeof(AIFwHTNPlanningComponent_AddGoalPreference) == 0x000020, "Wrong size on AIFwHTNPlanningComponent_AddGoalPreference");
static_assert(offsetof(AIFwHTNPlanningComponent_AddGoalPreference, Param_Name) == 0x000000, "Member 'AIFwHTNPlanningComponent_AddGoalPreference::Param_Name' has a wrong offset!");
static_assert(offsetof(AIFwHTNPlanningComponent_AddGoalPreference, Operator) == 0x000010, "Member 'AIFwHTNPlanningComponent_AddGoalPreference::Operator' has a wrong offset!");
static_assert(offsetof(AIFwHTNPlanningComponent_AddGoalPreference, bHardConstraint) == 0x000018, "Member 'AIFwHTNPlanningComponent_AddGoalPreference::bHardConstraint' has a wrong offset!");

// Function AIFramework.AIFwHTNPlanningComponent.AddMetricWeight
// 0x0018 (0x0018 - 0x0000)
struct AIFwHTNPlanningComponent_AddMetricWeight final
{
public:
	class FString                                 PreferenceName;                                    // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Weight;                                            // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A9A[0x4];                                     // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AIFwHTNPlanningComponent_AddMetricWeight) == 0x000008, "Wrong alignment on AIFwHTNPlanningComponent_AddMetricWeight");
static_assert(sizeof(AIFwHTNPlanningComponent_AddMetricWeight) == 0x000018, "Wrong size on AIFwHTNPlanningComponent_AddMetricWeight");
static_assert(offsetof(AIFwHTNPlanningComponent_AddMetricWeight, PreferenceName) == 0x000000, "Member 'AIFwHTNPlanningComponent_AddMetricWeight::PreferenceName' has a wrong offset!");
static_assert(offsetof(AIFwHTNPlanningComponent_AddMetricWeight, Weight) == 0x000010, "Member 'AIFwHTNPlanningComponent_AddMetricWeight::Weight' has a wrong offset!");

// Function AIFramework.AIFwHTNPlanningComponent.AddPreconditionPreference
// 0x0040 (0x0040 - 0x0000)
struct AIFwHTNPlanningComponent_AddPreconditionPreference final
{
public:
	class FString                                 Param_Name;                                        // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 TaskName;                                          // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 MethodName;                                        // 0x0020(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAIFwHTNOperator*                       Operator;                                          // 0x0030(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bHardConstraint;                                   // 0x0038(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A9B[0x7];                                     // 0x0039(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AIFwHTNPlanningComponent_AddPreconditionPreference) == 0x000008, "Wrong alignment on AIFwHTNPlanningComponent_AddPreconditionPreference");
static_assert(sizeof(AIFwHTNPlanningComponent_AddPreconditionPreference) == 0x000040, "Wrong size on AIFwHTNPlanningComponent_AddPreconditionPreference");
static_assert(offsetof(AIFwHTNPlanningComponent_AddPreconditionPreference, Param_Name) == 0x000000, "Member 'AIFwHTNPlanningComponent_AddPreconditionPreference::Param_Name' has a wrong offset!");
static_assert(offsetof(AIFwHTNPlanningComponent_AddPreconditionPreference, TaskName) == 0x000010, "Member 'AIFwHTNPlanningComponent_AddPreconditionPreference::TaskName' has a wrong offset!");
static_assert(offsetof(AIFwHTNPlanningComponent_AddPreconditionPreference, MethodName) == 0x000020, "Member 'AIFwHTNPlanningComponent_AddPreconditionPreference::MethodName' has a wrong offset!");
static_assert(offsetof(AIFwHTNPlanningComponent_AddPreconditionPreference, Operator) == 0x000030, "Member 'AIFwHTNPlanningComponent_AddPreconditionPreference::Operator' has a wrong offset!");
static_assert(offsetof(AIFwHTNPlanningComponent_AddPreconditionPreference, bHardConstraint) == 0x000038, "Member 'AIFwHTNPlanningComponent_AddPreconditionPreference::bHardConstraint' has a wrong offset!");

// Function AIFramework.AIFwHTNPlanningComponent.AddTrajectoryPreference
// 0x0020 (0x0020 - 0x0000)
struct AIFwHTNPlanningComponent_AddTrajectoryPreference final
{
public:
	class FString                                 Param_Name;                                        // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAIFwHTNTemporalModalOperator*          TemporalOperator;                                  // 0x0010(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bHardConstraint;                                   // 0x0018(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A9C[0x7];                                     // 0x0019(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AIFwHTNPlanningComponent_AddTrajectoryPreference) == 0x000008, "Wrong alignment on AIFwHTNPlanningComponent_AddTrajectoryPreference");
static_assert(sizeof(AIFwHTNPlanningComponent_AddTrajectoryPreference) == 0x000020, "Wrong size on AIFwHTNPlanningComponent_AddTrajectoryPreference");
static_assert(offsetof(AIFwHTNPlanningComponent_AddTrajectoryPreference, Param_Name) == 0x000000, "Member 'AIFwHTNPlanningComponent_AddTrajectoryPreference::Param_Name' has a wrong offset!");
static_assert(offsetof(AIFwHTNPlanningComponent_AddTrajectoryPreference, TemporalOperator) == 0x000010, "Member 'AIFwHTNPlanningComponent_AddTrajectoryPreference::TemporalOperator' has a wrong offset!");
static_assert(offsetof(AIFwHTNPlanningComponent_AddTrajectoryPreference, bHardConstraint) == 0x000018, "Member 'AIFwHTNPlanningComponent_AddTrajectoryPreference::bHardConstraint' has a wrong offset!");

// Function AIFramework.AIFwHTNPlanningComponent.AppendDomain
// 0x0010 (0x0010 - 0x0000)
struct AIFwHTNPlanningComponent_AppendDomain final
{
public:
	class UAIFwHTNDomain*                         NewDomain;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOverrideCompound;                                 // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A9D[0x7];                                     // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AIFwHTNPlanningComponent_AppendDomain) == 0x000008, "Wrong alignment on AIFwHTNPlanningComponent_AppendDomain");
static_assert(sizeof(AIFwHTNPlanningComponent_AppendDomain) == 0x000010, "Wrong size on AIFwHTNPlanningComponent_AppendDomain");
static_assert(offsetof(AIFwHTNPlanningComponent_AppendDomain, NewDomain) == 0x000000, "Member 'AIFwHTNPlanningComponent_AppendDomain::NewDomain' has a wrong offset!");
static_assert(offsetof(AIFwHTNPlanningComponent_AppendDomain, bOverrideCompound) == 0x000008, "Member 'AIFwHTNPlanningComponent_AppendDomain::bOverrideCompound' has a wrong offset!");

// Function AIFramework.AIFwHTNPlanningComponent.FindMethod
// 0x0030 (0x0030 - 0x0000)
struct AIFwHTNPlanningComponent_FindMethod final
{
public:
	class FString                                 TaskName;                                          // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 MethodName;                                        // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIFwHTNMethod                         ReturnValue;                                       // 0x0020(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwHTNPlanningComponent_FindMethod) == 0x000008, "Wrong alignment on AIFwHTNPlanningComponent_FindMethod");
static_assert(sizeof(AIFwHTNPlanningComponent_FindMethod) == 0x000030, "Wrong size on AIFwHTNPlanningComponent_FindMethod");
static_assert(offsetof(AIFwHTNPlanningComponent_FindMethod, TaskName) == 0x000000, "Member 'AIFwHTNPlanningComponent_FindMethod::TaskName' has a wrong offset!");
static_assert(offsetof(AIFwHTNPlanningComponent_FindMethod, MethodName) == 0x000010, "Member 'AIFwHTNPlanningComponent_FindMethod::MethodName' has a wrong offset!");
static_assert(offsetof(AIFwHTNPlanningComponent_FindMethod, ReturnValue) == 0x000020, "Member 'AIFwHTNPlanningComponent_FindMethod::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwHTNPlanningComponent.FindTask
// 0x0018 (0x0018 - 0x0000)
struct AIFwHTNPlanningComponent_FindTask final
{
public:
	class FString                                 Param_Name;                                        // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIFwHTNTask                           ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwHTNPlanningComponent_FindTask) == 0x000008, "Wrong alignment on AIFwHTNPlanningComponent_FindTask");
static_assert(sizeof(AIFwHTNPlanningComponent_FindTask) == 0x000018, "Wrong size on AIFwHTNPlanningComponent_FindTask");
static_assert(offsetof(AIFwHTNPlanningComponent_FindTask, Param_Name) == 0x000000, "Member 'AIFwHTNPlanningComponent_FindTask::Param_Name' has a wrong offset!");
static_assert(offsetof(AIFwHTNPlanningComponent_FindTask, ReturnValue) == 0x000010, "Member 'AIFwHTNPlanningComponent_FindTask::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwHTNState.SetValueAsBool
// 0x0018 (0x0018 - 0x0000)
struct AIFwHTNState_SetValueAsBool final
{
public:
	class FString                                 KeyName;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          BoolValue;                                         // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A9F[0x7];                                     // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AIFwHTNState_SetValueAsBool) == 0x000008, "Wrong alignment on AIFwHTNState_SetValueAsBool");
static_assert(sizeof(AIFwHTNState_SetValueAsBool) == 0x000018, "Wrong size on AIFwHTNState_SetValueAsBool");
static_assert(offsetof(AIFwHTNState_SetValueAsBool, KeyName) == 0x000000, "Member 'AIFwHTNState_SetValueAsBool::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwHTNState_SetValueAsBool, BoolValue) == 0x000010, "Member 'AIFwHTNState_SetValueAsBool::BoolValue' has a wrong offset!");

// Function AIFramework.AIFwHTNState.SetValueAsEnum
// 0x0018 (0x0018 - 0x0000)
struct AIFwHTNState_SetValueAsEnum final
{
public:
	class FString                                 KeyName;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         EnumValue;                                         // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1AA0[0x7];                                     // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AIFwHTNState_SetValueAsEnum) == 0x000008, "Wrong alignment on AIFwHTNState_SetValueAsEnum");
static_assert(sizeof(AIFwHTNState_SetValueAsEnum) == 0x000018, "Wrong size on AIFwHTNState_SetValueAsEnum");
static_assert(offsetof(AIFwHTNState_SetValueAsEnum, KeyName) == 0x000000, "Member 'AIFwHTNState_SetValueAsEnum::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwHTNState_SetValueAsEnum, EnumValue) == 0x000010, "Member 'AIFwHTNState_SetValueAsEnum::EnumValue' has a wrong offset!");

// Function AIFramework.AIFwHTNState.SetValueAsFloat
// 0x0018 (0x0018 - 0x0000)
struct AIFwHTNState_SetValueAsFloat final
{
public:
	class FString                                 KeyName;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FloatValue;                                        // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1AA1[0x4];                                     // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AIFwHTNState_SetValueAsFloat) == 0x000008, "Wrong alignment on AIFwHTNState_SetValueAsFloat");
static_assert(sizeof(AIFwHTNState_SetValueAsFloat) == 0x000018, "Wrong size on AIFwHTNState_SetValueAsFloat");
static_assert(offsetof(AIFwHTNState_SetValueAsFloat, KeyName) == 0x000000, "Member 'AIFwHTNState_SetValueAsFloat::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwHTNState_SetValueAsFloat, FloatValue) == 0x000010, "Member 'AIFwHTNState_SetValueAsFloat::FloatValue' has a wrong offset!");

// Function AIFramework.AIFwHTNState.SetValueAsInt
// 0x0018 (0x0018 - 0x0000)
struct AIFwHTNState_SetValueAsInt final
{
public:
	class FString                                 KeyName;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         IntValue;                                          // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1AA2[0x4];                                     // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AIFwHTNState_SetValueAsInt) == 0x000008, "Wrong alignment on AIFwHTNState_SetValueAsInt");
static_assert(sizeof(AIFwHTNState_SetValueAsInt) == 0x000018, "Wrong size on AIFwHTNState_SetValueAsInt");
static_assert(offsetof(AIFwHTNState_SetValueAsInt, KeyName) == 0x000000, "Member 'AIFwHTNState_SetValueAsInt::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwHTNState_SetValueAsInt, IntValue) == 0x000010, "Member 'AIFwHTNState_SetValueAsInt::IntValue' has a wrong offset!");

// Function AIFramework.AIFwHTNState.GetValueAsBool
// 0x0018 (0x0018 - 0x0000)
struct AIFwHTNState_GetValueAsBool final
{
public:
	class FString                                 KeyName;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1AA3[0x7];                                     // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AIFwHTNState_GetValueAsBool) == 0x000008, "Wrong alignment on AIFwHTNState_GetValueAsBool");
static_assert(sizeof(AIFwHTNState_GetValueAsBool) == 0x000018, "Wrong size on AIFwHTNState_GetValueAsBool");
static_assert(offsetof(AIFwHTNState_GetValueAsBool, KeyName) == 0x000000, "Member 'AIFwHTNState_GetValueAsBool::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwHTNState_GetValueAsBool, ReturnValue) == 0x000010, "Member 'AIFwHTNState_GetValueAsBool::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwHTNState.GetValueAsEnum
// 0x0018 (0x0018 - 0x0000)
struct AIFwHTNState_GetValueAsEnum final
{
public:
	class FString                                 KeyName;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1AA4[0x7];                                     // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AIFwHTNState_GetValueAsEnum) == 0x000008, "Wrong alignment on AIFwHTNState_GetValueAsEnum");
static_assert(sizeof(AIFwHTNState_GetValueAsEnum) == 0x000018, "Wrong size on AIFwHTNState_GetValueAsEnum");
static_assert(offsetof(AIFwHTNState_GetValueAsEnum, KeyName) == 0x000000, "Member 'AIFwHTNState_GetValueAsEnum::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwHTNState_GetValueAsEnum, ReturnValue) == 0x000010, "Member 'AIFwHTNState_GetValueAsEnum::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwHTNState.GetValueAsFloat
// 0x0018 (0x0018 - 0x0000)
struct AIFwHTNState_GetValueAsFloat final
{
public:
	class FString                                 KeyName;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReturnValue;                                       // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1AA5[0x4];                                     // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AIFwHTNState_GetValueAsFloat) == 0x000008, "Wrong alignment on AIFwHTNState_GetValueAsFloat");
static_assert(sizeof(AIFwHTNState_GetValueAsFloat) == 0x000018, "Wrong size on AIFwHTNState_GetValueAsFloat");
static_assert(offsetof(AIFwHTNState_GetValueAsFloat, KeyName) == 0x000000, "Member 'AIFwHTNState_GetValueAsFloat::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwHTNState_GetValueAsFloat, ReturnValue) == 0x000010, "Member 'AIFwHTNState_GetValueAsFloat::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwHTNState.GetValueAsInt
// 0x0018 (0x0018 - 0x0000)
struct AIFwHTNState_GetValueAsInt final
{
public:
	class FString                                 KeyName;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1AA6[0x4];                                     // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AIFwHTNState_GetValueAsInt) == 0x000008, "Wrong alignment on AIFwHTNState_GetValueAsInt");
static_assert(sizeof(AIFwHTNState_GetValueAsInt) == 0x000018, "Wrong size on AIFwHTNState_GetValueAsInt");
static_assert(offsetof(AIFwHTNState_GetValueAsInt, KeyName) == 0x000000, "Member 'AIFwHTNState_GetValueAsInt::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwHTNState_GetValueAsInt, ReturnValue) == 0x000010, "Member 'AIFwHTNState_GetValueAsInt::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwHTNState.IsValidKey
// 0x0018 (0x0018 - 0x0000)
struct AIFwHTNState_IsValidKey final
{
public:
	class FString                                 KeyName;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1AA7[0x7];                                     // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AIFwHTNState_IsValidKey) == 0x000008, "Wrong alignment on AIFwHTNState_IsValidKey");
static_assert(sizeof(AIFwHTNState_IsValidKey) == 0x000018, "Wrong size on AIFwHTNState_IsValidKey");
static_assert(offsetof(AIFwHTNState_IsValidKey, KeyName) == 0x000000, "Member 'AIFwHTNState_IsValidKey::KeyName' has a wrong offset!");
static_assert(offsetof(AIFwHTNState_IsValidKey, ReturnValue) == 0x000010, "Member 'AIFwHTNState_IsValidKey::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwInfluenceMapLayer.RegisterSource
// 0x0010 (0x0010 - 0x0000)
struct AIFwInfluenceMapLayer_RegisterSource final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Radius;                                            // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Value;                                             // 0x000C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwInfluenceMapLayer_RegisterSource) == 0x000008, "Wrong alignment on AIFwInfluenceMapLayer_RegisterSource");
static_assert(sizeof(AIFwInfluenceMapLayer_RegisterSource) == 0x000010, "Wrong size on AIFwInfluenceMapLayer_RegisterSource");
static_assert(offsetof(AIFwInfluenceMapLayer_RegisterSource, Actor) == 0x000000, "Member 'AIFwInfluenceMapLayer_RegisterSource::Actor' has a wrong offset!");
static_assert(offsetof(AIFwInfluenceMapLayer_RegisterSource, Radius) == 0x000008, "Member 'AIFwInfluenceMapLayer_RegisterSource::Radius' has a wrong offset!");
static_assert(offsetof(AIFwInfluenceMapLayer_RegisterSource, Value) == 0x00000C, "Member 'AIFwInfluenceMapLayer_RegisterSource::Value' has a wrong offset!");

// Function AIFramework.AIFwInfluenceMapManager.CreateOrGetLayer
// 0x0020 (0x0020 - 0x0000)
struct AIFwInfluenceMapManager_CreateOrGetLayer final
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Param_Name;                                        // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAIFwInfluenceMapLayer*                 ReturnValue;                                       // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwInfluenceMapManager_CreateOrGetLayer) == 0x000008, "Wrong alignment on AIFwInfluenceMapManager_CreateOrGetLayer");
static_assert(sizeof(AIFwInfluenceMapManager_CreateOrGetLayer) == 0x000020, "Wrong size on AIFwInfluenceMapManager_CreateOrGetLayer");
static_assert(offsetof(AIFwInfluenceMapManager_CreateOrGetLayer, WorldContextObject) == 0x000000, "Member 'AIFwInfluenceMapManager_CreateOrGetLayer::WorldContextObject' has a wrong offset!");
static_assert(offsetof(AIFwInfluenceMapManager_CreateOrGetLayer, Param_Name) == 0x000008, "Member 'AIFwInfluenceMapManager_CreateOrGetLayer::Param_Name' has a wrong offset!");
static_assert(offsetof(AIFwInfluenceMapManager_CreateOrGetLayer, ReturnValue) == 0x000018, "Member 'AIFwInfluenceMapManager_CreateOrGetLayer::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwReactiveComponent.AddSkill
// 0x0008 (0x0008 - 0x0000)
struct AIFwReactiveComponent_AddSkill final
{
public:
	TSubclassOf<class UAIFwReactiveSkill>         Skill;                                             // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwReactiveComponent_AddSkill) == 0x000008, "Wrong alignment on AIFwReactiveComponent_AddSkill");
static_assert(sizeof(AIFwReactiveComponent_AddSkill) == 0x000008, "Wrong size on AIFwReactiveComponent_AddSkill");
static_assert(offsetof(AIFwReactiveComponent_AddSkill, Skill) == 0x000000, "Member 'AIFwReactiveComponent_AddSkill::Skill' has a wrong offset!");

// Function AIFramework.AIFwReactiveSkill.NewAITask
// 0x0018 (0x0018 - 0x0000)
struct AIFwReactiveSkill_NewAITask final
{
public:
	TSubclassOf<class UAITask>                    TaskClass;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAITaskPriority                               InPriority;                                        // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1ABF[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAITask*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwReactiveSkill_NewAITask) == 0x000008, "Wrong alignment on AIFwReactiveSkill_NewAITask");
static_assert(sizeof(AIFwReactiveSkill_NewAITask) == 0x000018, "Wrong size on AIFwReactiveSkill_NewAITask");
static_assert(offsetof(AIFwReactiveSkill_NewAITask, TaskClass) == 0x000000, "Member 'AIFwReactiveSkill_NewAITask::TaskClass' has a wrong offset!");
static_assert(offsetof(AIFwReactiveSkill_NewAITask, InPriority) == 0x000008, "Member 'AIFwReactiveSkill_NewAITask::InPriority' has a wrong offset!");
static_assert(offsetof(AIFwReactiveSkill_NewAITask, ReturnValue) == 0x000010, "Member 'AIFwReactiveSkill_NewAITask::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwReactiveSkill.RunAITask
// 0x0008 (0x0008 - 0x0000)
struct AIFwReactiveSkill_RunAITask final
{
public:
	class UAITask*                                Task;                                              // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwReactiveSkill_RunAITask) == 0x000008, "Wrong alignment on AIFwReactiveSkill_RunAITask");
static_assert(sizeof(AIFwReactiveSkill_RunAITask) == 0x000008, "Wrong size on AIFwReactiveSkill_RunAITask");
static_assert(offsetof(AIFwReactiveSkill_RunAITask, Task) == 0x000000, "Member 'AIFwReactiveSkill_RunAITask::Task' has a wrong offset!");

// Function AIFramework.AIFwReactiveSkill_Message.ReceivePulse
// 0x0010 (0x0010 - 0x0000)
struct AIFwReactiveSkill_Message_ReceivePulse final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSuccess;                                          // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1AC1[0x7];                                     // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AIFwReactiveSkill_Message_ReceivePulse) == 0x000008, "Wrong alignment on AIFwReactiveSkill_Message_ReceivePulse");
static_assert(sizeof(AIFwReactiveSkill_Message_ReceivePulse) == 0x000010, "Wrong size on AIFwReactiveSkill_Message_ReceivePulse");
static_assert(offsetof(AIFwReactiveSkill_Message_ReceivePulse, Sender) == 0x000000, "Member 'AIFwReactiveSkill_Message_ReceivePulse::Sender' has a wrong offset!");
static_assert(offsetof(AIFwReactiveSkill_Message_ReceivePulse, bSuccess) == 0x000008, "Member 'AIFwReactiveSkill_Message_ReceivePulse::bSuccess' has a wrong offset!");

// Function AIFramework.AIFwReactiveSkill_SensedTarget.ReceiveOnLost
// 0x0008 (0x0008 - 0x0000)
struct AIFwReactiveSkill_SensedTarget_ReceiveOnLost final
{
public:
	class AActor*                                 Target;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwReactiveSkill_SensedTarget_ReceiveOnLost) == 0x000008, "Wrong alignment on AIFwReactiveSkill_SensedTarget_ReceiveOnLost");
static_assert(sizeof(AIFwReactiveSkill_SensedTarget_ReceiveOnLost) == 0x000008, "Wrong size on AIFwReactiveSkill_SensedTarget_ReceiveOnLost");
static_assert(offsetof(AIFwReactiveSkill_SensedTarget_ReceiveOnLost, Target) == 0x000000, "Member 'AIFwReactiveSkill_SensedTarget_ReceiveOnLost::Target' has a wrong offset!");

// Function AIFramework.AIFwReactiveSkill_SensedTarget.ReceiveOnSensed
// 0x0008 (0x0008 - 0x0000)
struct AIFwReactiveSkill_SensedTarget_ReceiveOnSensed final
{
public:
	class AActor*                                 Target;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwReactiveSkill_SensedTarget_ReceiveOnSensed) == 0x000008, "Wrong alignment on AIFwReactiveSkill_SensedTarget_ReceiveOnSensed");
static_assert(sizeof(AIFwReactiveSkill_SensedTarget_ReceiveOnSensed) == 0x000008, "Wrong size on AIFwReactiveSkill_SensedTarget_ReceiveOnSensed");
static_assert(offsetof(AIFwReactiveSkill_SensedTarget_ReceiveOnSensed, Target) == 0x000000, "Member 'AIFwReactiveSkill_SensedTarget_ReceiveOnSensed::Target' has a wrong offset!");

// Function AIFramework.AIFwReactiveSkill_TakeDamage.ReceiveAnyDamage
// 0x0020 (0x0020 - 0x0000)
struct AIFwReactiveSkill_TakeDamage_ReceiveAnyDamage final
{
public:
	float                                         Damage;                                            // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1AC5[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UDamageType*                      DamageType;                                        // 0x0008(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                            InstigatedBy;                                      // 0x0010(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 DamageCauser;                                      // 0x0018(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwReactiveSkill_TakeDamage_ReceiveAnyDamage) == 0x000008, "Wrong alignment on AIFwReactiveSkill_TakeDamage_ReceiveAnyDamage");
static_assert(sizeof(AIFwReactiveSkill_TakeDamage_ReceiveAnyDamage) == 0x000020, "Wrong size on AIFwReactiveSkill_TakeDamage_ReceiveAnyDamage");
static_assert(offsetof(AIFwReactiveSkill_TakeDamage_ReceiveAnyDamage, Damage) == 0x000000, "Member 'AIFwReactiveSkill_TakeDamage_ReceiveAnyDamage::Damage' has a wrong offset!");
static_assert(offsetof(AIFwReactiveSkill_TakeDamage_ReceiveAnyDamage, DamageType) == 0x000008, "Member 'AIFwReactiveSkill_TakeDamage_ReceiveAnyDamage::DamageType' has a wrong offset!");
static_assert(offsetof(AIFwReactiveSkill_TakeDamage_ReceiveAnyDamage, InstigatedBy) == 0x000010, "Member 'AIFwReactiveSkill_TakeDamage_ReceiveAnyDamage::InstigatedBy' has a wrong offset!");
static_assert(offsetof(AIFwReactiveSkill_TakeDamage_ReceiveAnyDamage, DamageCauser) == 0x000018, "Member 'AIFwReactiveSkill_TakeDamage_ReceiveAnyDamage::DamageCauser' has a wrong offset!");

// Function AIFramework.AIFwReactiveSkill_TakeDamage.ReceivePointDamage
// 0x0050 (0x0050 - 0x0000)
struct AIFwReactiveSkill_TakeDamage_ReceivePointDamage final
{
public:
	float                                         Damage;                                            // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1AC6[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UDamageType*                      DamageType;                                        // 0x0008(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                HitLocation;                                       // 0x0010(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1AC7[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    HitComponent;                                      // 0x0020(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   BoneName;                                          // 0x0028(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                ShotFromDirection;                                 // 0x0030(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1AC8[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            InstigatedBy;                                      // 0x0040(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 DamageCauser;                                      // 0x0048(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwReactiveSkill_TakeDamage_ReceivePointDamage) == 0x000008, "Wrong alignment on AIFwReactiveSkill_TakeDamage_ReceivePointDamage");
static_assert(sizeof(AIFwReactiveSkill_TakeDamage_ReceivePointDamage) == 0x000050, "Wrong size on AIFwReactiveSkill_TakeDamage_ReceivePointDamage");
static_assert(offsetof(AIFwReactiveSkill_TakeDamage_ReceivePointDamage, Damage) == 0x000000, "Member 'AIFwReactiveSkill_TakeDamage_ReceivePointDamage::Damage' has a wrong offset!");
static_assert(offsetof(AIFwReactiveSkill_TakeDamage_ReceivePointDamage, DamageType) == 0x000008, "Member 'AIFwReactiveSkill_TakeDamage_ReceivePointDamage::DamageType' has a wrong offset!");
static_assert(offsetof(AIFwReactiveSkill_TakeDamage_ReceivePointDamage, HitLocation) == 0x000010, "Member 'AIFwReactiveSkill_TakeDamage_ReceivePointDamage::HitLocation' has a wrong offset!");
static_assert(offsetof(AIFwReactiveSkill_TakeDamage_ReceivePointDamage, HitComponent) == 0x000020, "Member 'AIFwReactiveSkill_TakeDamage_ReceivePointDamage::HitComponent' has a wrong offset!");
static_assert(offsetof(AIFwReactiveSkill_TakeDamage_ReceivePointDamage, BoneName) == 0x000028, "Member 'AIFwReactiveSkill_TakeDamage_ReceivePointDamage::BoneName' has a wrong offset!");
static_assert(offsetof(AIFwReactiveSkill_TakeDamage_ReceivePointDamage, ShotFromDirection) == 0x000030, "Member 'AIFwReactiveSkill_TakeDamage_ReceivePointDamage::ShotFromDirection' has a wrong offset!");
static_assert(offsetof(AIFwReactiveSkill_TakeDamage_ReceivePointDamage, InstigatedBy) == 0x000040, "Member 'AIFwReactiveSkill_TakeDamage_ReceivePointDamage::InstigatedBy' has a wrong offset!");
static_assert(offsetof(AIFwReactiveSkill_TakeDamage_ReceivePointDamage, DamageCauser) == 0x000048, "Member 'AIFwReactiveSkill_TakeDamage_ReceivePointDamage::DamageCauser' has a wrong offset!");

// Function AIFramework.AIFwReactiveSkill_TakeDamage.TakeAnyDamageImpl
// 0x0028 (0x0028 - 0x0000)
struct AIFwReactiveSkill_TakeDamage_TakeAnyDamageImpl final
{
public:
	class AActor*                                 DamagedActor;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Damage;                                            // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1AC9[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UDamageType*                      DamageType;                                        // 0x0010(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                            InstigatedBy;                                      // 0x0018(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 DamageCauser;                                      // 0x0020(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwReactiveSkill_TakeDamage_TakeAnyDamageImpl) == 0x000008, "Wrong alignment on AIFwReactiveSkill_TakeDamage_TakeAnyDamageImpl");
static_assert(sizeof(AIFwReactiveSkill_TakeDamage_TakeAnyDamageImpl) == 0x000028, "Wrong size on AIFwReactiveSkill_TakeDamage_TakeAnyDamageImpl");
static_assert(offsetof(AIFwReactiveSkill_TakeDamage_TakeAnyDamageImpl, DamagedActor) == 0x000000, "Member 'AIFwReactiveSkill_TakeDamage_TakeAnyDamageImpl::DamagedActor' has a wrong offset!");
static_assert(offsetof(AIFwReactiveSkill_TakeDamage_TakeAnyDamageImpl, Damage) == 0x000008, "Member 'AIFwReactiveSkill_TakeDamage_TakeAnyDamageImpl::Damage' has a wrong offset!");
static_assert(offsetof(AIFwReactiveSkill_TakeDamage_TakeAnyDamageImpl, DamageType) == 0x000010, "Member 'AIFwReactiveSkill_TakeDamage_TakeAnyDamageImpl::DamageType' has a wrong offset!");
static_assert(offsetof(AIFwReactiveSkill_TakeDamage_TakeAnyDamageImpl, InstigatedBy) == 0x000018, "Member 'AIFwReactiveSkill_TakeDamage_TakeAnyDamageImpl::InstigatedBy' has a wrong offset!");
static_assert(offsetof(AIFwReactiveSkill_TakeDamage_TakeAnyDamageImpl, DamageCauser) == 0x000020, "Member 'AIFwReactiveSkill_TakeDamage_TakeAnyDamageImpl::DamageCauser' has a wrong offset!");

// Function AIFramework.AIFwReactiveSkill_TakeDamage.TakePointDamageImpl
// 0x0058 (0x0058 - 0x0000)
struct AIFwReactiveSkill_TakeDamage_TakePointDamageImpl final
{
public:
	class AActor*                                 DamagedActor;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Damage;                                            // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1ACA[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            InstigatedBy;                                      // 0x0010(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                HitLocation;                                       // 0x0018(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1ACB[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    HitComponent;                                      // 0x0028(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   BoneName;                                          // 0x0030(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                ShotFromDirection;                                 // 0x0038(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1ACC[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UDamageType*                      DamageType;                                        // 0x0048(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 DamageCauser;                                      // 0x0050(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwReactiveSkill_TakeDamage_TakePointDamageImpl) == 0x000008, "Wrong alignment on AIFwReactiveSkill_TakeDamage_TakePointDamageImpl");
static_assert(sizeof(AIFwReactiveSkill_TakeDamage_TakePointDamageImpl) == 0x000058, "Wrong size on AIFwReactiveSkill_TakeDamage_TakePointDamageImpl");
static_assert(offsetof(AIFwReactiveSkill_TakeDamage_TakePointDamageImpl, DamagedActor) == 0x000000, "Member 'AIFwReactiveSkill_TakeDamage_TakePointDamageImpl::DamagedActor' has a wrong offset!");
static_assert(offsetof(AIFwReactiveSkill_TakeDamage_TakePointDamageImpl, Damage) == 0x000008, "Member 'AIFwReactiveSkill_TakeDamage_TakePointDamageImpl::Damage' has a wrong offset!");
static_assert(offsetof(AIFwReactiveSkill_TakeDamage_TakePointDamageImpl, InstigatedBy) == 0x000010, "Member 'AIFwReactiveSkill_TakeDamage_TakePointDamageImpl::InstigatedBy' has a wrong offset!");
static_assert(offsetof(AIFwReactiveSkill_TakeDamage_TakePointDamageImpl, HitLocation) == 0x000018, "Member 'AIFwReactiveSkill_TakeDamage_TakePointDamageImpl::HitLocation' has a wrong offset!");
static_assert(offsetof(AIFwReactiveSkill_TakeDamage_TakePointDamageImpl, HitComponent) == 0x000028, "Member 'AIFwReactiveSkill_TakeDamage_TakePointDamageImpl::HitComponent' has a wrong offset!");
static_assert(offsetof(AIFwReactiveSkill_TakeDamage_TakePointDamageImpl, BoneName) == 0x000030, "Member 'AIFwReactiveSkill_TakeDamage_TakePointDamageImpl::BoneName' has a wrong offset!");
static_assert(offsetof(AIFwReactiveSkill_TakeDamage_TakePointDamageImpl, ShotFromDirection) == 0x000038, "Member 'AIFwReactiveSkill_TakeDamage_TakePointDamageImpl::ShotFromDirection' has a wrong offset!");
static_assert(offsetof(AIFwReactiveSkill_TakeDamage_TakePointDamageImpl, DamageType) == 0x000048, "Member 'AIFwReactiveSkill_TakeDamage_TakePointDamageImpl::DamageType' has a wrong offset!");
static_assert(offsetof(AIFwReactiveSkill_TakeDamage_TakePointDamageImpl, DamageCauser) == 0x000050, "Member 'AIFwReactiveSkill_TakeDamage_TakePointDamageImpl::DamageCauser' has a wrong offset!");

// Function AIFramework.AIFwRuntimeSettings.OnNavigationGenerationFinished
// 0x0008 (0x0008 - 0x0000)
struct AIFwRuntimeSettings_OnNavigationGenerationFinished final
{
public:
	class ANavigationData*                        NavData;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwRuntimeSettings_OnNavigationGenerationFinished) == 0x000008, "Wrong alignment on AIFwRuntimeSettings_OnNavigationGenerationFinished");
static_assert(sizeof(AIFwRuntimeSettings_OnNavigationGenerationFinished) == 0x000008, "Wrong size on AIFwRuntimeSettings_OnNavigationGenerationFinished");
static_assert(offsetof(AIFwRuntimeSettings_OnNavigationGenerationFinished, NavData) == 0x000000, "Member 'AIFwRuntimeSettings_OnNavigationGenerationFinished::NavData' has a wrong offset!");

// Function AIFramework.AIFwSmartObjectComponent.FindEvent
// 0x0020 (0x0020 - 0x0000)
struct AIFwSmartObjectComponent_FindEvent final
{
public:
	class AActor*                                 User;                                              // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Usage;                                             // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0018(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1AD2[0x4];                                     // 0x001C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AIFwSmartObjectComponent_FindEvent) == 0x000008, "Wrong alignment on AIFwSmartObjectComponent_FindEvent");
static_assert(sizeof(AIFwSmartObjectComponent_FindEvent) == 0x000020, "Wrong size on AIFwSmartObjectComponent_FindEvent");
static_assert(offsetof(AIFwSmartObjectComponent_FindEvent, User) == 0x000000, "Member 'AIFwSmartObjectComponent_FindEvent::User' has a wrong offset!");
static_assert(offsetof(AIFwSmartObjectComponent_FindEvent, Usage) == 0x000008, "Member 'AIFwSmartObjectComponent_FindEvent::Usage' has a wrong offset!");
static_assert(offsetof(AIFwSmartObjectComponent_FindEvent, ReturnValue) == 0x000018, "Member 'AIFwSmartObjectComponent_FindEvent::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwSmartObjectComponent.Use
// 0x0020 (0x0020 - 0x0000)
struct AIFwSmartObjectComponent_Use final
{
public:
	class AActor*                                 User;                                              // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Usage;                                             // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         EventId;                                           // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x001C(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1AD3[0x3];                                     // 0x001D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AIFwSmartObjectComponent_Use) == 0x000008, "Wrong alignment on AIFwSmartObjectComponent_Use");
static_assert(sizeof(AIFwSmartObjectComponent_Use) == 0x000020, "Wrong size on AIFwSmartObjectComponent_Use");
static_assert(offsetof(AIFwSmartObjectComponent_Use, User) == 0x000000, "Member 'AIFwSmartObjectComponent_Use::User' has a wrong offset!");
static_assert(offsetof(AIFwSmartObjectComponent_Use, Usage) == 0x000008, "Member 'AIFwSmartObjectComponent_Use::Usage' has a wrong offset!");
static_assert(offsetof(AIFwSmartObjectComponent_Use, EventId) == 0x000018, "Member 'AIFwSmartObjectComponent_Use::EventId' has a wrong offset!");
static_assert(offsetof(AIFwSmartObjectComponent_Use, ReturnValue) == 0x00001C, "Member 'AIFwSmartObjectComponent_Use::ReturnValue' has a wrong offset!");

// Function AIFramework.AIFwStimuliSourceComponent.SetVisibility
// 0x0001 (0x0001 - 0x0000)
struct AIFwStimuliSourceComponent_SetVisibility final
{
public:
	bool                                          bNewVisible;                                       // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwStimuliSourceComponent_SetVisibility) == 0x000001, "Wrong alignment on AIFwStimuliSourceComponent_SetVisibility");
static_assert(sizeof(AIFwStimuliSourceComponent_SetVisibility) == 0x000001, "Wrong size on AIFwStimuliSourceComponent_SetVisibility");
static_assert(offsetof(AIFwStimuliSourceComponent_SetVisibility, bNewVisible) == 0x000000, "Member 'AIFwStimuliSourceComponent_SetVisibility::bNewVisible' has a wrong offset!");

// Function AIFramework.AIFwSystem.OnEntityDestroyed
// 0x0008 (0x0008 - 0x0000)
struct AIFwSystem_OnEntityDestroyed final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AIFwSystem_OnEntityDestroyed) == 0x000008, "Wrong alignment on AIFwSystem_OnEntityDestroyed");
static_assert(sizeof(AIFwSystem_OnEntityDestroyed) == 0x000008, "Wrong size on AIFwSystem_OnEntityDestroyed");
static_assert(offsetof(AIFwSystem_OnEntityDestroyed, Actor) == 0x000000, "Member 'AIFwSystem_OnEntityDestroyed::Actor' has a wrong offset!");

// Function AIFramework.AIFwSystem.OnEntityEndPlay
// 0x0010 (0x0010 - 0x0000)
struct AIFwSystem_OnEntityEndPlay final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EEndPlayReason                                EndPlayReason;                                     // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1ADB[0x7];                                     // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AIFwSystem_OnEntityEndPlay) == 0x000008, "Wrong alignment on AIFwSystem_OnEntityEndPlay");
static_assert(sizeof(AIFwSystem_OnEntityEndPlay) == 0x000010, "Wrong size on AIFwSystem_OnEntityEndPlay");
static_assert(offsetof(AIFwSystem_OnEntityEndPlay, Actor) == 0x000000, "Member 'AIFwSystem_OnEntityEndPlay::Actor' has a wrong offset!");
static_assert(offsetof(AIFwSystem_OnEntityEndPlay, EndPlayReason) == 0x000008, "Member 'AIFwSystem_OnEntityEndPlay::EndPlayReason' has a wrong offset!");

}


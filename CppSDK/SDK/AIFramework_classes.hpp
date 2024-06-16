#pragma once

 

// Package: AIFramework

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "AIFramework_structs.hpp"
#include "NavigationSystem_classes.hpp"


namespace SDK
{

// Class AIFramework.AIFwNodeBase
// 0x0008 (0x0030 - 0x0028)
class UAIFwNodeBase : public UObject
{
public:
	uint8                                         Pad_1A4D[0x8];                                     // 0x0028(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwNodeBase">();
	}
	static class UAIFwNodeBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwNodeBase>();
	}
};
static_assert(alignof(UAIFwNodeBase) == 0x000008, "Wrong alignment on UAIFwNodeBase");
static_assert(sizeof(UAIFwNodeBase) == 0x000030, "Wrong size on UAIFwNodeBase");

// Class AIFramework.AIFwPTCriterionNode
// 0x0010 (0x0040 - 0x0030)
class UAIFwPTCriterionNode : public UAIFwNodeBase
{
public:
	EPTCriterionSlot                              CriterionSlot;                                     // 0x0030(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1A4E[0xF];                                     // 0x0031(0x000F)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwPTCriterionNode">();
	}
	static class UAIFwPTCriterionNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwPTCriterionNode>();
	}
};
static_assert(alignof(UAIFwPTCriterionNode) == 0x000008, "Wrong alignment on UAIFwPTCriterionNode");
static_assert(sizeof(UAIFwPTCriterionNode) == 0x000040, "Wrong size on UAIFwPTCriterionNode");
static_assert(offsetof(UAIFwPTCriterionNode, CriterionSlot) == 0x000030, "Member 'UAIFwPTCriterionNode::CriterionSlot' has a wrong offset!");

// Class AIFramework.AIFwPTCriterionActorsOfClass
// 0x0008 (0x0048 - 0x0040)
class UAIFwPTCriterionActorsOfClass final : public UAIFwPTCriterionNode
{
public:
	TSubclassOf<class AActor>                     ActorClass;                                        // 0x0040(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwPTCriterionActorsOfClass">();
	}
	static class UAIFwPTCriterionActorsOfClass* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwPTCriterionActorsOfClass>();
	}
};
static_assert(alignof(UAIFwPTCriterionActorsOfClass) == 0x000008, "Wrong alignment on UAIFwPTCriterionActorsOfClass");
static_assert(sizeof(UAIFwPTCriterionActorsOfClass) == 0x000048, "Wrong size on UAIFwPTCriterionActorsOfClass");
static_assert(offsetof(UAIFwPTCriterionActorsOfClass, ActorClass) == 0x000040, "Member 'UAIFwPTCriterionActorsOfClass::ActorClass' has a wrong offset!");

// Class AIFramework.AIFwBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UAIFwBlueprintLibrary final : public UBlueprintFunctionLibrary
{
public:
	static struct FAIFwClothoidSegment ClothoidInterp(const struct FVector2D& StartPosition, float StartAngle, const struct FVector2D& EndPosition, float EndAngle);
	static struct FAIFwClothoidSegment ClothoidInterpRad(const struct FVector2D& StartPosition, float StartAngle, const struct FVector2D& EndPosition, float EndAngle);
	static class AAIFwAIDirector* GetAIDirector(class UObject* WorldContextObject);
	static class UAIFwBlackboardComponent* GetAIFwBlackboard(class AActor* Target);
	static struct FVector2D GetClothoidLocationAtTime(const struct FAIFwClothoidSegment& Segment, float Time);
	static float GetFactionRelation(class AActor* From, class AActor* To);
	static struct FVector2D GetMultipleClothoidLocationAtTime(const struct FAIFwMultipleClothoidSegment& Segment, float Time);
	static int32 Hash32(const class FString& String);
	static struct FAIFwMultipleClothoidSegment MultipleClothoidInterp(const struct FVector2D& StartPosition, float StartAngle, float StartCurvature, const struct FVector2D& EndPosition, float EndAngle, float EndCurvature);
	static struct FAIFwMultipleClothoidSegment MultipleClothoidInterpRad(const struct FVector2D& StartPosition, float StartAngle, float StartCurvature, const struct FVector2D& EndPosition, float EndAngle, float EndCurvature);
	static bool RunAIFwBehaviorTree(class AActor* Target, class UAIFwBehaviorTree* BehaviorTree, bool bLooping);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwBlueprintLibrary">();
	}
	static class UAIFwBlueprintLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwBlueprintLibrary>();
	}
};
static_assert(alignof(UAIFwBlueprintLibrary) == 0x000008, "Wrong alignment on UAIFwBlueprintLibrary");
static_assert(sizeof(UAIFwBlueprintLibrary) == 0x000028, "Wrong size on UAIFwBlueprintLibrary");

// Class AIFramework.AIFwAIDirector
// 0x0010 (0x0238 - 0x0228)
class AAIFwAIDirector : public AActor
{
public:
	class UAIFwBlackboardComponent*               BlackboardComponent;                               // 0x0228(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAIFwHierarchyComponent*                HierarchyComponent;                                // 0x0230(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	void ReceiveOnActorSpawned(class AActor* SpawnedActor);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwAIDirector">();
	}
	static class AAIFwAIDirector* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAIFwAIDirector>();
	}
};
static_assert(alignof(AAIFwAIDirector) == 0x000008, "Wrong alignment on AAIFwAIDirector");
static_assert(sizeof(AAIFwAIDirector) == 0x000238, "Wrong size on AAIFwAIDirector");
static_assert(offsetof(AAIFwAIDirector, BlackboardComponent) == 0x000228, "Member 'AAIFwAIDirector::BlackboardComponent' has a wrong offset!");
static_assert(offsetof(AAIFwAIDirector, HierarchyComponent) == 0x000230, "Member 'AAIFwAIDirector::HierarchyComponent' has a wrong offset!");

// Class AIFramework.AIFwAITask_TeleportTo
// 0x0010 (0x0080 - 0x0070)
class UAIFwAITask_TeleportTo final : public UAITask
{
public:
	uint8                                         Pad_1A52[0x10];                                    // 0x0070(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwAITask_TeleportTo">();
	}
	static class UAIFwAITask_TeleportTo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwAITask_TeleportTo>();
	}
};
static_assert(alignof(UAIFwAITask_TeleportTo) == 0x000008, "Wrong alignment on UAIFwAITask_TeleportTo");
static_assert(sizeof(UAIFwAITask_TeleportTo) == 0x000080, "Wrong size on UAIFwAITask_TeleportTo");

// Class AIFramework.AIFwNavVolumeTestingActor
// 0x0008 (0x0320 - 0x0318)
class AAIFwNavVolumeTestingActor final : public ANavigationTestingActor
{
public:
	uint8                                         bWantsStringPulling : 1;                           // 0x0318(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bWantsShortcutPath : 1;                            // 0x0318(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_1A53[0x7];                                     // 0x0319(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwNavVolumeTestingActor">();
	}
	static class AAIFwNavVolumeTestingActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAIFwNavVolumeTestingActor>();
	}
};
static_assert(alignof(AAIFwNavVolumeTestingActor) == 0x000008, "Wrong alignment on AAIFwNavVolumeTestingActor");
static_assert(sizeof(AAIFwNavVolumeTestingActor) == 0x000320, "Wrong size on AAIFwNavVolumeTestingActor");

// Class AIFramework.AIFwNodeBasedAsset
// 0x0008 (0x0030 - 0x0028)
class UAIFwNodeBasedAsset : public UObject
{
public:
	int32                                         DataType;                                          // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A54[0x4];                                     // 0x002C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwNodeBasedAsset">();
	}
	static class UAIFwNodeBasedAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwNodeBasedAsset>();
	}
};
static_assert(alignof(UAIFwNodeBasedAsset) == 0x000008, "Wrong alignment on UAIFwNodeBasedAsset");
static_assert(sizeof(UAIFwNodeBasedAsset) == 0x000030, "Wrong size on UAIFwNodeBasedAsset");
static_assert(offsetof(UAIFwNodeBasedAsset, DataType) == 0x000028, "Member 'UAIFwNodeBasedAsset::DataType' has a wrong offset!");

// Class AIFramework.AIFwPerceptionComponent
// 0x0028 (0x00E0 - 0x00B8)
class UAIFwPerceptionComponent : public UActorComponent
{
public:
	TArray<struct FAIFwParameterizedBTRequest>    PerceptionTrees;                                   // 0x00B8(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_1A55[0x18];                                    // 0x00C8(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ClearSensedActors();
	void SetSenseEnabled(const class FString& Tag, bool bEnabled);

	TArray<class AActor*> GetSensedActors(const class FString& Tag) const;
	int32 GetSensedActorsCount() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwPerceptionComponent">();
	}
	static class UAIFwPerceptionComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwPerceptionComponent>();
	}
};
static_assert(alignof(UAIFwPerceptionComponent) == 0x000008, "Wrong alignment on UAIFwPerceptionComponent");
static_assert(sizeof(UAIFwPerceptionComponent) == 0x0000E0, "Wrong size on UAIFwPerceptionComponent");
static_assert(offsetof(UAIFwPerceptionComponent, PerceptionTrees) == 0x0000B8, "Member 'UAIFwPerceptionComponent::PerceptionTrees' has a wrong offset!");

// Class AIFramework.AIFwBehaviorTree
// 0x0010 (0x0040 - 0x0030)
class UAIFwBehaviorTree final : public UAIFwNodeBasedAsset
{
public:
	uint8                                         Pad_1A57[0x10];                                    // 0x0030(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwBehaviorTree">();
	}
	static class UAIFwBehaviorTree* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwBehaviorTree>();
	}
};
static_assert(alignof(UAIFwBehaviorTree) == 0x000008, "Wrong alignment on UAIFwBehaviorTree");
static_assert(sizeof(UAIFwBehaviorTree) == 0x000040, "Wrong size on UAIFwBehaviorTree");

// Class AIFramework.AIFwPerceptionTreeInstanceBlueprintWrapper
// 0x0040 (0x0068 - 0x0028)
class UAIFwPerceptionTreeInstanceBlueprintWrapper final : public UObject
{
public:
	uint8                                         Pad_1A58[0x30];                                    // 0x0028(0x0030)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnFinishedDelegate;                                // 0x0058(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)

public:
	static class UAIFwPerceptionTreeInstanceBlueprintWrapper* RunInstantParameterizedPerceptionTree(class AActor* Target, const struct FAIFwParameterizedBTRequest& Query, int32 MaxCount);
	static class UAIFwPerceptionTreeInstanceBlueprintWrapper* RunInstantParameterizedPerceptionTreeRandom(class AActor* Target, const struct FAIFwParameterizedBTRequest& Query, int32 MaxCount);
	static class UAIFwPerceptionTreeInstanceBlueprintWrapper* RunInstantPerceptionTree(class AActor* Target, class UAIFwBehaviorTree* Template);
	static class UAIFwPerceptionTreeInstanceBlueprintWrapper* RunPerceptionTree(class AActor* Target, class UAIFwBehaviorTree* Template);

	void AIFwOnPerceptionTreeFinishedWrapper__DelegateSignature(class UAIFwPerceptionTreeInstanceBlueprintWrapper* QueryInstance);
	int32 GetResultCount();
	TArray<class AActor*> GetResultsAsActors();
	TArray<struct FVector> GetResultsAsLocations();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwPerceptionTreeInstanceBlueprintWrapper">();
	}
	static class UAIFwPerceptionTreeInstanceBlueprintWrapper* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwPerceptionTreeInstanceBlueprintWrapper>();
	}
};
static_assert(alignof(UAIFwPerceptionTreeInstanceBlueprintWrapper) == 0x000008, "Wrong alignment on UAIFwPerceptionTreeInstanceBlueprintWrapper");
static_assert(sizeof(UAIFwPerceptionTreeInstanceBlueprintWrapper) == 0x000068, "Wrong size on UAIFwPerceptionTreeInstanceBlueprintWrapper");
static_assert(offsetof(UAIFwPerceptionTreeInstanceBlueprintWrapper, OnFinishedDelegate) == 0x000058, "Member 'UAIFwPerceptionTreeInstanceBlueprintWrapper::OnFinishedDelegate' has a wrong offset!");

// Class AIFramework.AIFwBlackboardBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UAIFwBlackboardBlueprintLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void ClearValue(struct FAIFwBlackboard* Blackboard, const class FString& KeyName);
	static bool GetValueAsBool(const struct FAIFwBlackboard& Blackboard, const class FString& KeyName);
	static class UClass* GetValueAsClass(const struct FAIFwBlackboard& Blackboard, const class FString& KeyName);
	static float GetValueAsFloat(const struct FAIFwBlackboard& Blackboard, const class FString& KeyName);
	static int32 GetValueAsInt(const struct FAIFwBlackboard& Blackboard, const class FString& KeyName);
	static class FName GetValueAsName(const struct FAIFwBlackboard& Blackboard, const class FString& KeyName);
	static class UObject* GetValueAsObject(const struct FAIFwBlackboard& Blackboard, const class FString& KeyName);
	static TArray<class UObject*> GetValueAsObjectArray(const struct FAIFwBlackboard& Blackboard, const class FString& KeyName);
	static class FString GetValueAsString(const struct FAIFwBlackboard& Blackboard, const class FString& KeyName);
	static struct FVector GetValueAsVector(const struct FAIFwBlackboard& Blackboard, const class FString& KeyName);
	static TArray<struct FVector> GetValueAsVectorArray(const struct FAIFwBlackboard& Blackboard, const class FString& KeyName);
	static bool IsValidKey(const struct FAIFwBlackboard& Blackboard, const class FString& KeyName);
	static void SetValueAsBool(struct FAIFwBlackboard* Blackboard, const class FString& KeyName, bool BoolValue);
	static void SetValueAsClass(struct FAIFwBlackboard* Blackboard, const class FString& KeyName, class UClass* ClassValue);
	static void SetValueAsFloat(struct FAIFwBlackboard* Blackboard, const class FString& KeyName, float FloatValue);
	static void SetValueAsInt(struct FAIFwBlackboard* Blackboard, const class FString& KeyName, int32 IntValue);
	static void SetValueAsName(struct FAIFwBlackboard* Blackboard, const class FString& KeyName, class FName NameValue);
	static void SetValueAsObject(struct FAIFwBlackboard* Blackboard, const class FString& KeyName, class UObject* ObjectValue);
	static void SetValueAsObjectArray(struct FAIFwBlackboard* Blackboard, const class FString& KeyName, const TArray<class UObject*>& ObjectArray);
	static void SetValueAsString(struct FAIFwBlackboard* Blackboard, const class FString& KeyName, const class FString& StringValue);
	static void SetValueAsVector(struct FAIFwBlackboard* Blackboard, const class FString& KeyName, const struct FVector& VectorValue);
	static void SetValueAsVectorArray(struct FAIFwBlackboard* Blackboard, const class FString& KeyName, const TArray<struct FVector>& VectorArray);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwBlackboardBlueprintLibrary">();
	}
	static class UAIFwBlackboardBlueprintLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwBlackboardBlueprintLibrary>();
	}
};
static_assert(alignof(UAIFwBlackboardBlueprintLibrary) == 0x000008, "Wrong alignment on UAIFwBlackboardBlueprintLibrary");
static_assert(sizeof(UAIFwBlackboardBlueprintLibrary) == 0x000028, "Wrong size on UAIFwBlackboardBlueprintLibrary");

// Class AIFramework.AIFwBlackboardComponent
// 0x0028 (0x00E0 - 0x00B8)
class UAIFwBlackboardComponent final : public UActorComponent
{
public:
	uint8                                         Pad_1A64[0x28];                                    // 0x00B8(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void BindToUE4Blackboard(const class FString& KeyName, class UBlackboardComponent* OtherBlackboard, const class FName& OtherKeyName);
	void ClearValue(const class FString& KeyName);
	void SetValueAsBool(const class FString& KeyName, bool BoolValue);
	void SetValueAsClass(const class FString& KeyName, class UClass* ClassValue);
	void SetValueAsEnum(const class FString& KeyName, uint8 EnumValue);
	void SetValueAsFloat(const class FString& KeyName, float FloatValue);
	void SetValueAsInt(const class FString& KeyName, int32 IntValue);
	void SetValueAsIntArray(const class FString& KeyName, const TArray<int32>& IntArray);
	void SetValueAsName(const class FString& KeyName, class FName NameValue);
	void SetValueAsObject(const class FString& KeyName, class UObject* ObjectValue);
	void SetValueAsObjectArray(const class FString& KeyName, const TArray<class UObject*>& ObjectArray);
	void SetValueAsRotator(const class FString& KeyName, const struct FRotator& VectorValue);
	void SetValueAsString(const class FString& KeyName, const class FString& StringValue);
	void SetValueAsVector(const class FString& KeyName, const struct FVector& VectorValue);
	void SetValueAsVectorArray(const class FString& KeyName, const TArray<struct FVector>& VectorArray);

	bool GetValueAsBool(const class FString& KeyName) const;
	class UClass* GetValueAsClass(const class FString& KeyName) const;
	uint8 GetValueAsEnum(const class FString& KeyName) const;
	float GetValueAsFloat(const class FString& KeyName) const;
	int32 GetValueAsInt(const class FString& KeyName) const;
	TArray<int32> GetValueAsIntArray(const class FString& KeyName) const;
	struct FVector GetValueAsLocation(const class FString& KeyName) const;
	class FName GetValueAsName(const class FString& KeyName) const;
	class UObject* GetValueAsObject(const class FString& KeyName) const;
	TArray<class UObject*> GetValueAsObjectArray(const class FString& KeyName) const;
	struct FRotator GetValueAsRotation(const class FString& KeyName) const;
	struct FRotator GetValueAsRotator(const class FString& KeyName) const;
	class FString GetValueAsString(const class FString& KeyName) const;
	struct FVector GetValueAsVector(const class FString& KeyName) const;
	TArray<struct FVector> GetValueAsVectorArray(const class FString& KeyName) const;
	bool IsValidKey(const class FString& KeyName) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwBlackboardComponent">();
	}
	static class UAIFwBlackboardComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwBlackboardComponent>();
	}
};
static_assert(alignof(UAIFwBlackboardComponent) == 0x000008, "Wrong alignment on UAIFwBlackboardComponent");
static_assert(sizeof(UAIFwBlackboardComponent) == 0x0000E0, "Wrong size on UAIFwBlackboardComponent");

// Class AIFramework.AIFwPTCriterionSquadMember
// 0x0008 (0x0048 - 0x0040)
class UAIFwPTCriterionSquadMember : public UAIFwPTCriterionNode
{
public:
	bool                                          IgnoreSelf;                                        // 0x0040(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1A74[0x7];                                     // 0x0041(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwPTCriterionSquadMember">();
	}
	static class UAIFwPTCriterionSquadMember* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwPTCriterionSquadMember>();
	}
};
static_assert(alignof(UAIFwPTCriterionSquadMember) == 0x000008, "Wrong alignment on UAIFwPTCriterionSquadMember");
static_assert(sizeof(UAIFwPTCriterionSquadMember) == 0x000048, "Wrong size on UAIFwPTCriterionSquadMember");
static_assert(offsetof(UAIFwPTCriterionSquadMember, IgnoreSelf) == 0x000040, "Member 'UAIFwPTCriterionSquadMember::IgnoreSelf' has a wrong offset!");

// Class AIFramework.AIFwPTCriterionSquadMemberDestinations
// 0x0008 (0x0048 - 0x0040)
class UAIFwPTCriterionSquadMemberDestinations : public UAIFwPTCriterionNode
{
public:
	bool                                          IgnoreSelf;                                        // 0x0040(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1A75[0x7];                                     // 0x0041(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwPTCriterionSquadMemberDestinations">();
	}
	static class UAIFwPTCriterionSquadMemberDestinations* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwPTCriterionSquadMemberDestinations>();
	}
};
static_assert(alignof(UAIFwPTCriterionSquadMemberDestinations) == 0x000008, "Wrong alignment on UAIFwPTCriterionSquadMemberDestinations");
static_assert(sizeof(UAIFwPTCriterionSquadMemberDestinations) == 0x000048, "Wrong size on UAIFwPTCriterionSquadMemberDestinations");
static_assert(offsetof(UAIFwPTCriterionSquadMemberDestinations, IgnoreSelf) == 0x000040, "Member 'UAIFwPTCriterionSquadMemberDestinations::IgnoreSelf' has a wrong offset!");

// Class AIFramework.AIFwBTDecoratorNode
// 0x0008 (0x0038 - 0x0030)
class UAIFwBTDecoratorNode : public UAIFwNodeBase
{
public:
	uint8                                         Pad_1A76[0x8];                                     // 0x0030(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwBTDecoratorNode">();
	}
	static class UAIFwBTDecoratorNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwBTDecoratorNode>();
	}
};
static_assert(alignof(UAIFwBTDecoratorNode) == 0x000008, "Wrong alignment on UAIFwBTDecoratorNode");
static_assert(sizeof(UAIFwBTDecoratorNode) == 0x000038, "Wrong size on UAIFwBTDecoratorNode");

// Class AIFramework.AIFwPTEvaluationNode
// 0x0018 (0x0048 - 0x0030)
class UAIFwPTEvaluationNode : public UAIFwNodeBase
{
public:
	bool                                          Filter;                                            // 0x0030(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          Score;                                             // 0x0031(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	EPTEvalOperation                              AdditionalOperation;                               // 0x0032(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1A77[0x1];                                     // 0x0033(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AdditionalScale;                                   // 0x0034(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1A78[0x10];                                    // 0x0038(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwPTEvaluationNode">();
	}
	static class UAIFwPTEvaluationNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwPTEvaluationNode>();
	}
};
static_assert(alignof(UAIFwPTEvaluationNode) == 0x000008, "Wrong alignment on UAIFwPTEvaluationNode");
static_assert(sizeof(UAIFwPTEvaluationNode) == 0x000048, "Wrong size on UAIFwPTEvaluationNode");
static_assert(offsetof(UAIFwPTEvaluationNode, Filter) == 0x000030, "Member 'UAIFwPTEvaluationNode::Filter' has a wrong offset!");
static_assert(offsetof(UAIFwPTEvaluationNode, Score) == 0x000031, "Member 'UAIFwPTEvaluationNode::Score' has a wrong offset!");
static_assert(offsetof(UAIFwPTEvaluationNode, AdditionalOperation) == 0x000032, "Member 'UAIFwPTEvaluationNode::AdditionalOperation' has a wrong offset!");
static_assert(offsetof(UAIFwPTEvaluationNode, AdditionalScale) == 0x000034, "Member 'UAIFwPTEvaluationNode::AdditionalScale' has a wrong offset!");

// Class AIFramework.AIFwBTFocus
// 0x0028 (0x0060 - 0x0038)
class UAIFwBTFocus final : public UAIFwBTDecoratorNode
{
public:
	class FString                                 BlackboardKey;                                     // 0x0038(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A79[0x10];                                    // 0x0048(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	EAIFwFocusPriority                            FocusPriority;                                     // 0x0058(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A7A[0x7];                                     // 0x0059(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwBTFocus">();
	}
	static class UAIFwBTFocus* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwBTFocus>();
	}
};
static_assert(alignof(UAIFwBTFocus) == 0x000008, "Wrong alignment on UAIFwBTFocus");
static_assert(sizeof(UAIFwBTFocus) == 0x000060, "Wrong size on UAIFwBTFocus");
static_assert(offsetof(UAIFwBTFocus, BlackboardKey) == 0x000038, "Member 'UAIFwBTFocus::BlackboardKey' has a wrong offset!");
static_assert(offsetof(UAIFwBTFocus, FocusPriority) == 0x000058, "Member 'UAIFwBTFocus::FocusPriority' has a wrong offset!");

// Class AIFramework.AIFwPTEvaluationNodeUseCriterion
// 0x0008 (0x0050 - 0x0048)
class UAIFwPTEvaluationNodeUseCriterion : public UAIFwPTEvaluationNode
{
public:
	bool                                          AllPath;                                           // 0x0048(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	EPTEvalScoreType                              ScoreType;                                         // 0x0049(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1A7B[0x6];                                     // 0x004A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwPTEvaluationNodeUseCriterion">();
	}
	static class UAIFwPTEvaluationNodeUseCriterion* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwPTEvaluationNodeUseCriterion>();
	}
};
static_assert(alignof(UAIFwPTEvaluationNodeUseCriterion) == 0x000008, "Wrong alignment on UAIFwPTEvaluationNodeUseCriterion");
static_assert(sizeof(UAIFwPTEvaluationNodeUseCriterion) == 0x000050, "Wrong size on UAIFwPTEvaluationNodeUseCriterion");
static_assert(offsetof(UAIFwPTEvaluationNodeUseCriterion, AllPath) == 0x000048, "Member 'UAIFwPTEvaluationNodeUseCriterion::AllPath' has a wrong offset!");
static_assert(offsetof(UAIFwPTEvaluationNodeUseCriterion, ScoreType) == 0x000049, "Member 'UAIFwPTEvaluationNodeUseCriterion::ScoreType' has a wrong offset!");

// Class AIFramework.AIFwBTNode
// 0x0010 (0x0040 - 0x0030)
class UAIFwBTNode : public UAIFwNodeBase
{
public:
	uint8                                         Pad_1A7C[0x10];                                    // 0x0030(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwBTNode">();
	}
	static class UAIFwBTNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwBTNode>();
	}
};
static_assert(alignof(UAIFwBTNode) == 0x000008, "Wrong alignment on UAIFwBTNode");
static_assert(sizeof(UAIFwBTNode) == 0x000040, "Wrong size on UAIFwBTNode");

// Class AIFramework.AIFwPTEvaluationInfluence
// 0x0018 (0x0068 - 0x0050)
class UAIFwPTEvaluationInfluence final : public UAIFwPTEvaluationNodeUseCriterion
{
public:
	class FString                                 LayerName;                                         // 0x0050(0x0010)(Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         MinValue;                                          // 0x0060(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         MaxValue;                                          // 0x0064(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwPTEvaluationInfluence">();
	}
	static class UAIFwPTEvaluationInfluence* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwPTEvaluationInfluence>();
	}
};
static_assert(alignof(UAIFwPTEvaluationInfluence) == 0x000008, "Wrong alignment on UAIFwPTEvaluationInfluence");
static_assert(sizeof(UAIFwPTEvaluationInfluence) == 0x000068, "Wrong size on UAIFwPTEvaluationInfluence");
static_assert(offsetof(UAIFwPTEvaluationInfluence, LayerName) == 0x000050, "Member 'UAIFwPTEvaluationInfluence::LayerName' has a wrong offset!");
static_assert(offsetof(UAIFwPTEvaluationInfluence, MinValue) == 0x000060, "Member 'UAIFwPTEvaluationInfluence::MinValue' has a wrong offset!");
static_assert(offsetof(UAIFwPTEvaluationInfluence, MaxValue) == 0x000064, "Member 'UAIFwPTEvaluationInfluence::MaxValue' has a wrong offset!");

// Class AIFramework.AIFwBTInvokeFunction
// 0x0040 (0x0080 - 0x0040)
class UAIFwBTInvokeFunction final : public UAIFwBTNode
{
public:
	struct FAIFwBTNodePropertyString              ObjectKey;                                         // 0x0040(0x0020)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FAIFwBTNodePropertyString              FunctionName;                                      // 0x0060(0x0020)(Edit, Protected, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwBTInvokeFunction">();
	}
	static class UAIFwBTInvokeFunction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwBTInvokeFunction>();
	}
};
static_assert(alignof(UAIFwBTInvokeFunction) == 0x000008, "Wrong alignment on UAIFwBTInvokeFunction");
static_assert(sizeof(UAIFwBTInvokeFunction) == 0x000080, "Wrong size on UAIFwBTInvokeFunction");
static_assert(offsetof(UAIFwBTInvokeFunction, ObjectKey) == 0x000040, "Member 'UAIFwBTInvokeFunction::ObjectKey' has a wrong offset!");
static_assert(offsetof(UAIFwBTInvokeFunction, FunctionName) == 0x000060, "Member 'UAIFwBTInvokeFunction::FunctionName' has a wrong offset!");

// Class AIFramework.AIFwPTEvaluationNavMeshRaycast
// 0x0010 (0x0060 - 0x0050)
class UAIFwPTEvaluationNavMeshRaycast final : public UAIFwPTEvaluationNodeUseCriterion
{
public:
	TSubclassOf<class UNavigationQueryFilter>     FilterClass;                                       // 0x0050(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          Acceptance;                                        // 0x0058(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1A7D[0x7];                                     // 0x0059(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwPTEvaluationNavMeshRaycast">();
	}
	static class UAIFwPTEvaluationNavMeshRaycast* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwPTEvaluationNavMeshRaycast>();
	}
};
static_assert(alignof(UAIFwPTEvaluationNavMeshRaycast) == 0x000008, "Wrong alignment on UAIFwPTEvaluationNavMeshRaycast");
static_assert(sizeof(UAIFwPTEvaluationNavMeshRaycast) == 0x000060, "Wrong size on UAIFwPTEvaluationNavMeshRaycast");
static_assert(offsetof(UAIFwPTEvaluationNavMeshRaycast, FilterClass) == 0x000050, "Member 'UAIFwPTEvaluationNavMeshRaycast::FilterClass' has a wrong offset!");
static_assert(offsetof(UAIFwPTEvaluationNavMeshRaycast, Acceptance) == 0x000058, "Member 'UAIFwPTEvaluationNavMeshRaycast::Acceptance' has a wrong offset!");

// Class AIFramework.AIFwBTMaxWalkSpeed
// 0x0018 (0x0050 - 0x0038)
class UAIFwBTMaxWalkSpeed final : public UAIFwBTDecoratorNode
{
public:
	struct FAIFwBTNodePropertyFloat               MaxWalkSpeed;                                      // 0x0038(0x0018)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwBTMaxWalkSpeed">();
	}
	static class UAIFwBTMaxWalkSpeed* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwBTMaxWalkSpeed>();
	}
};
static_assert(alignof(UAIFwBTMaxWalkSpeed) == 0x000008, "Wrong alignment on UAIFwBTMaxWalkSpeed");
static_assert(sizeof(UAIFwBTMaxWalkSpeed) == 0x000050, "Wrong size on UAIFwBTMaxWalkSpeed");
static_assert(offsetof(UAIFwBTMaxWalkSpeed, MaxWalkSpeed) == 0x000038, "Member 'UAIFwBTMaxWalkSpeed::MaxWalkSpeed' has a wrong offset!");

// Class AIFramework.AIFwPTEvaluationPathfinding
// 0x0020 (0x0070 - 0x0050)
class UAIFwPTEvaluationPathfinding final : public UAIFwPTEvaluationNodeUseCriterion
{
public:
	EAIFwPTEvalPathfindingMode                    Mode;                                              // 0x0050(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1A7E[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UNavigationQueryFilter>     FilterClass;                                       // 0x0058(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          PathFromCriterion;                                 // 0x0060(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1A7F[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MinValue;                                          // 0x0064(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         MaxValue;                                          // 0x0068(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          Acceptance;                                        // 0x006C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1A80[0x3];                                     // 0x006D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwPTEvaluationPathfinding">();
	}
	static class UAIFwPTEvaluationPathfinding* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwPTEvaluationPathfinding>();
	}
};
static_assert(alignof(UAIFwPTEvaluationPathfinding) == 0x000008, "Wrong alignment on UAIFwPTEvaluationPathfinding");
static_assert(sizeof(UAIFwPTEvaluationPathfinding) == 0x000070, "Wrong size on UAIFwPTEvaluationPathfinding");
static_assert(offsetof(UAIFwPTEvaluationPathfinding, Mode) == 0x000050, "Member 'UAIFwPTEvaluationPathfinding::Mode' has a wrong offset!");
static_assert(offsetof(UAIFwPTEvaluationPathfinding, FilterClass) == 0x000058, "Member 'UAIFwPTEvaluationPathfinding::FilterClass' has a wrong offset!");
static_assert(offsetof(UAIFwPTEvaluationPathfinding, PathFromCriterion) == 0x000060, "Member 'UAIFwPTEvaluationPathfinding::PathFromCriterion' has a wrong offset!");
static_assert(offsetof(UAIFwPTEvaluationPathfinding, MinValue) == 0x000064, "Member 'UAIFwPTEvaluationPathfinding::MinValue' has a wrong offset!");
static_assert(offsetof(UAIFwPTEvaluationPathfinding, MaxValue) == 0x000068, "Member 'UAIFwPTEvaluationPathfinding::MaxValue' has a wrong offset!");
static_assert(offsetof(UAIFwPTEvaluationPathfinding, Acceptance) == 0x00006C, "Member 'UAIFwPTEvaluationPathfinding::Acceptance' has a wrong offset!");

// Class AIFramework.AIFwBTMoveTo
// 0x00A8 (0x00E8 - 0x0040)
class UAIFwBTMoveTo final : public UAIFwBTNode
{
public:
	uint8                                         Pad_1A81[0x8];                                     // 0x0040(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAIFwBTNodePropertyString              BlackboardKey;                                     // 0x0048(0x0020)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FAIFwBTNodePropertyFloat               AcceptableRadius;                                  // 0x0068(0x0018)(Edit, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UNavigationQueryFilter>     FilterClass;                                       // 0x0080(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FAIFwBTNodePropertyBool                bAllowStrafe;                                      // 0x0088(0x0018)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FAIFwBTNodePropertyBool                bAllowPartialPath;                                 // 0x00A0(0x0018)(Edit, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	struct FAIFwBTNodePropertyBool                bReachTestIncludesAgentRadius;                     // 0x00B8(0x0018)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FAIFwBTNodePropertyBool                bReachTestIncludesGoalRadius;                      // 0x00D0(0x0018)(Edit, Protected, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwBTMoveTo">();
	}
	static class UAIFwBTMoveTo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwBTMoveTo>();
	}
};
static_assert(alignof(UAIFwBTMoveTo) == 0x000008, "Wrong alignment on UAIFwBTMoveTo");
static_assert(sizeof(UAIFwBTMoveTo) == 0x0000E8, "Wrong size on UAIFwBTMoveTo");
static_assert(offsetof(UAIFwBTMoveTo, BlackboardKey) == 0x000048, "Member 'UAIFwBTMoveTo::BlackboardKey' has a wrong offset!");
static_assert(offsetof(UAIFwBTMoveTo, AcceptableRadius) == 0x000068, "Member 'UAIFwBTMoveTo::AcceptableRadius' has a wrong offset!");
static_assert(offsetof(UAIFwBTMoveTo, FilterClass) == 0x000080, "Member 'UAIFwBTMoveTo::FilterClass' has a wrong offset!");
static_assert(offsetof(UAIFwBTMoveTo, bAllowStrafe) == 0x000088, "Member 'UAIFwBTMoveTo::bAllowStrafe' has a wrong offset!");
static_assert(offsetof(UAIFwBTMoveTo, bAllowPartialPath) == 0x0000A0, "Member 'UAIFwBTMoveTo::bAllowPartialPath' has a wrong offset!");
static_assert(offsetof(UAIFwBTMoveTo, bReachTestIncludesAgentRadius) == 0x0000B8, "Member 'UAIFwBTMoveTo::bReachTestIncludesAgentRadius' has a wrong offset!");
static_assert(offsetof(UAIFwBTMoveTo, bReachTestIncludesGoalRadius) == 0x0000D0, "Member 'UAIFwBTMoveTo::bReachTestIncludesGoalRadius' has a wrong offset!");

// Class AIFramework.AIFwBTPrintString
// 0x0028 (0x0068 - 0x0040)
class UAIFwBTPrintString final : public UAIFwBTNode
{
public:
	struct FAIFwBTNodePropertyString              String;                                            // 0x0040(0x0020)(Edit, NativeAccessSpecifierPublic)
	bool                                          bPrintToScreen;                                    // 0x0060(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bPrintToLog;                                       // 0x0061(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A82[0x2];                                     // 0x0062(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Duration;                                          // 0x0064(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwBTPrintString">();
	}
	static class UAIFwBTPrintString* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwBTPrintString>();
	}
};
static_assert(alignof(UAIFwBTPrintString) == 0x000008, "Wrong alignment on UAIFwBTPrintString");
static_assert(sizeof(UAIFwBTPrintString) == 0x000068, "Wrong size on UAIFwBTPrintString");
static_assert(offsetof(UAIFwBTPrintString, String) == 0x000040, "Member 'UAIFwBTPrintString::String' has a wrong offset!");
static_assert(offsetof(UAIFwBTPrintString, bPrintToScreen) == 0x000060, "Member 'UAIFwBTPrintString::bPrintToScreen' has a wrong offset!");
static_assert(offsetof(UAIFwBTPrintString, bPrintToLog) == 0x000061, "Member 'UAIFwBTPrintString::bPrintToLog' has a wrong offset!");
static_assert(offsetof(UAIFwBTPrintString, Duration) == 0x000064, "Member 'UAIFwBTPrintString::Duration' has a wrong offset!");

// Class AIFramework.AIFwBTRunAITask
// 0x0028 (0x0068 - 0x0040)
class UAIFwBTRunAITask : public UAIFwBTNode
{
public:
	uint8                                         Pad_1A83[0x8];                                     // 0x0040(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UAITask>                    TaskClass;                                         // 0x0048(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FAIFwBTNodePropertyBool                bNonBlocking;                                      // 0x0050(0x0018)(Edit, Protected, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwBTRunAITask">();
	}
	static class UAIFwBTRunAITask* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwBTRunAITask>();
	}
};
static_assert(alignof(UAIFwBTRunAITask) == 0x000008, "Wrong alignment on UAIFwBTRunAITask");
static_assert(sizeof(UAIFwBTRunAITask) == 0x000068, "Wrong size on UAIFwBTRunAITask");
static_assert(offsetof(UAIFwBTRunAITask, TaskClass) == 0x000048, "Member 'UAIFwBTRunAITask::TaskClass' has a wrong offset!");
static_assert(offsetof(UAIFwBTRunAITask, bNonBlocking) == 0x000050, "Member 'UAIFwBTRunAITask::bNonBlocking' has a wrong offset!");

// Class AIFramework.AIFwBTRunHTNPlan
// 0x0010 (0x0050 - 0x0040)
class UAIFwBTRunHTNPlan final : public UAIFwBTNode
{
public:
	class FString                                 TaskName;                                          // 0x0040(0x0010)(Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwBTRunHTNPlan">();
	}
	static class UAIFwBTRunHTNPlan* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwBTRunHTNPlan>();
	}
};
static_assert(alignof(UAIFwBTRunHTNPlan) == 0x000008, "Wrong alignment on UAIFwBTRunHTNPlan");
static_assert(sizeof(UAIFwBTRunHTNPlan) == 0x000050, "Wrong size on UAIFwBTRunHTNPlan");
static_assert(offsetof(UAIFwBTRunHTNPlan, TaskName) == 0x000040, "Member 'UAIFwBTRunHTNPlan::TaskName' has a wrong offset!");

// Class AIFramework.AIFwBTRunPerceptionTree
// 0x0048 (0x0088 - 0x0040)
class UAIFwBTRunPerceptionTree : public UAIFwBTNode
{
public:
	class UAIFwBehaviorTree*                      PerceptionTree;                                    // 0x0040(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FAIFwBTNodePropertyString              BlackboardKey;                                     // 0x0048(0x0020)(Edit, Protected, NativeAccessSpecifierProtected)
	EAIFwPTRunMode                                RunMode;                                           // 0x0068(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1A84[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAIFwBTNodePropertyInt                 MaxCount;                                          // 0x0070(0x0018)(Edit, Protected, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwBTRunPerceptionTree">();
	}
	static class UAIFwBTRunPerceptionTree* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwBTRunPerceptionTree>();
	}
};
static_assert(alignof(UAIFwBTRunPerceptionTree) == 0x000008, "Wrong alignment on UAIFwBTRunPerceptionTree");
static_assert(sizeof(UAIFwBTRunPerceptionTree) == 0x000088, "Wrong size on UAIFwBTRunPerceptionTree");
static_assert(offsetof(UAIFwBTRunPerceptionTree, PerceptionTree) == 0x000040, "Member 'UAIFwBTRunPerceptionTree::PerceptionTree' has a wrong offset!");
static_assert(offsetof(UAIFwBTRunPerceptionTree, BlackboardKey) == 0x000048, "Member 'UAIFwBTRunPerceptionTree::BlackboardKey' has a wrong offset!");
static_assert(offsetof(UAIFwBTRunPerceptionTree, RunMode) == 0x000068, "Member 'UAIFwBTRunPerceptionTree::RunMode' has a wrong offset!");
static_assert(offsetof(UAIFwBTRunPerceptionTree, MaxCount) == 0x000070, "Member 'UAIFwBTRunPerceptionTree::MaxCount' has a wrong offset!");

// Class AIFramework.AIFwBTService_ReactiveSkill
// 0x0010 (0x0080 - 0x0070)
class UAIFwBTService_ReactiveSkill final : public UBTService
{
public:
	class FName                                   SkillTag;                                          // 0x0070(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         bEnable : 1;                                       // 0x0078(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         Pad_1A85[0x7];                                     // 0x0079(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwBTService_ReactiveSkill">();
	}
	static class UAIFwBTService_ReactiveSkill* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwBTService_ReactiveSkill>();
	}
};
static_assert(alignof(UAIFwBTService_ReactiveSkill) == 0x000008, "Wrong alignment on UAIFwBTService_ReactiveSkill");
static_assert(sizeof(UAIFwBTService_ReactiveSkill) == 0x000080, "Wrong size on UAIFwBTService_ReactiveSkill");
static_assert(offsetof(UAIFwBTService_ReactiveSkill, SkillTag) == 0x000070, "Member 'UAIFwBTService_ReactiveSkill::SkillTag' has a wrong offset!");

// Class AIFramework.AIFwBTService_RunPerceptionTree
// 0x0010 (0x00A8 - 0x0098)
class UAIFwBTService_RunPerceptionTree final : public UBTService_BlackboardBase
{
public:
	class UAIFwBehaviorTree*                      PerceptionTree;                                    // 0x0098(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bClearBBValueWhenFailed;                           // 0x00A0(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1A86[0x7];                                     // 0x00A1(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwBTService_RunPerceptionTree">();
	}
	static class UAIFwBTService_RunPerceptionTree* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwBTService_RunPerceptionTree>();
	}
};
static_assert(alignof(UAIFwBTService_RunPerceptionTree) == 0x000008, "Wrong alignment on UAIFwBTService_RunPerceptionTree");
static_assert(sizeof(UAIFwBTService_RunPerceptionTree) == 0x0000A8, "Wrong size on UAIFwBTService_RunPerceptionTree");
static_assert(offsetof(UAIFwBTService_RunPerceptionTree, PerceptionTree) == 0x000098, "Member 'UAIFwBTService_RunPerceptionTree::PerceptionTree' has a wrong offset!");
static_assert(offsetof(UAIFwBTService_RunPerceptionTree, bClearBBValueWhenFailed) == 0x0000A0, "Member 'UAIFwBTService_RunPerceptionTree::bClearBBValueWhenFailed' has a wrong offset!");

// Class AIFramework.AIFwBTTask_RunHTNPlan
// 0x0010 (0x0080 - 0x0070)
class UAIFwBTTask_RunHTNPlan final : public UBTTaskNode
{
public:
	class FString                                 TaskName;                                          // 0x0070(0x0010)(Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwBTTask_RunHTNPlan">();
	}
	static class UAIFwBTTask_RunHTNPlan* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwBTTask_RunHTNPlan>();
	}
};
static_assert(alignof(UAIFwBTTask_RunHTNPlan) == 0x000008, "Wrong alignment on UAIFwBTTask_RunHTNPlan");
static_assert(sizeof(UAIFwBTTask_RunHTNPlan) == 0x000080, "Wrong size on UAIFwBTTask_RunHTNPlan");
static_assert(offsetof(UAIFwBTTask_RunHTNPlan, TaskName) == 0x000070, "Member 'UAIFwBTTask_RunHTNPlan::TaskName' has a wrong offset!");

// Class AIFramework.AIFwBTTask_RunPerceptionTree
// 0x0008 (0x00A0 - 0x0098)
class UAIFwBTTask_RunPerceptionTree final : public UBTTask_BlackboardBase
{
public:
	class UAIFwBehaviorTree*                      PerceptionTree;                                    // 0x0098(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwBTTask_RunPerceptionTree">();
	}
	static class UAIFwBTTask_RunPerceptionTree* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwBTTask_RunPerceptionTree>();
	}
};
static_assert(alignof(UAIFwBTTask_RunPerceptionTree) == 0x000008, "Wrong alignment on UAIFwBTTask_RunPerceptionTree");
static_assert(sizeof(UAIFwBTTask_RunPerceptionTree) == 0x0000A0, "Wrong size on UAIFwBTTask_RunPerceptionTree");
static_assert(offsetof(UAIFwBTTask_RunPerceptionTree, PerceptionTree) == 0x000098, "Member 'UAIFwBTTask_RunPerceptionTree::PerceptionTree' has a wrong offset!");

// Class AIFramework.AIFwBTTask_UseSmartObject
// 0x0010 (0x00A8 - 0x0098)
class UAIFwBTTask_UseSmartObject final : public UBTTask_BlackboardBase
{
public:
	class FString                                 Usage;                                             // 0x0098(0x0010)(Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwBTTask_UseSmartObject">();
	}
	static class UAIFwBTTask_UseSmartObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwBTTask_UseSmartObject>();
	}
};
static_assert(alignof(UAIFwBTTask_UseSmartObject) == 0x000008, "Wrong alignment on UAIFwBTTask_UseSmartObject");
static_assert(sizeof(UAIFwBTTask_UseSmartObject) == 0x0000A8, "Wrong size on UAIFwBTTask_UseSmartObject");
static_assert(offsetof(UAIFwBTTask_UseSmartObject, Usage) == 0x000098, "Member 'UAIFwBTTask_UseSmartObject::Usage' has a wrong offset!");

// Class AIFramework.AIFwBTTeleportTo
// 0x0028 (0x0068 - 0x0040)
class UAIFwBTTeleportTo final : public UAIFwBTNode
{
public:
	uint8                                         Pad_1A87[0x8];                                     // 0x0040(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAIFwBTNodePropertyString              BlackboardKey;                                     // 0x0048(0x0020)(Edit, Protected, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwBTTeleportTo">();
	}
	static class UAIFwBTTeleportTo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwBTTeleportTo>();
	}
};
static_assert(alignof(UAIFwBTTeleportTo) == 0x000008, "Wrong alignment on UAIFwBTTeleportTo");
static_assert(sizeof(UAIFwBTTeleportTo) == 0x000068, "Wrong size on UAIFwBTTeleportTo");
static_assert(offsetof(UAIFwBTTeleportTo, BlackboardKey) == 0x000048, "Member 'UAIFwBTTeleportTo::BlackboardKey' has a wrong offset!");

// Class AIFramework.AIFwBTToggleReactiveSkill
// 0x0010 (0x0048 - 0x0038)
class UAIFwBTToggleReactiveSkill final : public UAIFwBTDecoratorNode
{
public:
	class FName                                   SkillTag;                                          // 0x0038(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnable;                                           // 0x0040(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A88[0x7];                                     // 0x0041(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwBTToggleReactiveSkill">();
	}
	static class UAIFwBTToggleReactiveSkill* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwBTToggleReactiveSkill>();
	}
};
static_assert(alignof(UAIFwBTToggleReactiveSkill) == 0x000008, "Wrong alignment on UAIFwBTToggleReactiveSkill");
static_assert(sizeof(UAIFwBTToggleReactiveSkill) == 0x000048, "Wrong size on UAIFwBTToggleReactiveSkill");
static_assert(offsetof(UAIFwBTToggleReactiveSkill, SkillTag) == 0x000038, "Member 'UAIFwBTToggleReactiveSkill::SkillTag' has a wrong offset!");
static_assert(offsetof(UAIFwBTToggleReactiveSkill, bEnable) == 0x000040, "Member 'UAIFwBTToggleReactiveSkill::bEnable' has a wrong offset!");

// Class AIFramework.AIFwEntityComponent
// 0x0008 (0x00C0 - 0x00B8)
class UAIFwEntityComponent final : public UActorComponent
{
public:
	uint8                                         Pad_1A89[0x8];                                     // 0x00B8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwEntityComponent">();
	}
	static class UAIFwEntityComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwEntityComponent>();
	}
};
static_assert(alignof(UAIFwEntityComponent) == 0x000008, "Wrong alignment on UAIFwEntityComponent");
static_assert(sizeof(UAIFwEntityComponent) == 0x0000C0, "Wrong size on UAIFwEntityComponent");

// Class AIFramework.AIFwFactionComponent
// 0x0040 (0x00F8 - 0x00B8)
class UAIFwFactionComponent final : public UActorComponent
{
public:
	uint8                                         Pad_1A8A[0x10];                                    // 0x00B8(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 FactionNameString;                                 // 0x00C8(0x0010)(Net, ZeroConstructor, RepNotify, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                   FactionName;                                       // 0x00D8(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1A8B[0x18];                                    // 0x00E0(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnRep_FactionNameString();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwFactionComponent">();
	}
	static class UAIFwFactionComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwFactionComponent>();
	}
};
static_assert(alignof(UAIFwFactionComponent) == 0x000008, "Wrong alignment on UAIFwFactionComponent");
static_assert(sizeof(UAIFwFactionComponent) == 0x0000F8, "Wrong size on UAIFwFactionComponent");
static_assert(offsetof(UAIFwFactionComponent, FactionNameString) == 0x0000C8, "Member 'UAIFwFactionComponent::FactionNameString' has a wrong offset!");
static_assert(offsetof(UAIFwFactionComponent, FactionName) == 0x0000D8, "Member 'UAIFwFactionComponent::FactionName' has a wrong offset!");

// Class AIFramework.AIFwHierarchyComponent
// 0x0018 (0x00D0 - 0x00B8)
class UAIFwHierarchyComponent : public UActorComponent
{
public:
	class UAIFwHierarchyComponent*                Parent;                                            // 0x00B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UAIFwHierarchyComponent*>        Children;                                          // 0x00C0(0x0010)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

public:
	bool Add(class AActor* Actor);
	bool Remove(class AActor* Actor);
	void SendMessageToChildren(class FName Message, class UObject* MessageSource, bool bSuccess, class AActor* IgnoreActor);
	void SendMessageToParent(class FName Message, class UObject* MessageSource, bool bSuccess);
	void SendMessageToSiblings(class FName Message, class UObject* MessageSource, bool bSuccess);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwHierarchyComponent">();
	}
	static class UAIFwHierarchyComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwHierarchyComponent>();
	}
};
static_assert(alignof(UAIFwHierarchyComponent) == 0x000008, "Wrong alignment on UAIFwHierarchyComponent");
static_assert(sizeof(UAIFwHierarchyComponent) == 0x0000D0, "Wrong size on UAIFwHierarchyComponent");
static_assert(offsetof(UAIFwHierarchyComponent, Parent) == 0x0000B8, "Member 'UAIFwHierarchyComponent::Parent' has a wrong offset!");
static_assert(offsetof(UAIFwHierarchyComponent, Children) == 0x0000C0, "Member 'UAIFwHierarchyComponent::Children' has a wrong offset!");

// Class AIFramework.AIFwHTNBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UAIFwHTNBlueprintLibrary final : public UBlueprintFunctionLibrary
{
public:
	static class UAIFwHTNTempOp_Always* HTNAlways(class UAIFwHTNOperator* Operator);
	static class UAIFwHTNTempOp_AlwaysAfter* HTNAlwaysAfter(class UAIFwHTNOperator* OperatorA, class UAIFwHTNOperator* OperatorB);
	static class UAIFwHTNTempOp_AlwaysBefore* HTNAlwaysBefore(class UAIFwHTNOperator* OperatorA, class UAIFwHTNOperator* OperatorB);
	static class UAIFwHTNOperator_Apply* HTNApply(const class FString& TaskName, const class FString& MethodName);
	static class UAIFwHTNOperator_Not* HTNNot(class UAIFwHTNOperator* Operator);
	static class UAIFwHTNOperator_Occur* HTNOccur(const class FString& TaskName);
	static class UAIFwHTNTempOp_Sometime* HTNSometime(class UAIFwHTNOperator* Operator);
	static class UAIFwHTNTempOp_SometimeAfter* HTNSometimeAfter(class UAIFwHTNOperator* OperatorA, class UAIFwHTNOperator* OperatorB);
	static class UAIFwHTNTempOp_SometimeBefore* HTNSometimeBefore(class UAIFwHTNOperator* OperatorA, class UAIFwHTNOperator* OperatorB);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwHTNBlueprintLibrary">();
	}
	static class UAIFwHTNBlueprintLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwHTNBlueprintLibrary>();
	}
};
static_assert(alignof(UAIFwHTNBlueprintLibrary) == 0x000008, "Wrong alignment on UAIFwHTNBlueprintLibrary");
static_assert(sizeof(UAIFwHTNBlueprintLibrary) == 0x000028, "Wrong size on UAIFwHTNBlueprintLibrary");

// Class AIFramework.AIFwHTNDomain
// 0x0010 (0x0040 - 0x0030)
class UAIFwHTNDomain final : public UAIFwNodeBasedAsset
{
public:
	uint8                                         Pad_1A91[0x10];                                    // 0x0030(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwHTNDomain">();
	}
	static class UAIFwHTNDomain* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwHTNDomain>();
	}
};
static_assert(alignof(UAIFwHTNDomain) == 0x000008, "Wrong alignment on UAIFwHTNDomain");
static_assert(sizeof(UAIFwHTNDomain) == 0x000040, "Wrong size on UAIFwHTNDomain");

// Class AIFramework.AIFwHTNNode
// 0x0000 (0x0030 - 0x0030)
class UAIFwHTNNode : public UAIFwNodeBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwHTNNode">();
	}
	static class UAIFwHTNNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwHTNNode>();
	}
};
static_assert(alignof(UAIFwHTNNode) == 0x000008, "Wrong alignment on UAIFwHTNNode");
static_assert(sizeof(UAIFwHTNNode) == 0x000030, "Wrong size on UAIFwHTNNode");

// Class AIFramework.AIFwHTNOperator
// 0x0000 (0x0028 - 0x0028)
class UAIFwHTNOperator : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwHTNOperator">();
	}
	static class UAIFwHTNOperator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwHTNOperator>();
	}
};
static_assert(alignof(UAIFwHTNOperator) == 0x000008, "Wrong alignment on UAIFwHTNOperator");
static_assert(sizeof(UAIFwHTNOperator) == 0x000028, "Wrong size on UAIFwHTNOperator");

// Class AIFramework.AIFwHTNOperator_Apply
// 0x0020 (0x0048 - 0x0028)
class UAIFwHTNOperator_Apply final : public UAIFwHTNOperator
{
public:
	uint8                                         Pad_1A92[0x20];                                    // 0x0028(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwHTNOperator_Apply">();
	}
	static class UAIFwHTNOperator_Apply* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwHTNOperator_Apply>();
	}
};
static_assert(alignof(UAIFwHTNOperator_Apply) == 0x000008, "Wrong alignment on UAIFwHTNOperator_Apply");
static_assert(sizeof(UAIFwHTNOperator_Apply) == 0x000048, "Wrong size on UAIFwHTNOperator_Apply");

// Class AIFramework.AIFwHTNOperator_Not
// 0x0008 (0x0030 - 0x0028)
class UAIFwHTNOperator_Not final : public UAIFwHTNOperator
{
public:
	uint8                                         Pad_1A93[0x8];                                     // 0x0028(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwHTNOperator_Not">();
	}
	static class UAIFwHTNOperator_Not* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwHTNOperator_Not>();
	}
};
static_assert(alignof(UAIFwHTNOperator_Not) == 0x000008, "Wrong alignment on UAIFwHTNOperator_Not");
static_assert(sizeof(UAIFwHTNOperator_Not) == 0x000030, "Wrong size on UAIFwHTNOperator_Not");

// Class AIFramework.AIFwHTNOperator_Occur
// 0x0010 (0x0038 - 0x0028)
class UAIFwHTNOperator_Occur final : public UAIFwHTNOperator
{
public:
	uint8                                         Pad_1A94[0x10];                                    // 0x0028(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwHTNOperator_Occur">();
	}
	static class UAIFwHTNOperator_Occur* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwHTNOperator_Occur>();
	}
};
static_assert(alignof(UAIFwHTNOperator_Occur) == 0x000008, "Wrong alignment on UAIFwHTNOperator_Occur");
static_assert(sizeof(UAIFwHTNOperator_Occur) == 0x000038, "Wrong size on UAIFwHTNOperator_Occur");

// Class AIFramework.AIFwHTNPlanningComponent
// 0x0100 (0x01B8 - 0x00B8)
class UAIFwHTNPlanningComponent final : public UActorComponent
{
public:
	uint8                                         Pad_1A95[0x68];                                    // 0x00B8(0x0068)(Fixing Size After Last Property [ Dumper-7 ])
	class UAIFwHTNState*                          State;                                             // 0x0120(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UAIFwHTNDomain*>                 Domains;                                           // 0x0128(0x0010)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_1A96[0x80];                                    // 0x0138(0x0080)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static struct FAIFwHTNMethod FindMethodByName(const struct FAIFwHTNTask& Task, const class FString& Param_Name);
	static bool IsValidMethod(const struct FAIFwHTNMethod& Method);
	static bool IsValidTask(const struct FAIFwHTNTask& Task);
	static void SetName(const struct FAIFwHTNMethod& Method, const class FString& Param_Name);

	void AddGoalPreference(const class FString& Param_Name, class UAIFwHTNOperator* Operator, bool bHardConstraint);
	void AddMetricWeight(const class FString& PreferenceName, float Weight);
	void AddPreconditionPreference(const class FString& Param_Name, const class FString& TaskName, const class FString& MethodName, class UAIFwHTNOperator* Operator, bool bHardConstraint);
	void AddTrajectoryPreference(const class FString& Param_Name, class UAIFwHTNTemporalModalOperator* TemporalOperator, bool bHardConstraint);
	void AppendDomain(class UAIFwHTNDomain* NewDomain, bool bOverrideCompound);
	struct FAIFwHTNMethod FindMethod(const class FString& TaskName, const class FString& MethodName);
	struct FAIFwHTNTask FindTask(const class FString& Param_Name);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwHTNPlanningComponent">();
	}
	static class UAIFwHTNPlanningComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwHTNPlanningComponent>();
	}
};
static_assert(alignof(UAIFwHTNPlanningComponent) == 0x000008, "Wrong alignment on UAIFwHTNPlanningComponent");
static_assert(sizeof(UAIFwHTNPlanningComponent) == 0x0001B8, "Wrong size on UAIFwHTNPlanningComponent");
static_assert(offsetof(UAIFwHTNPlanningComponent, State) == 0x000120, "Member 'UAIFwHTNPlanningComponent::State' has a wrong offset!");
static_assert(offsetof(UAIFwHTNPlanningComponent, Domains) == 0x000128, "Member 'UAIFwHTNPlanningComponent::Domains' has a wrong offset!");

// Class AIFramework.AIFwHTNState
// 0x0010 (0x0038 - 0x0028)
class UAIFwHTNState final : public UObject
{
public:
	uint8                                         Pad_1A9E[0x10];                                    // 0x0028(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetValueAsBool(const class FString& KeyName, bool BoolValue);
	void SetValueAsEnum(const class FString& KeyName, uint8 EnumValue);
	void SetValueAsFloat(const class FString& KeyName, float FloatValue);
	void SetValueAsInt(const class FString& KeyName, int32 IntValue);

	bool GetValueAsBool(const class FString& KeyName) const;
	uint8 GetValueAsEnum(const class FString& KeyName) const;
	float GetValueAsFloat(const class FString& KeyName) const;
	int32 GetValueAsInt(const class FString& KeyName) const;
	bool IsValidKey(const class FString& KeyName) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwHTNState">();
	}
	static class UAIFwHTNState* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwHTNState>();
	}
};
static_assert(alignof(UAIFwHTNState) == 0x000008, "Wrong alignment on UAIFwHTNState");
static_assert(sizeof(UAIFwHTNState) == 0x000038, "Wrong size on UAIFwHTNState");

// Class AIFramework.AIFwHTNTemporalModalOperator
// 0x0000 (0x0028 - 0x0028)
class UAIFwHTNTemporalModalOperator : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwHTNTemporalModalOperator">();
	}
	static class UAIFwHTNTemporalModalOperator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwHTNTemporalModalOperator>();
	}
};
static_assert(alignof(UAIFwHTNTemporalModalOperator) == 0x000008, "Wrong alignment on UAIFwHTNTemporalModalOperator");
static_assert(sizeof(UAIFwHTNTemporalModalOperator) == 0x000028, "Wrong size on UAIFwHTNTemporalModalOperator");

// Class AIFramework.AIFwHTNTempOp_Always
// 0x0008 (0x0030 - 0x0028)
class UAIFwHTNTempOp_Always final : public UAIFwHTNTemporalModalOperator
{
public:
	class UAIFwHTNOperator*                       Operator;                                          // 0x0028(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwHTNTempOp_Always">();
	}
	static class UAIFwHTNTempOp_Always* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwHTNTempOp_Always>();
	}
};
static_assert(alignof(UAIFwHTNTempOp_Always) == 0x000008, "Wrong alignment on UAIFwHTNTempOp_Always");
static_assert(sizeof(UAIFwHTNTempOp_Always) == 0x000030, "Wrong size on UAIFwHTNTempOp_Always");
static_assert(offsetof(UAIFwHTNTempOp_Always, Operator) == 0x000028, "Member 'UAIFwHTNTempOp_Always::Operator' has a wrong offset!");

// Class AIFramework.AIFwHTNTempOp_AlwaysAfter
// 0x0010 (0x0038 - 0x0028)
class UAIFwHTNTempOp_AlwaysAfter final : public UAIFwHTNTemporalModalOperator
{
public:
	class UAIFwHTNOperator*                       OperatorA;                                         // 0x0028(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAIFwHTNOperator*                       OperatorB;                                         // 0x0030(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwHTNTempOp_AlwaysAfter">();
	}
	static class UAIFwHTNTempOp_AlwaysAfter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwHTNTempOp_AlwaysAfter>();
	}
};
static_assert(alignof(UAIFwHTNTempOp_AlwaysAfter) == 0x000008, "Wrong alignment on UAIFwHTNTempOp_AlwaysAfter");
static_assert(sizeof(UAIFwHTNTempOp_AlwaysAfter) == 0x000038, "Wrong size on UAIFwHTNTempOp_AlwaysAfter");
static_assert(offsetof(UAIFwHTNTempOp_AlwaysAfter, OperatorA) == 0x000028, "Member 'UAIFwHTNTempOp_AlwaysAfter::OperatorA' has a wrong offset!");
static_assert(offsetof(UAIFwHTNTempOp_AlwaysAfter, OperatorB) == 0x000030, "Member 'UAIFwHTNTempOp_AlwaysAfter::OperatorB' has a wrong offset!");

// Class AIFramework.AIFwHTNTempOp_AlwaysBefore
// 0x0010 (0x0038 - 0x0028)
class UAIFwHTNTempOp_AlwaysBefore final : public UAIFwHTNTemporalModalOperator
{
public:
	class UAIFwHTNOperator*                       OperatorA;                                         // 0x0028(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAIFwHTNOperator*                       OperatorB;                                         // 0x0030(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwHTNTempOp_AlwaysBefore">();
	}
	static class UAIFwHTNTempOp_AlwaysBefore* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwHTNTempOp_AlwaysBefore>();
	}
};
static_assert(alignof(UAIFwHTNTempOp_AlwaysBefore) == 0x000008, "Wrong alignment on UAIFwHTNTempOp_AlwaysBefore");
static_assert(sizeof(UAIFwHTNTempOp_AlwaysBefore) == 0x000038, "Wrong size on UAIFwHTNTempOp_AlwaysBefore");
static_assert(offsetof(UAIFwHTNTempOp_AlwaysBefore, OperatorA) == 0x000028, "Member 'UAIFwHTNTempOp_AlwaysBefore::OperatorA' has a wrong offset!");
static_assert(offsetof(UAIFwHTNTempOp_AlwaysBefore, OperatorB) == 0x000030, "Member 'UAIFwHTNTempOp_AlwaysBefore::OperatorB' has a wrong offset!");

// Class AIFramework.AIFwHTNTempOp_Sometime
// 0x0008 (0x0030 - 0x0028)
class UAIFwHTNTempOp_Sometime final : public UAIFwHTNTemporalModalOperator
{
public:
	class UAIFwHTNOperator*                       Operator;                                          // 0x0028(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwHTNTempOp_Sometime">();
	}
	static class UAIFwHTNTempOp_Sometime* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwHTNTempOp_Sometime>();
	}
};
static_assert(alignof(UAIFwHTNTempOp_Sometime) == 0x000008, "Wrong alignment on UAIFwHTNTempOp_Sometime");
static_assert(sizeof(UAIFwHTNTempOp_Sometime) == 0x000030, "Wrong size on UAIFwHTNTempOp_Sometime");
static_assert(offsetof(UAIFwHTNTempOp_Sometime, Operator) == 0x000028, "Member 'UAIFwHTNTempOp_Sometime::Operator' has a wrong offset!");

// Class AIFramework.AIFwHTNTempOp_SometimeAfter
// 0x0010 (0x0038 - 0x0028)
class UAIFwHTNTempOp_SometimeAfter final : public UAIFwHTNTemporalModalOperator
{
public:
	class UAIFwHTNOperator*                       OperatorA;                                         // 0x0028(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAIFwHTNOperator*                       OperatorB;                                         // 0x0030(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwHTNTempOp_SometimeAfter">();
	}
	static class UAIFwHTNTempOp_SometimeAfter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwHTNTempOp_SometimeAfter>();
	}
};
static_assert(alignof(UAIFwHTNTempOp_SometimeAfter) == 0x000008, "Wrong alignment on UAIFwHTNTempOp_SometimeAfter");
static_assert(sizeof(UAIFwHTNTempOp_SometimeAfter) == 0x000038, "Wrong size on UAIFwHTNTempOp_SometimeAfter");
static_assert(offsetof(UAIFwHTNTempOp_SometimeAfter, OperatorA) == 0x000028, "Member 'UAIFwHTNTempOp_SometimeAfter::OperatorA' has a wrong offset!");
static_assert(offsetof(UAIFwHTNTempOp_SometimeAfter, OperatorB) == 0x000030, "Member 'UAIFwHTNTempOp_SometimeAfter::OperatorB' has a wrong offset!");

// Class AIFramework.AIFwHTNTempOp_SometimeBefore
// 0x0010 (0x0038 - 0x0028)
class UAIFwHTNTempOp_SometimeBefore final : public UAIFwHTNTemporalModalOperator
{
public:
	class UAIFwHTNOperator*                       OperatorA;                                         // 0x0028(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAIFwHTNOperator*                       OperatorB;                                         // 0x0030(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwHTNTempOp_SometimeBefore">();
	}
	static class UAIFwHTNTempOp_SometimeBefore* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwHTNTempOp_SometimeBefore>();
	}
};
static_assert(alignof(UAIFwHTNTempOp_SometimeBefore) == 0x000008, "Wrong alignment on UAIFwHTNTempOp_SometimeBefore");
static_assert(sizeof(UAIFwHTNTempOp_SometimeBefore) == 0x000038, "Wrong size on UAIFwHTNTempOp_SometimeBefore");
static_assert(offsetof(UAIFwHTNTempOp_SometimeBefore, OperatorA) == 0x000028, "Member 'UAIFwHTNTempOp_SometimeBefore::OperatorA' has a wrong offset!");
static_assert(offsetof(UAIFwHTNTempOp_SometimeBefore, OperatorB) == 0x000030, "Member 'UAIFwHTNTempOp_SometimeBefore::OperatorB' has a wrong offset!");

// Class AIFramework.AIFwInfluenceMapLayer
// 0x0090 (0x00B8 - 0x0028)
class UAIFwInfluenceMapLayer final : public UObject
{
public:
	uint8                                         Pad_1AA8[0x8];                                     // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIFwInfluenceMapLayout*                Layout;                                            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1AA9[0x80];                                    // 0x0038(0x0080)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void RegisterSource(class AActor* Actor, float Radius, float Value);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwInfluenceMapLayer">();
	}
	static class UAIFwInfluenceMapLayer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwInfluenceMapLayer>();
	}
};
static_assert(alignof(UAIFwInfluenceMapLayer) == 0x000008, "Wrong alignment on UAIFwInfluenceMapLayer");
static_assert(sizeof(UAIFwInfluenceMapLayer) == 0x0000B8, "Wrong size on UAIFwInfluenceMapLayer");
static_assert(offsetof(UAIFwInfluenceMapLayer, Layout) == 0x000030, "Member 'UAIFwInfluenceMapLayer::Layout' has a wrong offset!");

// Class AIFramework.AIFwInfluenceMapLayout
// 0x0088 (0x02B0 - 0x0228)
class AAIFwInfluenceMapLayout final : public AActor
{
public:
	class UPrimitiveComponent*                    RenderingComp;                                     // 0x0228(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         bEnableDrawing : 1;                                // 0x0230(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         Pad_1AAA[0x3];                                     // 0x0231(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DrawDistance;                                      // 0x0234(0x0004)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ARecastNavMesh*                         NavMesh;                                           // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Origin;                                            // 0x0240(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CellSize;                                          // 0x024C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAIFwIMapLayoutCell>            Cells;                                             // 0x0250(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_1AAB[0x50];                                    // 0x0260(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwInfluenceMapLayout">();
	}
	static class AAIFwInfluenceMapLayout* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAIFwInfluenceMapLayout>();
	}
};
static_assert(alignof(AAIFwInfluenceMapLayout) == 0x000008, "Wrong alignment on AAIFwInfluenceMapLayout");
static_assert(sizeof(AAIFwInfluenceMapLayout) == 0x0002B0, "Wrong size on AAIFwInfluenceMapLayout");
static_assert(offsetof(AAIFwInfluenceMapLayout, RenderingComp) == 0x000228, "Member 'AAIFwInfluenceMapLayout::RenderingComp' has a wrong offset!");
static_assert(offsetof(AAIFwInfluenceMapLayout, DrawDistance) == 0x000234, "Member 'AAIFwInfluenceMapLayout::DrawDistance' has a wrong offset!");
static_assert(offsetof(AAIFwInfluenceMapLayout, NavMesh) == 0x000238, "Member 'AAIFwInfluenceMapLayout::NavMesh' has a wrong offset!");
static_assert(offsetof(AAIFwInfluenceMapLayout, Origin) == 0x000240, "Member 'AAIFwInfluenceMapLayout::Origin' has a wrong offset!");
static_assert(offsetof(AAIFwInfluenceMapLayout, CellSize) == 0x00024C, "Member 'AAIFwInfluenceMapLayout::CellSize' has a wrong offset!");
static_assert(offsetof(AAIFwInfluenceMapLayout, Cells) == 0x000250, "Member 'AAIFwInfluenceMapLayout::Cells' has a wrong offset!");

// Class AIFramework.AIFwInfluenceMapLayoutRenderingComponent
// 0x0000 (0x0470 - 0x0470)
class UAIFwInfluenceMapLayoutRenderingComponent final : public UPrimitiveComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwInfluenceMapLayoutRenderingComponent">();
	}
	static class UAIFwInfluenceMapLayoutRenderingComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwInfluenceMapLayoutRenderingComponent>();
	}
};
static_assert(alignof(UAIFwInfluenceMapLayoutRenderingComponent) == 0x000010, "Wrong alignment on UAIFwInfluenceMapLayoutRenderingComponent");
static_assert(sizeof(UAIFwInfluenceMapLayoutRenderingComponent) == 0x000470, "Wrong size on UAIFwInfluenceMapLayoutRenderingComponent");

// Class AIFramework.AIFwInfluenceMapManager
// 0x00B0 (0x00D8 - 0x0028)
class UAIFwInfluenceMapManager final : public UObject
{
public:
	uint8                                         Pad_1AAC[0x10];                                    // 0x0028(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FString, class UAIFwInfluenceMapLayer*> Layers;                                            // 0x0038(0x0050)(Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_1AAD[0x50];                                    // 0x0088(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UAIFwInfluenceMapLayer* CreateOrGetLayer(class UObject* WorldContextObject, const class FString& Param_Name);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwInfluenceMapManager">();
	}
	static class UAIFwInfluenceMapManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwInfluenceMapManager>();
	}
};
static_assert(alignof(UAIFwInfluenceMapManager) == 0x000008, "Wrong alignment on UAIFwInfluenceMapManager");
static_assert(sizeof(UAIFwInfluenceMapManager) == 0x0000D8, "Wrong size on UAIFwInfluenceMapManager");
static_assert(offsetof(UAIFwInfluenceMapManager, Layers) == 0x000038, "Member 'UAIFwInfluenceMapManager::Layers' has a wrong offset!");

// Class AIFramework.AIFwNavigationSystem
// 0x0010 (0x15F0 - 0x15E0)
class UAIFwNavigationSystem : public UNavigationSystemV1
{
public:
	uint8                                         Pad_1AAE[0x10];                                    // 0x15E0(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwNavigationSystem">();
	}
	static class UAIFwNavigationSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwNavigationSystem>();
	}
};
static_assert(alignof(UAIFwNavigationSystem) == 0x000008, "Wrong alignment on UAIFwNavigationSystem");
static_assert(sizeof(UAIFwNavigationSystem) == 0x0015F0, "Wrong size on UAIFwNavigationSystem");

// Class AIFramework.AIFwNavVolume
// 0x0050 (0x0480 - 0x0430)
class AAIFwNavVolume final : public ANavigationData
{
public:
	uint8                                         bDrawWallVoxels : 1;                               // 0x0430(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bDrawEmptyVoxels : 1;                              // 0x0430(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bLightDrawMode : 1;                                // 0x0430(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bAutoUpdateRenderTarget : 1;                       // 0x0430(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_1AAF[0x3];                                     // 0x0431(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         VoxelSize;                                         // 0x0434(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DefaultDrawDistance;                               // 0x0438(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DefaultMaxSearchNodes;                             // 0x043C(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bDoFullyAsyncNavDataGathering : 1;                 // 0x0440(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_1AB0[0x3];                                     // 0x0441(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         NumEmptyVoxels;                                    // 0x0444(0x0004)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NumWallVoxels;                                     // 0x0448(0x0004)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1AB1[0x24];                                    // 0x044C(0x0024)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         HeuristicScale;                                    // 0x0470(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1AB2[0xC];                                     // 0x0474(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwNavVolume">();
	}
	static class AAIFwNavVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAIFwNavVolume>();
	}
};
static_assert(alignof(AAIFwNavVolume) == 0x000008, "Wrong alignment on AAIFwNavVolume");
static_assert(sizeof(AAIFwNavVolume) == 0x000480, "Wrong size on AAIFwNavVolume");
static_assert(offsetof(AAIFwNavVolume, VoxelSize) == 0x000434, "Member 'AAIFwNavVolume::VoxelSize' has a wrong offset!");
static_assert(offsetof(AAIFwNavVolume, DefaultDrawDistance) == 0x000438, "Member 'AAIFwNavVolume::DefaultDrawDistance' has a wrong offset!");
static_assert(offsetof(AAIFwNavVolume, DefaultMaxSearchNodes) == 0x00043C, "Member 'AAIFwNavVolume::DefaultMaxSearchNodes' has a wrong offset!");
static_assert(offsetof(AAIFwNavVolume, NumEmptyVoxels) == 0x000444, "Member 'AAIFwNavVolume::NumEmptyVoxels' has a wrong offset!");
static_assert(offsetof(AAIFwNavVolume, NumWallVoxels) == 0x000448, "Member 'AAIFwNavVolume::NumWallVoxels' has a wrong offset!");
static_assert(offsetof(AAIFwNavVolume, HeuristicScale) == 0x000470, "Member 'AAIFwNavVolume::HeuristicScale' has a wrong offset!");

// Class AIFramework.AIFwNavVolumeBoundsVolume
// 0x0008 (0x0268 - 0x0260)
class AAIFwNavVolumeBoundsVolume final : public AVolume
{
public:
	struct FNavAgentSelector                      SupportedAgents;                                   // 0x0260(0x0004)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_1AB3[0x4];                                     // 0x0264(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwNavVolumeBoundsVolume">();
	}
	static class AAIFwNavVolumeBoundsVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAIFwNavVolumeBoundsVolume>();
	}
};
static_assert(alignof(AAIFwNavVolumeBoundsVolume) == 0x000008, "Wrong alignment on AAIFwNavVolumeBoundsVolume");
static_assert(sizeof(AAIFwNavVolumeBoundsVolume) == 0x000268, "Wrong size on AAIFwNavVolumeBoundsVolume");
static_assert(offsetof(AAIFwNavVolumeBoundsVolume, SupportedAgents) == 0x000260, "Member 'AAIFwNavVolumeBoundsVolume::SupportedAgents' has a wrong offset!");

// Class AIFramework.AIFwNavVolumeRenderingComponent
// 0x0010 (0x0480 - 0x0470)
class UAIFwNavVolumeRenderingComponent final : public UPrimitiveComponent
{
public:
	uint8                                         Pad_1AB4[0x18];                                    // 0x0468(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwNavVolumeRenderingComponent">();
	}
	static class UAIFwNavVolumeRenderingComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwNavVolumeRenderingComponent>();
	}
};
static_assert(alignof(UAIFwNavVolumeRenderingComponent) == 0x000010, "Wrong alignment on UAIFwNavVolumeRenderingComponent");
static_assert(sizeof(UAIFwNavVolumeRenderingComponent) == 0x000480, "Wrong size on UAIFwNavVolumeRenderingComponent");

// Class AIFramework.AIFwPTEvaluationTrace
// 0x0018 (0x0068 - 0x0050)
class UAIFwPTEvaluationTrace : public UAIFwPTEvaluationNodeUseCriterion
{
public:
	float                                         Extent;                                            // 0x0050(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          TraceFromCriterion;                                // 0x0054(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1AB5[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ItemHeightOffset;                                  // 0x0058(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         CriterionHeightOffset;                             // 0x005C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          Acceptance;                                        // 0x0060(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1AB6[0x7];                                     // 0x0061(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwPTEvaluationTrace">();
	}
	static class UAIFwPTEvaluationTrace* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwPTEvaluationTrace>();
	}
};
static_assert(alignof(UAIFwPTEvaluationTrace) == 0x000008, "Wrong alignment on UAIFwPTEvaluationTrace");
static_assert(sizeof(UAIFwPTEvaluationTrace) == 0x000068, "Wrong size on UAIFwPTEvaluationTrace");
static_assert(offsetof(UAIFwPTEvaluationTrace, Extent) == 0x000050, "Member 'UAIFwPTEvaluationTrace::Extent' has a wrong offset!");
static_assert(offsetof(UAIFwPTEvaluationTrace, TraceFromCriterion) == 0x000054, "Member 'UAIFwPTEvaluationTrace::TraceFromCriterion' has a wrong offset!");
static_assert(offsetof(UAIFwPTEvaluationTrace, ItemHeightOffset) == 0x000058, "Member 'UAIFwPTEvaluationTrace::ItemHeightOffset' has a wrong offset!");
static_assert(offsetof(UAIFwPTEvaluationTrace, CriterionHeightOffset) == 0x00005C, "Member 'UAIFwPTEvaluationTrace::CriterionHeightOffset' has a wrong offset!");
static_assert(offsetof(UAIFwPTEvaluationTrace, Acceptance) == 0x000060, "Member 'UAIFwPTEvaluationTrace::Acceptance' has a wrong offset!");

// Class AIFramework.AIFwPTGenerationNode
// 0x0010 (0x0040 - 0x0030)
class UAIFwPTGenerationNode : public UAIFwNodeBase
{
public:
	uint8                                         Pad_1AB7[0x10];                                    // 0x0030(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwPTGenerationNode">();
	}
	static class UAIFwPTGenerationNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwPTGenerationNode>();
	}
};
static_assert(alignof(UAIFwPTGenerationNode) == 0x000008, "Wrong alignment on UAIFwPTGenerationNode");
static_assert(sizeof(UAIFwPTGenerationNode) == 0x000040, "Wrong size on UAIFwPTGenerationNode");

// Class AIFramework.AIFwPTGenerationPointsAlongPath
// 0x0038 (0x0078 - 0x0040)
class UAIFwPTGenerationPointsAlongPath final : public UAIFwPTGenerationNode
{
public:
	EPTCriterionSlot                              PathStart;                                         // 0x0040(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	EPTCriterionSlot                              PathGoal;                                          // 0x0041(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1AB8[0x6];                                     // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAIFwBTNodePropertyFloat               Offset;                                            // 0x0048(0x0018)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FAIFwBTNodePropertyFloat               StepSize;                                          // 0x0060(0x0018)(Edit, Protected, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwPTGenerationPointsAlongPath">();
	}
	static class UAIFwPTGenerationPointsAlongPath* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwPTGenerationPointsAlongPath>();
	}
};
static_assert(alignof(UAIFwPTGenerationPointsAlongPath) == 0x000008, "Wrong alignment on UAIFwPTGenerationPointsAlongPath");
static_assert(sizeof(UAIFwPTGenerationPointsAlongPath) == 0x000078, "Wrong size on UAIFwPTGenerationPointsAlongPath");
static_assert(offsetof(UAIFwPTGenerationPointsAlongPath, PathStart) == 0x000040, "Member 'UAIFwPTGenerationPointsAlongPath::PathStart' has a wrong offset!");
static_assert(offsetof(UAIFwPTGenerationPointsAlongPath, PathGoal) == 0x000041, "Member 'UAIFwPTGenerationPointsAlongPath::PathGoal' has a wrong offset!");
static_assert(offsetof(UAIFwPTGenerationPointsAlongPath, Offset) == 0x000048, "Member 'UAIFwPTGenerationPointsAlongPath::Offset' has a wrong offset!");
static_assert(offsetof(UAIFwPTGenerationPointsAlongPath, StepSize) == 0x000060, "Member 'UAIFwPTGenerationPointsAlongPath::StepSize' has a wrong offset!");

// Class AIFramework.AIFwPTModificationNode
// 0x0000 (0x0030 - 0x0030)
class UAIFwPTModificationNode : public UAIFwNodeBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwPTModificationNode">();
	}
	static class UAIFwPTModificationNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwPTModificationNode>();
	}
};
static_assert(alignof(UAIFwPTModificationNode) == 0x000008, "Wrong alignment on UAIFwPTModificationNode");
static_assert(sizeof(UAIFwPTModificationNode) == 0x000030, "Wrong size on UAIFwPTModificationNode");

// Class AIFramework.AIFwPTModificationProjectOnGeometry
// 0x0060 (0x0090 - 0x0030)
class UAIFwPTModificationProjectOnGeometry final : public UAIFwPTModificationNode
{
public:
	struct FAIFwBTNodePropertyFloat               Extent;                                            // 0x0030(0x0018)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FAIFwBTNodePropertyFloat               ProjectDown;                                       // 0x0048(0x0018)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FAIFwBTNodePropertyFloat               ProjectUp;                                         // 0x0060(0x0018)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FAIFwBTNodePropertyFloat               PostProjectionVerticalOffset;                      // 0x0078(0x0018)(Edit, Protected, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwPTModificationProjectOnGeometry">();
	}
	static class UAIFwPTModificationProjectOnGeometry* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwPTModificationProjectOnGeometry>();
	}
};
static_assert(alignof(UAIFwPTModificationProjectOnGeometry) == 0x000008, "Wrong alignment on UAIFwPTModificationProjectOnGeometry");
static_assert(sizeof(UAIFwPTModificationProjectOnGeometry) == 0x000090, "Wrong size on UAIFwPTModificationProjectOnGeometry");
static_assert(offsetof(UAIFwPTModificationProjectOnGeometry, Extent) == 0x000030, "Member 'UAIFwPTModificationProjectOnGeometry::Extent' has a wrong offset!");
static_assert(offsetof(UAIFwPTModificationProjectOnGeometry, ProjectDown) == 0x000048, "Member 'UAIFwPTModificationProjectOnGeometry::ProjectDown' has a wrong offset!");
static_assert(offsetof(UAIFwPTModificationProjectOnGeometry, ProjectUp) == 0x000060, "Member 'UAIFwPTModificationProjectOnGeometry::ProjectUp' has a wrong offset!");
static_assert(offsetof(UAIFwPTModificationProjectOnGeometry, PostProjectionVerticalOffset) == 0x000078, "Member 'UAIFwPTModificationProjectOnGeometry::PostProjectionVerticalOffset' has a wrong offset!");

// Class AIFramework.AIFwPTModificationProjectOnNavMesh
// 0x0060 (0x0090 - 0x0030)
class UAIFwPTModificationProjectOnNavMesh final : public UAIFwPTModificationNode
{
public:
	struct FAIFwBTNodePropertyFloat               Extent;                                            // 0x0030(0x0018)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FAIFwBTNodePropertyFloat               ProjectDown;                                       // 0x0048(0x0018)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FAIFwBTNodePropertyFloat               ProjectUp;                                         // 0x0060(0x0018)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FAIFwBTNodePropertyFloat               PostProjectionVerticalOffset;                      // 0x0078(0x0018)(Edit, Protected, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwPTModificationProjectOnNavMesh">();
	}
	static class UAIFwPTModificationProjectOnNavMesh* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwPTModificationProjectOnNavMesh>();
	}
};
static_assert(alignof(UAIFwPTModificationProjectOnNavMesh) == 0x000008, "Wrong alignment on UAIFwPTModificationProjectOnNavMesh");
static_assert(sizeof(UAIFwPTModificationProjectOnNavMesh) == 0x000090, "Wrong size on UAIFwPTModificationProjectOnNavMesh");
static_assert(offsetof(UAIFwPTModificationProjectOnNavMesh, Extent) == 0x000030, "Member 'UAIFwPTModificationProjectOnNavMesh::Extent' has a wrong offset!");
static_assert(offsetof(UAIFwPTModificationProjectOnNavMesh, ProjectDown) == 0x000048, "Member 'UAIFwPTModificationProjectOnNavMesh::ProjectDown' has a wrong offset!");
static_assert(offsetof(UAIFwPTModificationProjectOnNavMesh, ProjectUp) == 0x000060, "Member 'UAIFwPTModificationProjectOnNavMesh::ProjectUp' has a wrong offset!");
static_assert(offsetof(UAIFwPTModificationProjectOnNavMesh, PostProjectionVerticalOffset) == 0x000078, "Member 'UAIFwPTModificationProjectOnNavMesh::PostProjectionVerticalOffset' has a wrong offset!");

// Class AIFramework.AIFwPTSenseFilterNode
// 0x0000 (0x0030 - 0x0030)
class UAIFwPTSenseFilterNode : public UAIFwNodeBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwPTSenseFilterNode">();
	}
	static class UAIFwPTSenseFilterNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwPTSenseFilterNode>();
	}
};
static_assert(alignof(UAIFwPTSenseFilterNode) == 0x000008, "Wrong alignment on UAIFwPTSenseFilterNode");
static_assert(sizeof(UAIFwPTSenseFilterNode) == 0x000030, "Wrong size on UAIFwPTSenseFilterNode");

// Class AIFramework.AIFwPTSenseNode
// 0x0030 (0x0060 - 0x0030)
class UAIFwPTSenseNode : public UAIFwNodeBase
{
public:
	bool                                          IsEnabledAtStart;                                  // 0x0030(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsDetectHostile;                                   // 0x0031(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1AB9[0x2];                                     // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MinHostileLevel;                                   // 0x0034(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsDetectNeutral;                                   // 0x0038(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsDetectFriendly;                                  // 0x0039(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1ABA[0x2];                                     // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MinFriendlyLevel;                                  // 0x003C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxAwareness;                                      // 0x0040(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AttackTime;                                        // 0x0044(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReleaseTime;                                       // 0x0048(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1ABB[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         SenseTags;                                         // 0x0050(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwPTSenseNode">();
	}
	static class UAIFwPTSenseNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwPTSenseNode>();
	}
};
static_assert(alignof(UAIFwPTSenseNode) == 0x000008, "Wrong alignment on UAIFwPTSenseNode");
static_assert(sizeof(UAIFwPTSenseNode) == 0x000060, "Wrong size on UAIFwPTSenseNode");
static_assert(offsetof(UAIFwPTSenseNode, IsEnabledAtStart) == 0x000030, "Member 'UAIFwPTSenseNode::IsEnabledAtStart' has a wrong offset!");
static_assert(offsetof(UAIFwPTSenseNode, IsDetectHostile) == 0x000031, "Member 'UAIFwPTSenseNode::IsDetectHostile' has a wrong offset!");
static_assert(offsetof(UAIFwPTSenseNode, MinHostileLevel) == 0x000034, "Member 'UAIFwPTSenseNode::MinHostileLevel' has a wrong offset!");
static_assert(offsetof(UAIFwPTSenseNode, IsDetectNeutral) == 0x000038, "Member 'UAIFwPTSenseNode::IsDetectNeutral' has a wrong offset!");
static_assert(offsetof(UAIFwPTSenseNode, IsDetectFriendly) == 0x000039, "Member 'UAIFwPTSenseNode::IsDetectFriendly' has a wrong offset!");
static_assert(offsetof(UAIFwPTSenseNode, MinFriendlyLevel) == 0x00003C, "Member 'UAIFwPTSenseNode::MinFriendlyLevel' has a wrong offset!");
static_assert(offsetof(UAIFwPTSenseNode, MaxAwareness) == 0x000040, "Member 'UAIFwPTSenseNode::MaxAwareness' has a wrong offset!");
static_assert(offsetof(UAIFwPTSenseNode, AttackTime) == 0x000044, "Member 'UAIFwPTSenseNode::AttackTime' has a wrong offset!");
static_assert(offsetof(UAIFwPTSenseNode, ReleaseTime) == 0x000048, "Member 'UAIFwPTSenseNode::ReleaseTime' has a wrong offset!");
static_assert(offsetof(UAIFwPTSenseNode, SenseTags) == 0x000050, "Member 'UAIFwPTSenseNode::SenseTags' has a wrong offset!");

// Class AIFramework.AIFwPTSenseSight
// 0x0048 (0x00A8 - 0x0060)
class UAIFwPTSenseSight final : public UAIFwPTSenseNode
{
public:
	struct FAIFwBTNodePropertyFloat               SightRange;                                        // 0x0060(0x0018)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FAIFwBTNodePropertyFloat               LoseSightRange;                                    // 0x0078(0x0018)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FAIFwBTNodePropertyFloat               VisionAngle;                                       // 0x0090(0x0018)(Edit, Protected, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwPTSenseSight">();
	}
	static class UAIFwPTSenseSight* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwPTSenseSight>();
	}
};
static_assert(alignof(UAIFwPTSenseSight) == 0x000008, "Wrong alignment on UAIFwPTSenseSight");
static_assert(sizeof(UAIFwPTSenseSight) == 0x0000A8, "Wrong size on UAIFwPTSenseSight");
static_assert(offsetof(UAIFwPTSenseSight, SightRange) == 0x000060, "Member 'UAIFwPTSenseSight::SightRange' has a wrong offset!");
static_assert(offsetof(UAIFwPTSenseSight, LoseSightRange) == 0x000078, "Member 'UAIFwPTSenseSight::LoseSightRange' has a wrong offset!");
static_assert(offsetof(UAIFwPTSenseSight, VisionAngle) == 0x000090, "Member 'UAIFwPTSenseSight::VisionAngle' has a wrong offset!");

// Class AIFramework.AIFwReactiveComponent
// 0x0020 (0x00D8 - 0x00B8)
class UAIFwReactiveComponent final : public UActorComponent
{
public:
	TArray<TSubclassOf<class UAIFwReactiveSkill>> SkillClasses;                                      // 0x00B8(0x0010)(Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UAIFwReactiveSkill*>             Skills;                                            // 0x00C8(0x0010)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)

public:
	void AddSkill(TSubclassOf<class UAIFwReactiveSkill> Skill);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwReactiveComponent">();
	}
	static class UAIFwReactiveComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwReactiveComponent>();
	}
};
static_assert(alignof(UAIFwReactiveComponent) == 0x000008, "Wrong alignment on UAIFwReactiveComponent");
static_assert(sizeof(UAIFwReactiveComponent) == 0x0000D8, "Wrong size on UAIFwReactiveComponent");
static_assert(offsetof(UAIFwReactiveComponent, SkillClasses) == 0x0000B8, "Member 'UAIFwReactiveComponent::SkillClasses' has a wrong offset!");
static_assert(offsetof(UAIFwReactiveComponent, Skills) == 0x0000C8, "Member 'UAIFwReactiveComponent::Skills' has a wrong offset!");

// Class AIFramework.AIFwReactiveSkill
// 0x0040 (0x0068 - 0x0028)
class UAIFwReactiveSkill : public UObject
{
public:
	uint8                                         Pad_1ABC[0x8];                                     // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UAIFwReactiveComponent*                 OwnerComp;                                         // 0x0030(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AAIController*                          OwnerAI;                                           // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class FName>                           SkillTags;                                         // 0x0040(0x0010)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_1ABD[0x10];                                    // 0x0050(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         bAutoActivate : 1;                                 // 0x0060(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         Pad_1ABE[0x7];                                     // 0x0061(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	class UAITask* NewAITask(TSubclassOf<class UAITask> TaskClass, EAITaskPriority InPriority);
	void RunAITask(class UAITask* Task);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwReactiveSkill">();
	}
	static class UAIFwReactiveSkill* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwReactiveSkill>();
	}
};
static_assert(alignof(UAIFwReactiveSkill) == 0x000008, "Wrong alignment on UAIFwReactiveSkill");
static_assert(sizeof(UAIFwReactiveSkill) == 0x000068, "Wrong size on UAIFwReactiveSkill");
static_assert(offsetof(UAIFwReactiveSkill, OwnerComp) == 0x000030, "Member 'UAIFwReactiveSkill::OwnerComp' has a wrong offset!");
static_assert(offsetof(UAIFwReactiveSkill, OwnerAI) == 0x000038, "Member 'UAIFwReactiveSkill::OwnerAI' has a wrong offset!");
static_assert(offsetof(UAIFwReactiveSkill, SkillTags) == 0x000040, "Member 'UAIFwReactiveSkill::SkillTags' has a wrong offset!");

// Class AIFramework.AIFwReactiveSkill_Message
// 0x0028 (0x0090 - 0x0068)
class UAIFwReactiveSkill_Message final : public UAIFwReactiveSkill
{
public:
	class FName                                   Message;                                           // 0x0068(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         Delay;                                             // 0x0070(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         bAllowMultipleRunning : 1;                         // 0x0074(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         Pad_1AC0[0x1B];                                    // 0x0075(0x001B)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ReceivePulse(class UObject* Sender, bool bSuccess);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwReactiveSkill_Message">();
	}
	static class UAIFwReactiveSkill_Message* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwReactiveSkill_Message>();
	}
};
static_assert(alignof(UAIFwReactiveSkill_Message) == 0x000008, "Wrong alignment on UAIFwReactiveSkill_Message");
static_assert(sizeof(UAIFwReactiveSkill_Message) == 0x000090, "Wrong size on UAIFwReactiveSkill_Message");
static_assert(offsetof(UAIFwReactiveSkill_Message, Message) == 0x000068, "Member 'UAIFwReactiveSkill_Message::Message' has a wrong offset!");
static_assert(offsetof(UAIFwReactiveSkill_Message, Delay) == 0x000070, "Member 'UAIFwReactiveSkill_Message::Delay' has a wrong offset!");

// Class AIFramework.AIFwReactiveSkill_PerceptionTree
// 0x0040 (0x00A8 - 0x0068)
class UAIFwReactiveSkill_PerceptionTree final : public UAIFwReactiveSkill
{
public:
	class UAIFwBehaviorTree*                      PerceptionTree;                                    // 0x0068(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         Delay;                                             // 0x0070(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         bAllowMultipleRunning : 1;                         // 0x0074(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         Pad_1AC2[0x33];                                    // 0x0075(0x0033)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ReceiveOnPerceive();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwReactiveSkill_PerceptionTree">();
	}
	static class UAIFwReactiveSkill_PerceptionTree* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwReactiveSkill_PerceptionTree>();
	}
};
static_assert(alignof(UAIFwReactiveSkill_PerceptionTree) == 0x000008, "Wrong alignment on UAIFwReactiveSkill_PerceptionTree");
static_assert(sizeof(UAIFwReactiveSkill_PerceptionTree) == 0x0000A8, "Wrong size on UAIFwReactiveSkill_PerceptionTree");
static_assert(offsetof(UAIFwReactiveSkill_PerceptionTree, PerceptionTree) == 0x000068, "Member 'UAIFwReactiveSkill_PerceptionTree::PerceptionTree' has a wrong offset!");
static_assert(offsetof(UAIFwReactiveSkill_PerceptionTree, Delay) == 0x000070, "Member 'UAIFwReactiveSkill_PerceptionTree::Delay' has a wrong offset!");

// Class AIFramework.AIFwReactiveSkill_SensedTarget
// 0x0028 (0x0090 - 0x0068)
class UAIFwReactiveSkill_SensedTarget final : public UAIFwReactiveSkill
{
public:
	float                                         Awareness;                                         // 0x0068(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         Delay;                                             // 0x006C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         bAllowMultipleRunning : 1;                         // 0x0070(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         Pad_1AC3[0x1F];                                    // 0x0071(0x001F)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ReceiveOnLost(class AActor* Target);
	void ReceiveOnSensed(class AActor* Target);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwReactiveSkill_SensedTarget">();
	}
	static class UAIFwReactiveSkill_SensedTarget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwReactiveSkill_SensedTarget>();
	}
};
static_assert(alignof(UAIFwReactiveSkill_SensedTarget) == 0x000008, "Wrong alignment on UAIFwReactiveSkill_SensedTarget");
static_assert(sizeof(UAIFwReactiveSkill_SensedTarget) == 0x000090, "Wrong size on UAIFwReactiveSkill_SensedTarget");
static_assert(offsetof(UAIFwReactiveSkill_SensedTarget, Awareness) == 0x000068, "Member 'UAIFwReactiveSkill_SensedTarget::Awareness' has a wrong offset!");
static_assert(offsetof(UAIFwReactiveSkill_SensedTarget, Delay) == 0x00006C, "Member 'UAIFwReactiveSkill_SensedTarget::Delay' has a wrong offset!");

// Class AIFramework.AIFwReactiveSkill_TakeDamage
// 0x0020 (0x0088 - 0x0068)
class UAIFwReactiveSkill_TakeDamage : public UAIFwReactiveSkill
{
public:
	float                                         Delay;                                             // 0x0068(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         bAllowMultipleRunning : 1;                         // 0x006C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         Pad_1AC4[0x1B];                                    // 0x006D(0x001B)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ReceiveAnyDamage(float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void ReceivePointDamage(float Damage, const class UDamageType* DamageType, const struct FVector& HitLocation, class UPrimitiveComponent* HitComponent, class FName BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser);
	void TakeAnyDamageImpl(class AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void TakePointDamageImpl(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, const struct FVector& HitLocation, class UPrimitiveComponent* HitComponent, class FName BoneName, const struct FVector& ShotFromDirection, const class UDamageType* DamageType, class AActor* DamageCauser);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwReactiveSkill_TakeDamage">();
	}
	static class UAIFwReactiveSkill_TakeDamage* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwReactiveSkill_TakeDamage>();
	}
};
static_assert(alignof(UAIFwReactiveSkill_TakeDamage) == 0x000008, "Wrong alignment on UAIFwReactiveSkill_TakeDamage");
static_assert(sizeof(UAIFwReactiveSkill_TakeDamage) == 0x000088, "Wrong size on UAIFwReactiveSkill_TakeDamage");
static_assert(offsetof(UAIFwReactiveSkill_TakeDamage, Delay) == 0x000068, "Member 'UAIFwReactiveSkill_TakeDamage::Delay' has a wrong offset!");

// Class AIFramework.AIFwRuntimeSettings
// 0x0068 (0x0090 - 0x0028)
class UAIFwRuntimeSettings final : public UObject
{
public:
	struct FSoftClassPath                         DefaultAIDirectorClass;                            // 0x0028(0x0018)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAIFwFactionSettings>           Factions;                                          // 0x0040(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FAIFwSmartObjectUserSettings>   SmartObjectUsers;                                  // 0x0050(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	struct FNavAgentSelector                      BaseNavMesh;                                       // 0x0060(0x0004)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	float                                         CellSize;                                          // 0x0064(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CellHeight;                                        // 0x0068(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1ACD[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     InfluenceMapLayerMaterial;                         // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                        InfluenceMapLayerMaterialName;                     // 0x0078(0x0018)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnNavigationGenerationFinished(class ANavigationData* NavData);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwRuntimeSettings">();
	}
	static class UAIFwRuntimeSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwRuntimeSettings>();
	}
};
static_assert(alignof(UAIFwRuntimeSettings) == 0x000008, "Wrong alignment on UAIFwRuntimeSettings");
static_assert(sizeof(UAIFwRuntimeSettings) == 0x000090, "Wrong size on UAIFwRuntimeSettings");
static_assert(offsetof(UAIFwRuntimeSettings, DefaultAIDirectorClass) == 0x000028, "Member 'UAIFwRuntimeSettings::DefaultAIDirectorClass' has a wrong offset!");
static_assert(offsetof(UAIFwRuntimeSettings, Factions) == 0x000040, "Member 'UAIFwRuntimeSettings::Factions' has a wrong offset!");
static_assert(offsetof(UAIFwRuntimeSettings, SmartObjectUsers) == 0x000050, "Member 'UAIFwRuntimeSettings::SmartObjectUsers' has a wrong offset!");
static_assert(offsetof(UAIFwRuntimeSettings, BaseNavMesh) == 0x000060, "Member 'UAIFwRuntimeSettings::BaseNavMesh' has a wrong offset!");
static_assert(offsetof(UAIFwRuntimeSettings, CellSize) == 0x000064, "Member 'UAIFwRuntimeSettings::CellSize' has a wrong offset!");
static_assert(offsetof(UAIFwRuntimeSettings, CellHeight) == 0x000068, "Member 'UAIFwRuntimeSettings::CellHeight' has a wrong offset!");
static_assert(offsetof(UAIFwRuntimeSettings, InfluenceMapLayerMaterial) == 0x000070, "Member 'UAIFwRuntimeSettings::InfluenceMapLayerMaterial' has a wrong offset!");
static_assert(offsetof(UAIFwRuntimeSettings, InfluenceMapLayerMaterialName) == 0x000078, "Member 'UAIFwRuntimeSettings::InfluenceMapLayerMaterialName' has a wrong offset!");

// Class AIFramework.AIFwSensorySystem
// 0x0008 (0x0030 - 0x0028)
class UAIFwSensorySystem final : public UObject
{
public:
	uint8                                         Pad_1ACE[0x8];                                     // 0x0028(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwSensorySystem">();
	}
	static class UAIFwSensorySystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwSensorySystem>();
	}
};
static_assert(alignof(UAIFwSensorySystem) == 0x000008, "Wrong alignment on UAIFwSensorySystem");
static_assert(sizeof(UAIFwSensorySystem) == 0x000030, "Wrong size on UAIFwSensorySystem");

// Class AIFramework.AIFwSmartObjectAction
// 0x0018 (0x0040 - 0x0028)
class UAIFwSmartObjectAction : public UObject
{
public:
	class UAIFwSmartObjectComponent*              OwnerComp;                                         // 0x0028(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1ACF[0x10];                                    // 0x0030(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwSmartObjectAction">();
	}
	static class UAIFwSmartObjectAction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwSmartObjectAction>();
	}
};
static_assert(alignof(UAIFwSmartObjectAction) == 0x000008, "Wrong alignment on UAIFwSmartObjectAction");
static_assert(sizeof(UAIFwSmartObjectAction) == 0x000040, "Wrong size on UAIFwSmartObjectAction");
static_assert(offsetof(UAIFwSmartObjectAction, OwnerComp) == 0x000028, "Member 'UAIFwSmartObjectAction::OwnerComp' has a wrong offset!");

// Class AIFramework.AIFwSmartObjectAction_BehaviorTree
// 0x0018 (0x0058 - 0x0040)
class UAIFwSmartObjectAction_BehaviorTree final : public UAIFwSmartObjectAction
{
public:
	struct FAIFwParameterizedBTRequest            BehaviorTree;                                      // 0x0040(0x0018)(Edit, Protected, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwSmartObjectAction_BehaviorTree">();
	}
	static class UAIFwSmartObjectAction_BehaviorTree* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwSmartObjectAction_BehaviorTree>();
	}
};
static_assert(alignof(UAIFwSmartObjectAction_BehaviorTree) == 0x000008, "Wrong alignment on UAIFwSmartObjectAction_BehaviorTree");
static_assert(sizeof(UAIFwSmartObjectAction_BehaviorTree) == 0x000058, "Wrong size on UAIFwSmartObjectAction_BehaviorTree");
static_assert(offsetof(UAIFwSmartObjectAction_BehaviorTree, BehaviorTree) == 0x000040, "Member 'UAIFwSmartObjectAction_BehaviorTree::BehaviorTree' has a wrong offset!");

// Class AIFramework.AIFwSmartObjectActionUE4
// 0x0000 (0x0040 - 0x0040)
class UAIFwSmartObjectActionUE4 final : public UAIFwSmartObjectAction
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwSmartObjectActionUE4">();
	}
	static class UAIFwSmartObjectActionUE4* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwSmartObjectActionUE4>();
	}
};
static_assert(alignof(UAIFwSmartObjectActionUE4) == 0x000008, "Wrong alignment on UAIFwSmartObjectActionUE4");
static_assert(sizeof(UAIFwSmartObjectActionUE4) == 0x000040, "Wrong size on UAIFwSmartObjectActionUE4");

// Class AIFramework.AIFwSmartObjectComponent
// 0x0020 (0x00D8 - 0x00B8)
class UAIFwSmartObjectComponent : public UActorComponent
{
public:
	TArray<struct FAIFwSmartObjectEvent>          Events;                                            // 0x00B8(0x0010)(Edit, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                         bUseCapacity : 1;                                  // 0x00C8(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         Pad_1AD0[0x3];                                     // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	uint32                                        Capacity;                                          // 0x00CC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1AD1[0x8];                                     // 0x00D0(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	int32 FindEvent(class AActor* User, const class FString& Usage);
	bool Use(class AActor* User, const class FString& Usage, int32 EventId);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwSmartObjectComponent">();
	}
	static class UAIFwSmartObjectComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwSmartObjectComponent>();
	}
};
static_assert(alignof(UAIFwSmartObjectComponent) == 0x000008, "Wrong alignment on UAIFwSmartObjectComponent");
static_assert(sizeof(UAIFwSmartObjectComponent) == 0x0000D8, "Wrong size on UAIFwSmartObjectComponent");
static_assert(offsetof(UAIFwSmartObjectComponent, Events) == 0x0000B8, "Member 'UAIFwSmartObjectComponent::Events' has a wrong offset!");
static_assert(offsetof(UAIFwSmartObjectComponent, Capacity) == 0x0000CC, "Member 'UAIFwSmartObjectComponent::Capacity' has a wrong offset!");

// Class AIFramework.AIFwSmartObjectCondition
// 0x0018 (0x0040 - 0x0028)
class UAIFwSmartObjectCondition final : public UObject
{
public:
	class UAIFwSmartObjectComponent*              OwnerComp;                                         // 0x0028(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1AD4[0x10];                                    // 0x0030(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwSmartObjectCondition">();
	}
	static class UAIFwSmartObjectCondition* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwSmartObjectCondition>();
	}
};
static_assert(alignof(UAIFwSmartObjectCondition) == 0x000008, "Wrong alignment on UAIFwSmartObjectCondition");
static_assert(sizeof(UAIFwSmartObjectCondition) == 0x000040, "Wrong size on UAIFwSmartObjectCondition");
static_assert(offsetof(UAIFwSmartObjectCondition, OwnerComp) == 0x000028, "Member 'UAIFwSmartObjectCondition::OwnerComp' has a wrong offset!");

// Class AIFramework.AIFwSmartObjectUserComponent
// 0x0008 (0x00C0 - 0x00B8)
class UAIFwSmartObjectUserComponent final : public UActorComponent
{
public:
	struct FAIFwSmartObjectUserSelector           UserType;                                          // 0x00B8(0x0004)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_1AD5[0x4];                                     // 0x00BC(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwSmartObjectUserComponent">();
	}
	static class UAIFwSmartObjectUserComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwSmartObjectUserComponent>();
	}
};
static_assert(alignof(UAIFwSmartObjectUserComponent) == 0x000008, "Wrong alignment on UAIFwSmartObjectUserComponent");
static_assert(sizeof(UAIFwSmartObjectUserComponent) == 0x0000C0, "Wrong size on UAIFwSmartObjectUserComponent");
static_assert(offsetof(UAIFwSmartObjectUserComponent, UserType) == 0x0000B8, "Member 'UAIFwSmartObjectUserComponent::UserType' has a wrong offset!");

// Class AIFramework.AIFwStimuliSourceComponent
// 0x0018 (0x00D0 - 0x00B8)
class UAIFwStimuliSourceComponent final : public UActorComponent
{
public:
	uint8                                         Pad_1AD6[0x10];                                    // 0x00B8(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         bVisible : 1;                                      // 0x00C8(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         Pad_1AD7[0x7];                                     // 0x00C9(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetVisibility(bool bNewVisible);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwStimuliSourceComponent">();
	}
	static class UAIFwStimuliSourceComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwStimuliSourceComponent>();
	}
};
static_assert(alignof(UAIFwStimuliSourceComponent) == 0x000008, "Wrong alignment on UAIFwStimuliSourceComponent");
static_assert(sizeof(UAIFwStimuliSourceComponent) == 0x0000D0, "Wrong size on UAIFwStimuliSourceComponent");

// Class AIFramework.AIFwSubsystem
// 0x0010 (0x0050 - 0x0040)
class UAIFwSubsystem final : public UTickableWorldSubsystem
{
public:
	uint8                                         Pad_1AD8[0x10];                                    // 0x0040(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwSubsystem">();
	}
	static class UAIFwSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwSubsystem>();
	}
};
static_assert(alignof(UAIFwSubsystem) == 0x000008, "Wrong alignment on UAIFwSubsystem");
static_assert(sizeof(UAIFwSubsystem) == 0x000050, "Wrong size on UAIFwSubsystem");

// Class AIFramework.AIFwSystem
// 0x0088 (0x00B0 - 0x0028)
class UAIFwSystem final : public UObject
{
public:
	uint8                                         Pad_1AD9[0x68];                                    // 0x0028(0x0068)(Fixing Size After Last Property [ Dumper-7 ])
	class UAIFwSensorySystem*                     SensorySystem;                                     // 0x0090(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAIFwInfluenceMapManager*               InfluenceMapManager;                               // 0x0098(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AAIFwAIDirector*                        AIDirector;                                        // 0x00A0(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1ADA[0x8];                                     // 0x00A8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnEntityDestroyed(class AActor* Actor);
	void OnEntityEndPlay(class AActor* Actor, EEndPlayReason EndPlayReason);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIFwSystem">();
	}
	static class UAIFwSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIFwSystem>();
	}
};
static_assert(alignof(UAIFwSystem) == 0x000008, "Wrong alignment on UAIFwSystem");
static_assert(sizeof(UAIFwSystem) == 0x0000B0, "Wrong size on UAIFwSystem");
static_assert(offsetof(UAIFwSystem, SensorySystem) == 0x000090, "Member 'UAIFwSystem::SensorySystem' has a wrong offset!");
static_assert(offsetof(UAIFwSystem, InfluenceMapManager) == 0x000098, "Member 'UAIFwSystem::InfluenceMapManager' has a wrong offset!");
static_assert(offsetof(UAIFwSystem, AIDirector) == 0x0000A0, "Member 'UAIFwSystem::AIDirector' has a wrong offset!");

}


#pragma once

 

// Package: RelationshipIconSets

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass RelationshipIconSets.RelationshipIconSets_C
// 0x0020 (0x0298 - 0x0278)
class URelationshipIconSets_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 IconFriend;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconLeader;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconParty;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_RelationshipIconSets(int32 EntryPoint);
	void Construct();
	void InitFromGuild();
	void InitFromParty(class USBPartyMemberState* InPartyMemberState);
	void InitPartyIcons(bool IsMember, bool IsLeader);
	void InitFollowState(bool InIsFriend);
	void InitFriendState(bool bFriend);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RelationshipIconSets_C">();
	}
	static class URelationshipIconSets_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URelationshipIconSets_C>();
	}
};
static_assert(alignof(URelationshipIconSets_C) == 0x000008, "Wrong alignment on URelationshipIconSets_C");
static_assert(sizeof(URelationshipIconSets_C) == 0x000298, "Wrong size on URelationshipIconSets_C");
static_assert(offsetof(URelationshipIconSets_C, UberGraphFrame) == 0x000278, "Member 'URelationshipIconSets_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(URelationshipIconSets_C, IconFriend) == 0x000280, "Member 'URelationshipIconSets_C::IconFriend' has a wrong offset!");
static_assert(offsetof(URelationshipIconSets_C, IconLeader) == 0x000288, "Member 'URelationshipIconSets_C::IconLeader' has a wrong offset!");
static_assert(offsetof(URelationshipIconSets_C, IconParty) == 0x000290, "Member 'URelationshipIconSets_C::IconParty' has a wrong offset!");

}


#pragma once

 

// Package: BP_PlayerLevelStartSequenceActivateDungeon

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerLevelStartSequenceActivateDungeon.BP_PlayerLevelStartSequenceActivateDungeon_C
// 0x0080 (0x00B0 - 0x0030)
class UBP_PlayerLevelStartSequenceActivateDungeon_C final : public USBPlayerLevelStartSequenceTaskBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0030(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class FName>                           DungeonIds;                                        // 0x0038(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USBPlayerDungeonComponent*              Dungeon_Component;                                 // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Dialog_C*                           Dialog;                                            // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, struct FSBMapInfo>          MapMaster;                                         // 0x0058(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          TrueIsPublicDungeon;                               // 0x00A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          TrueIsOutOfTerm;                                   // 0x00A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon(int32 EntryPoint);
	void DialogEnd(EDialogResult Result);
	void GetActiveDungeons(const TArray<class FName>& OutArray);
	void Start();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerLevelStartSequenceActivateDungeon_C">();
	}
	static class UBP_PlayerLevelStartSequenceActivateDungeon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PlayerLevelStartSequenceActivateDungeon_C>();
	}
};
static_assert(alignof(UBP_PlayerLevelStartSequenceActivateDungeon_C) == 0x000008, "Wrong alignment on UBP_PlayerLevelStartSequenceActivateDungeon_C");
static_assert(sizeof(UBP_PlayerLevelStartSequenceActivateDungeon_C) == 0x0000B0, "Wrong size on UBP_PlayerLevelStartSequenceActivateDungeon_C");
static_assert(offsetof(UBP_PlayerLevelStartSequenceActivateDungeon_C, UberGraphFrame) == 0x000030, "Member 'UBP_PlayerLevelStartSequenceActivateDungeon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceActivateDungeon_C, DungeonIds) == 0x000038, "Member 'UBP_PlayerLevelStartSequenceActivateDungeon_C::DungeonIds' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceActivateDungeon_C, Dungeon_Component) == 0x000048, "Member 'UBP_PlayerLevelStartSequenceActivateDungeon_C::Dungeon_Component' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceActivateDungeon_C, Dialog) == 0x000050, "Member 'UBP_PlayerLevelStartSequenceActivateDungeon_C::Dialog' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceActivateDungeon_C, MapMaster) == 0x000058, "Member 'UBP_PlayerLevelStartSequenceActivateDungeon_C::MapMaster' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceActivateDungeon_C, TrueIsPublicDungeon) == 0x0000A8, "Member 'UBP_PlayerLevelStartSequenceActivateDungeon_C::TrueIsPublicDungeon' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceActivateDungeon_C, TrueIsOutOfTerm) == 0x0000A9, "Member 'UBP_PlayerLevelStartSequenceActivateDungeon_C::TrueIsOutOfTerm' has a wrong offset!");

}


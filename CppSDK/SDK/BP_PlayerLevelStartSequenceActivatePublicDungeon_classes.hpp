#pragma once

 

// Package: BP_PlayerLevelStartSequenceActivatePublicDungeon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerLevelStartSequenceActivatePublicDungeon.BP_PlayerLevelStartSequenceActivatePublicDungeon_C
// 0x0060 (0x0090 - 0x0030)
class UBP_PlayerLevelStartSequenceActivatePublicDungeon_C final : public USBPlayerLevelStartSequenceTaskBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0030(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class FName>                           DungeonIds;                                        // 0x0038(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USBPlayerDungeonComponent*              Dungeon_Component;                                 // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Dialog_C*                           Dialog;                                            // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           Activated_Pub_Dng;                                 // 0x0058(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           Out_ArrayBuff;                                     // 0x0068(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                         DiffList;                                          // 0x0078(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          EndFlag;                                           // 0x0088(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon(int32 EntryPoint);
	void Start();
	void AddActivatedPublicDungeons(const int32 RetCode, bool Result);
	void ShowRecursive();
	void GetActivatedPublicDungeons(const int32 RetCode, const TArray<class FString>& OutArray);
	void DialogClose(EDialogResult Result);
	void CheckActivatedPubDng(TArray<class FName>* ActivatedPubDng);
	void NewDngID(TArray<class FName>& ClientCheckList, TArray<class FString>& ServerList, TArray<class FString>* Return);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerLevelStartSequenceActivatePublicDungeon_C">();
	}
	static class UBP_PlayerLevelStartSequenceActivatePublicDungeon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PlayerLevelStartSequenceActivatePublicDungeon_C>();
	}
};
static_assert(alignof(UBP_PlayerLevelStartSequenceActivatePublicDungeon_C) == 0x000008, "Wrong alignment on UBP_PlayerLevelStartSequenceActivatePublicDungeon_C");
static_assert(sizeof(UBP_PlayerLevelStartSequenceActivatePublicDungeon_C) == 0x000090, "Wrong size on UBP_PlayerLevelStartSequenceActivatePublicDungeon_C");
static_assert(offsetof(UBP_PlayerLevelStartSequenceActivatePublicDungeon_C, UberGraphFrame) == 0x000030, "Member 'UBP_PlayerLevelStartSequenceActivatePublicDungeon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceActivatePublicDungeon_C, DungeonIds) == 0x000038, "Member 'UBP_PlayerLevelStartSequenceActivatePublicDungeon_C::DungeonIds' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceActivatePublicDungeon_C, Dungeon_Component) == 0x000048, "Member 'UBP_PlayerLevelStartSequenceActivatePublicDungeon_C::Dungeon_Component' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceActivatePublicDungeon_C, Dialog) == 0x000050, "Member 'UBP_PlayerLevelStartSequenceActivatePublicDungeon_C::Dialog' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceActivatePublicDungeon_C, Activated_Pub_Dng) == 0x000058, "Member 'UBP_PlayerLevelStartSequenceActivatePublicDungeon_C::Activated_Pub_Dng' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceActivatePublicDungeon_C, Out_ArrayBuff) == 0x000068, "Member 'UBP_PlayerLevelStartSequenceActivatePublicDungeon_C::Out_ArrayBuff' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceActivatePublicDungeon_C, DiffList) == 0x000078, "Member 'UBP_PlayerLevelStartSequenceActivatePublicDungeon_C::DiffList' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceActivatePublicDungeon_C, EndFlag) == 0x000088, "Member 'UBP_PlayerLevelStartSequenceActivatePublicDungeon_C::EndFlag' has a wrong offset!");

}


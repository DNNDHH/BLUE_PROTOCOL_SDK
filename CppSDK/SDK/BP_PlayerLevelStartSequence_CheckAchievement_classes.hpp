#pragma once

 

// Package: BP_PlayerLevelStartSequence_CheckAchievement

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerLevelStartSequence_CheckAchievement.BP_PlayerLevelStartSequence_CheckAchievement_C
// 0x0050 (0x0080 - 0x0030)
class UBP_PlayerLevelStartSequence_CheckAchievement_C final : public USBPlayerLevelStartSequenceTaskBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0030(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FTimespan                              Remain_Time;                                       // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class USBTextTableAsset>       TextTable;                                         // 0x0040(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UObject*                                TempObject;                                        // 0x0068(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 NewAchievementList;                                // 0x0070(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckAchievement(int32 EntryPoint);
	void Start();
	class FString GetDescription();
	void SetMessage();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerLevelStartSequence_CheckAchievement_C">();
	}
	static class UBP_PlayerLevelStartSequence_CheckAchievement_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PlayerLevelStartSequence_CheckAchievement_C>();
	}
};
static_assert(alignof(UBP_PlayerLevelStartSequence_CheckAchievement_C) == 0x000008, "Wrong alignment on UBP_PlayerLevelStartSequence_CheckAchievement_C");
static_assert(sizeof(UBP_PlayerLevelStartSequence_CheckAchievement_C) == 0x000080, "Wrong size on UBP_PlayerLevelStartSequence_CheckAchievement_C");
static_assert(offsetof(UBP_PlayerLevelStartSequence_CheckAchievement_C, UberGraphFrame) == 0x000030, "Member 'UBP_PlayerLevelStartSequence_CheckAchievement_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequence_CheckAchievement_C, Remain_Time) == 0x000038, "Member 'UBP_PlayerLevelStartSequence_CheckAchievement_C::Remain_Time' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequence_CheckAchievement_C, TextTable) == 0x000040, "Member 'UBP_PlayerLevelStartSequence_CheckAchievement_C::TextTable' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequence_CheckAchievement_C, TempObject) == 0x000068, "Member 'UBP_PlayerLevelStartSequence_CheckAchievement_C::TempObject' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequence_CheckAchievement_C, NewAchievementList) == 0x000070, "Member 'UBP_PlayerLevelStartSequence_CheckAchievement_C::NewAchievementList' has a wrong offset!");

}


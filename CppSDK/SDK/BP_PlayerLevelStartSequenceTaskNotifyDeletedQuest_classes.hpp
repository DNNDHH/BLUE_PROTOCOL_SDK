#pragma once

 

// Package: BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest.BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C
// 0x0018 (0x0048 - 0x0030)
class UBP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C final : public USBPlayerLevelStartSequenceTaskBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0030(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         NameIndex;                                         // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NamesNum;                                          // 0x003C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBQuestComponent*                      QuestComp;                                         // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest(int32 EntryPoint);
	void Start();
	void Make_Quest_Name_Array(TArray<int32>& QuestList, TArray<class FText>* QuestNames);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C">();
	}
	static class UBP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C>();
	}
};
static_assert(alignof(UBP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C) == 0x000008, "Wrong alignment on UBP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C");
static_assert(sizeof(UBP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C) == 0x000048, "Wrong size on UBP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C, UberGraphFrame) == 0x000030, "Member 'UBP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C, NameIndex) == 0x000038, "Member 'UBP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C::NameIndex' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C, NamesNum) == 0x00003C, "Member 'UBP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C::NamesNum' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C, QuestComp) == 0x000040, "Member 'UBP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C::QuestComp' has a wrong offset!");

}


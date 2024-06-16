#pragma once

 

// Package: BP_PlayerLevelStartSequenceTaskTutorialHelp

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerLevelStartSequenceTaskTutorialHelp.BP_PlayerLevelStartSequenceTaskTutorialHelp_C
// 0x0088 (0x00B8 - 0x0030)
class UBP_PlayerLevelStartSequenceTaskTutorialHelp_C final : public USBPlayerLevelStartSequenceTaskBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0030(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         Index_BP_PlayerLevelStartSequenceTaskTutorialHelp_C; // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_90F9[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBTutorialHelpData>            TutorialHelpDataList;                              // 0x0040(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FName, class FName>                RowNameMap;                                        // 0x0050(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UTutorialHelpDialogBox_C*               HelpWidget;                                        // 0x00A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           ConditionClearRowName;                             // 0x00A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskTutorialHelp(int32 EntryPoint);
	void OnClose_Event();
	void CreateTutorialHelpDialog();
	void Start();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerLevelStartSequenceTaskTutorialHelp_C">();
	}
	static class UBP_PlayerLevelStartSequenceTaskTutorialHelp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PlayerLevelStartSequenceTaskTutorialHelp_C>();
	}
};
static_assert(alignof(UBP_PlayerLevelStartSequenceTaskTutorialHelp_C) == 0x000008, "Wrong alignment on UBP_PlayerLevelStartSequenceTaskTutorialHelp_C");
static_assert(sizeof(UBP_PlayerLevelStartSequenceTaskTutorialHelp_C) == 0x0000B8, "Wrong size on UBP_PlayerLevelStartSequenceTaskTutorialHelp_C");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskTutorialHelp_C, UberGraphFrame) == 0x000030, "Member 'UBP_PlayerLevelStartSequenceTaskTutorialHelp_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskTutorialHelp_C, Index_BP_PlayerLevelStartSequenceTaskTutorialHelp_C) == 0x000038, "Member 'UBP_PlayerLevelStartSequenceTaskTutorialHelp_C::Index_BP_PlayerLevelStartSequenceTaskTutorialHelp_C' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskTutorialHelp_C, TutorialHelpDataList) == 0x000040, "Member 'UBP_PlayerLevelStartSequenceTaskTutorialHelp_C::TutorialHelpDataList' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskTutorialHelp_C, RowNameMap) == 0x000050, "Member 'UBP_PlayerLevelStartSequenceTaskTutorialHelp_C::RowNameMap' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskTutorialHelp_C, HelpWidget) == 0x0000A0, "Member 'UBP_PlayerLevelStartSequenceTaskTutorialHelp_C::HelpWidget' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskTutorialHelp_C, ConditionClearRowName) == 0x0000A8, "Member 'UBP_PlayerLevelStartSequenceTaskTutorialHelp_C::ConditionClearRowName' has a wrong offset!");

}


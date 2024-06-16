#pragma once

 

// Package: QuestBoard_ListItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass QuestBoard_ListItem.QuestBoard_ListItem_C
// 0x0090 (0x0308 - 0x0278)
class UQuestBoard_ListItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 AlarmIcon;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBDateTimeTextBlock*                   CompleteDeadlineTime;                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         CompleteDeadlineTimeGrp;                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BG;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_New;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LabelQuestName;                                    // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestIconS_C*                          QuestIconS;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestList_RepeatCountIcon_C*           QuestList_RepeatCountIcon;                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton;                                          // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClick;                                           // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	EQuestStatus                                  QuestStatus;                                       // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7635[0x7];                                     // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnBtnSelected;                                     // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FQuestBoardQuestData                   Data;                                              // 0x02F0(0x0018)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)

public:
	void OnClick__DelegateSignature(int32 QuestIndex);
	void OnBtnSelected__DelegateSignature(class UQuestBoard_ListItem_C* Item);
	void ExecuteUbergraph_QuestBoard_ListItem(int32 EntryPoint);
	void BndEvt__SBButton_C_76_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void SetInfo();
	void SetQuestStatus(int32 InQuestIndex);
	void SetBtnSelected(bool bSelected);
	void HideNewIcon();
	void SetVisibleNewIcon(bool bVisible);
	void GetQuestIndex(int32* QuestIndex);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QuestBoard_ListItem_C">();
	}
	static class UQuestBoard_ListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuestBoard_ListItem_C>();
	}
};
static_assert(alignof(UQuestBoard_ListItem_C) == 0x000008, "Wrong alignment on UQuestBoard_ListItem_C");
static_assert(sizeof(UQuestBoard_ListItem_C) == 0x000308, "Wrong size on UQuestBoard_ListItem_C");
static_assert(offsetof(UQuestBoard_ListItem_C, UberGraphFrame) == 0x000278, "Member 'UQuestBoard_ListItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UQuestBoard_ListItem_C, AlarmIcon) == 0x000280, "Member 'UQuestBoard_ListItem_C::AlarmIcon' has a wrong offset!");
static_assert(offsetof(UQuestBoard_ListItem_C, CompleteDeadlineTime) == 0x000288, "Member 'UQuestBoard_ListItem_C::CompleteDeadlineTime' has a wrong offset!");
static_assert(offsetof(UQuestBoard_ListItem_C, CompleteDeadlineTimeGrp) == 0x000290, "Member 'UQuestBoard_ListItem_C::CompleteDeadlineTimeGrp' has a wrong offset!");
static_assert(offsetof(UQuestBoard_ListItem_C, Image_BG) == 0x000298, "Member 'UQuestBoard_ListItem_C::Image_BG' has a wrong offset!");
static_assert(offsetof(UQuestBoard_ListItem_C, Image_New) == 0x0002A0, "Member 'UQuestBoard_ListItem_C::Image_New' has a wrong offset!");
static_assert(offsetof(UQuestBoard_ListItem_C, LabelQuestName) == 0x0002A8, "Member 'UQuestBoard_ListItem_C::LabelQuestName' has a wrong offset!");
static_assert(offsetof(UQuestBoard_ListItem_C, QuestIconS) == 0x0002B0, "Member 'UQuestBoard_ListItem_C::QuestIconS' has a wrong offset!");
static_assert(offsetof(UQuestBoard_ListItem_C, QuestList_RepeatCountIcon) == 0x0002B8, "Member 'UQuestBoard_ListItem_C::QuestList_RepeatCountIcon' has a wrong offset!");
static_assert(offsetof(UQuestBoard_ListItem_C, SBButton) == 0x0002C0, "Member 'UQuestBoard_ListItem_C::SBButton' has a wrong offset!");
static_assert(offsetof(UQuestBoard_ListItem_C, OnClick) == 0x0002C8, "Member 'UQuestBoard_ListItem_C::OnClick' has a wrong offset!");
static_assert(offsetof(UQuestBoard_ListItem_C, QuestStatus) == 0x0002D8, "Member 'UQuestBoard_ListItem_C::QuestStatus' has a wrong offset!");
static_assert(offsetof(UQuestBoard_ListItem_C, OnBtnSelected) == 0x0002E0, "Member 'UQuestBoard_ListItem_C::OnBtnSelected' has a wrong offset!");
static_assert(offsetof(UQuestBoard_ListItem_C, Data) == 0x0002F0, "Member 'UQuestBoard_ListItem_C::Data' has a wrong offset!");

}


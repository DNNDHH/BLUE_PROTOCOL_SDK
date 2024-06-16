#pragma once

 

// Package: CommandMenuCommonSubButtonList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommandMenuCommonSubButtonList.CommandMenuCommonSubButtonList_C
// 0x0090 (0x0308 - 0x0278)
class UCommandMenuCommonSubButtonList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         HorizontalBox_0;                                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClick;                                           // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class FName>                           TextIdNameList;                                    // 0x02A0(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                         FocusButtonId;                                     // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_8FBB[0x4];                                     // 0x02B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommandMenuCommonSubButton_C*          OldFocusButton;                                    // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommandMenuCommonSubButton_C*          FocusButton;                                       // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTextTableAsset*                      TextTable;                                         // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class FName>                           TempButtonTextIdList;                              // 0x02D0(0x0010)(Edit, BlueprintVisible)
	int32                                         Button_Id;                                         // 0x02E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Push;                                              // 0x02E4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FBC[0x3];                                     // 0x02E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Button_Id_log;                                     // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Time;                                              // 0x02EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Search_Id;                                         // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Entry_ID;                                          // 0x02F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InputControll_LR;                                  // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PushLR;                                            // 0x02FC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FBD[0x3];                                     // 0x02FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBUIController*                        UIController;                                      // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClick__DelegateSignature(int32 ButtonId);
	void ExecuteUbergraph_CommandMenuCommonSubButtonList(int32 EntryPoint);
	void Alpha_Renew2(const TArray<class FName>& Param_TextIdNameList);
	void OnClick_Event_0(int32 ButtonId);
	void CommandMenuCommonSubButton_OnClick(int32 ButtonId);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ChangeFocusButton(int32 InFocusButtonId, bool bSyncCursorPosition);
	void SetButtonEnable(int32 InButtonId, bool IsButtonEnable);
	void SetUIBlock(bool bShow);
	void PurgeButton(int32 ButtonId);
	void InAnimation();
	void ExcramationIconVisible(int32 ButtonId, bool bIsVisible);
	void SetButtonText(int32 ListId, class FName Param_Name);
	void SetBookmarkEnable(int32 InButtonId, bool bEnable);
	void Set_Bookmark_Array_Enable(TArray<class FString>& BookmarkNameList);
	void Set_Button_Abort_Anim_and_Collapse(int32 InButtonId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommandMenuCommonSubButtonList_C">();
	}
	static class UCommandMenuCommonSubButtonList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommandMenuCommonSubButtonList_C>();
	}
};
static_assert(alignof(UCommandMenuCommonSubButtonList_C) == 0x000008, "Wrong alignment on UCommandMenuCommonSubButtonList_C");
static_assert(sizeof(UCommandMenuCommonSubButtonList_C) == 0x000308, "Wrong size on UCommandMenuCommonSubButtonList_C");
static_assert(offsetof(UCommandMenuCommonSubButtonList_C, UberGraphFrame) == 0x000278, "Member 'UCommandMenuCommonSubButtonList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommandMenuCommonSubButtonList_C, HorizontalBox_0) == 0x000280, "Member 'UCommandMenuCommonSubButtonList_C::HorizontalBox_0' has a wrong offset!");
static_assert(offsetof(UCommandMenuCommonSubButtonList_C, UIBlocker) == 0x000288, "Member 'UCommandMenuCommonSubButtonList_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UCommandMenuCommonSubButtonList_C, OnClick) == 0x000290, "Member 'UCommandMenuCommonSubButtonList_C::OnClick' has a wrong offset!");
static_assert(offsetof(UCommandMenuCommonSubButtonList_C, TextIdNameList) == 0x0002A0, "Member 'UCommandMenuCommonSubButtonList_C::TextIdNameList' has a wrong offset!");
static_assert(offsetof(UCommandMenuCommonSubButtonList_C, FocusButtonId) == 0x0002B0, "Member 'UCommandMenuCommonSubButtonList_C::FocusButtonId' has a wrong offset!");
static_assert(offsetof(UCommandMenuCommonSubButtonList_C, OldFocusButton) == 0x0002B8, "Member 'UCommandMenuCommonSubButtonList_C::OldFocusButton' has a wrong offset!");
static_assert(offsetof(UCommandMenuCommonSubButtonList_C, FocusButton) == 0x0002C0, "Member 'UCommandMenuCommonSubButtonList_C::FocusButton' has a wrong offset!");
static_assert(offsetof(UCommandMenuCommonSubButtonList_C, TextTable) == 0x0002C8, "Member 'UCommandMenuCommonSubButtonList_C::TextTable' has a wrong offset!");
static_assert(offsetof(UCommandMenuCommonSubButtonList_C, TempButtonTextIdList) == 0x0002D0, "Member 'UCommandMenuCommonSubButtonList_C::TempButtonTextIdList' has a wrong offset!");
static_assert(offsetof(UCommandMenuCommonSubButtonList_C, Button_Id) == 0x0002E0, "Member 'UCommandMenuCommonSubButtonList_C::Button_Id' has a wrong offset!");
static_assert(offsetof(UCommandMenuCommonSubButtonList_C, Push) == 0x0002E4, "Member 'UCommandMenuCommonSubButtonList_C::Push' has a wrong offset!");
static_assert(offsetof(UCommandMenuCommonSubButtonList_C, Button_Id_log) == 0x0002E8, "Member 'UCommandMenuCommonSubButtonList_C::Button_Id_log' has a wrong offset!");
static_assert(offsetof(UCommandMenuCommonSubButtonList_C, Time) == 0x0002EC, "Member 'UCommandMenuCommonSubButtonList_C::Time' has a wrong offset!");
static_assert(offsetof(UCommandMenuCommonSubButtonList_C, Search_Id) == 0x0002F0, "Member 'UCommandMenuCommonSubButtonList_C::Search_Id' has a wrong offset!");
static_assert(offsetof(UCommandMenuCommonSubButtonList_C, Entry_ID) == 0x0002F4, "Member 'UCommandMenuCommonSubButtonList_C::Entry_ID' has a wrong offset!");
static_assert(offsetof(UCommandMenuCommonSubButtonList_C, InputControll_LR) == 0x0002F8, "Member 'UCommandMenuCommonSubButtonList_C::InputControll_LR' has a wrong offset!");
static_assert(offsetof(UCommandMenuCommonSubButtonList_C, PushLR) == 0x0002FC, "Member 'UCommandMenuCommonSubButtonList_C::PushLR' has a wrong offset!");
static_assert(offsetof(UCommandMenuCommonSubButtonList_C, UIController) == 0x000300, "Member 'UCommandMenuCommonSubButtonList_C::UIController' has a wrong offset!");

}


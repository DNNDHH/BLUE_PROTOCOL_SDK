#pragma once

 

// Package: EmotionMenu_StampMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EmotionMenu_StampMenu.EmotionMenu_StampMenu_C
// 0x0030 (0x02A8 - 0x0278)
class UEmotionMenu_StampMenu_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UGridPanel*                             GridPanel;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULimitedTimeNotice_C*                   LimitedTimeNotice;                                 // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStampCategoryMenu_C*                   StampCategoryMenu;                                 // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ChatWindow_C*                      ChatWindow;                                        // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectStampId;                                     // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_EmotionMenu_StampMenu(int32 EntryPoint);
	void OnChangeCoolTimeEmotion(bool IsCoolTime);
	void Destruct();
	void BndEvt__StampCategoryMenu_K2Node_ComponentBoundEvent_21_OnUpdateStamp__DelegateSignature(const struct FSBStampCategoryMasterData& StampCategoryMasterData);
	void OnStampClicked_Event(int32 StampId, class UChatStampButtonItem_C* InSelectItem);
	void Construct();
	void CreateStamp(const struct FSBStampCategoryMasterData& StampData);
	void SetHistoryMode(bool bSet);
	void UpdateIconSelect(class UChatStampButtonItem_C* InSelectIcon);
	void SetDragable(bool InDragable);
	void Show();
	void Hide();
	void SelectStamp(int32 InStampId, class UChatStampButtonItem_C* InStampItem);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EmotionMenu_StampMenu_C">();
	}
	static class UEmotionMenu_StampMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEmotionMenu_StampMenu_C>();
	}
};
static_assert(alignof(UEmotionMenu_StampMenu_C) == 0x000008, "Wrong alignment on UEmotionMenu_StampMenu_C");
static_assert(sizeof(UEmotionMenu_StampMenu_C) == 0x0002A8, "Wrong size on UEmotionMenu_StampMenu_C");
static_assert(offsetof(UEmotionMenu_StampMenu_C, UberGraphFrame) == 0x000278, "Member 'UEmotionMenu_StampMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEmotionMenu_StampMenu_C, GridPanel) == 0x000280, "Member 'UEmotionMenu_StampMenu_C::GridPanel' has a wrong offset!");
static_assert(offsetof(UEmotionMenu_StampMenu_C, LimitedTimeNotice) == 0x000288, "Member 'UEmotionMenu_StampMenu_C::LimitedTimeNotice' has a wrong offset!");
static_assert(offsetof(UEmotionMenu_StampMenu_C, StampCategoryMenu) == 0x000290, "Member 'UEmotionMenu_StampMenu_C::StampCategoryMenu' has a wrong offset!");
static_assert(offsetof(UEmotionMenu_StampMenu_C, ChatWindow) == 0x000298, "Member 'UEmotionMenu_StampMenu_C::ChatWindow' has a wrong offset!");
static_assert(offsetof(UEmotionMenu_StampMenu_C, SelectStampId) == 0x0002A0, "Member 'UEmotionMenu_StampMenu_C::SelectStampId' has a wrong offset!");

}


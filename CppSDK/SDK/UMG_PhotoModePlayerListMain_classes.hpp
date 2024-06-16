#pragma once

 

// Package: UMG_PhotoModePlayerListMain

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_PhotoModePlayerListMain.UMG_PhotoModePlayerListMain_C
// 0x0078 (0x0318 - 0x02A0)
class UUMG_PhotoModePlayerListMain_C final : public USBPhotoModePlayerList
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanel_List;                                  // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnImageThrobber_C*                    CmnImageThrobber;                                  // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_170;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBoxCmnCheckBox01_C*             SBCheckBox_DebugValidAllPlayer;                    // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBoxCmnCheckBox01_C*             SBCheckBox_DebugVisibleOtherPlayer;                // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_CloneCount;                     // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShowTutorialHelpBtn_C*                 ShowTutorialHelpBtn;                               // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            UpdateButton;                                      // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnListSelected;                                    // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickUpdateButton;                               // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnListUpdated;                                     // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnListSelected__DelegateSignature(class ASBPlayerState* PlayerState, class FName CharacterId);
	void OnClickUpdateButton__DelegateSignature();
	void OnListUpdated__DelegateSignature();
	void ExecuteUbergraph_UMG_PhotoModePlayerListMain(int32 EntryPoint);
	void BndEvt__UMG_PhotoModePlayerListMain_SBCheckBox_DebugVisibleOtherPlayer_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void Construct();
	void BndEvt__UMG_PhotoModePlayerListMain_SBCheckBoxCmnCheckBox01_DebugAll_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BP_OnUpdatePlayerControlData();
	void BndEvt__UMG_PhotoModePlayerListMain_UpdateButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_PhotoModePlayerListMain_C">();
	}
	static class UUMG_PhotoModePlayerListMain_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_PhotoModePlayerListMain_C>();
	}
};
static_assert(alignof(UUMG_PhotoModePlayerListMain_C) == 0x000008, "Wrong alignment on UUMG_PhotoModePlayerListMain_C");
static_assert(sizeof(UUMG_PhotoModePlayerListMain_C) == 0x000318, "Wrong size on UUMG_PhotoModePlayerListMain_C");
static_assert(offsetof(UUMG_PhotoModePlayerListMain_C, UberGraphFrame) == 0x0002A0, "Member 'UUMG_PhotoModePlayerListMain_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModePlayerListMain_C, CanvasPanel_List) == 0x0002A8, "Member 'UUMG_PhotoModePlayerListMain_C::CanvasPanel_List' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModePlayerListMain_C, CmnImageThrobber) == 0x0002B0, "Member 'UUMG_PhotoModePlayerListMain_C::CmnImageThrobber' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModePlayerListMain_C, Image_170) == 0x0002B8, "Member 'UUMG_PhotoModePlayerListMain_C::Image_170' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModePlayerListMain_C, SBCheckBox_DebugValidAllPlayer) == 0x0002C0, "Member 'UUMG_PhotoModePlayerListMain_C::SBCheckBox_DebugValidAllPlayer' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModePlayerListMain_C, SBCheckBox_DebugVisibleOtherPlayer) == 0x0002C8, "Member 'UUMG_PhotoModePlayerListMain_C::SBCheckBox_DebugVisibleOtherPlayer' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModePlayerListMain_C, SBRuntimeTextBlock_CloneCount) == 0x0002D0, "Member 'UUMG_PhotoModePlayerListMain_C::SBRuntimeTextBlock_CloneCount' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModePlayerListMain_C, ShowTutorialHelpBtn) == 0x0002D8, "Member 'UUMG_PhotoModePlayerListMain_C::ShowTutorialHelpBtn' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModePlayerListMain_C, UpdateButton) == 0x0002E0, "Member 'UUMG_PhotoModePlayerListMain_C::UpdateButton' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModePlayerListMain_C, OnListSelected) == 0x0002E8, "Member 'UUMG_PhotoModePlayerListMain_C::OnListSelected' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModePlayerListMain_C, OnClickUpdateButton) == 0x0002F8, "Member 'UUMG_PhotoModePlayerListMain_C::OnClickUpdateButton' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModePlayerListMain_C, OnListUpdated) == 0x000308, "Member 'UUMG_PhotoModePlayerListMain_C::OnListUpdated' has a wrong offset!");

}


#pragma once

 

// Package: UMG_PSOnlyDialog

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_PSOnlyDialog.UMG_PSOnlyDialog_C
// 0x00A8 (0x0320 - 0x0278)
class UUMG_PSOnlyDialog_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBackgroundBlur*                        BgBlur;                                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  Btn_BackClose;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_1;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           PSOnlyOFF;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           PSOnlyON;                                          // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         SelectionList_1;                                   // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         SelectionList_2;                                   // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_MultipleSelectDialog_Button_C*     UMG_MultipleSelectDialog_Button_1;                 // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_MultipleSelectDialog_Button_C*     UMG_MultipleSelectDialog_Button_2;                 // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_MultipleSelectDialog_Button_C*     UMG_MultipleSelectDialog_Button_3;                 // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_MultipleSelectDialog_Button_C*     UMG_MultipleSelectDialog_Button_4;                 // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_MultipleSelectDialog_Button_C*     UMG_MultipleSelectDialog_Button_5;                 // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_MultipleSelectDialog_Button_C*     UMG_MultipleSelectDialog_Button_6;                 // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_56;                                 // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnEnd;                                             // 0x0300(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bMode_OffToOn;                                     // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_674F[0x7];                                     // 0x0311(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGeneralConfigCS_C*                     GeneralConfigCS;                                   // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void SetMode(bool OffToOn);
	void OnInitialized();
	void BndEvt__UMG_PSOnlyDialog_UMG_MultipleSelectDialog_Button_1_K2Node_ComponentBoundEvent_0_OnSelected__DelegateSignature(int32 SelectIndex);
	void BndEvt__UMG_PSOnlyDialog_UMG_MultipleSelectDialog_Button_2_K2Node_ComponentBoundEvent_1_OnSelected__DelegateSignature(int32 SelectIndex);
	void BndEvt__UMG_PSOnlyDialog_UMG_MultipleSelectDialog_Button_4_K2Node_ComponentBoundEvent_2_OnSelected__DelegateSignature(int32 SelectIndex);
	void BndEvt__UMG_PSOnlyDialog_UMG_MultipleSelectDialog_Button_5_K2Node_ComponentBoundEvent_3_OnSelected__DelegateSignature(int32 SelectIndex);
	void ExecuteUbergraph_UMG_PSOnlyDialog(int32 EntryPoint);
	void OnEnd__DelegateSignature(bool Result);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_PSOnlyDialog_C">();
	}
	static class UUMG_PSOnlyDialog_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_PSOnlyDialog_C>();
	}
};
static_assert(alignof(UUMG_PSOnlyDialog_C) == 0x000008, "Wrong alignment on UUMG_PSOnlyDialog_C");
static_assert(sizeof(UUMG_PSOnlyDialog_C) == 0x000320, "Wrong size on UUMG_PSOnlyDialog_C");
static_assert(offsetof(UUMG_PSOnlyDialog_C, UberGraphFrame) == 0x000278, "Member 'UUMG_PSOnlyDialog_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_PSOnlyDialog_C, BgBlur) == 0x000280, "Member 'UUMG_PSOnlyDialog_C::BgBlur' has a wrong offset!");
static_assert(offsetof(UUMG_PSOnlyDialog_C, Btn_BackClose) == 0x000288, "Member 'UUMG_PSOnlyDialog_C::Btn_BackClose' has a wrong offset!");
static_assert(offsetof(UUMG_PSOnlyDialog_C, CanvasPanel) == 0x000290, "Member 'UUMG_PSOnlyDialog_C::CanvasPanel' has a wrong offset!");
static_assert(offsetof(UUMG_PSOnlyDialog_C, CanvasPanel_1) == 0x000298, "Member 'UUMG_PSOnlyDialog_C::CanvasPanel_1' has a wrong offset!");
static_assert(offsetof(UUMG_PSOnlyDialog_C, PSOnlyOFF) == 0x0002A0, "Member 'UUMG_PSOnlyDialog_C::PSOnlyOFF' has a wrong offset!");
static_assert(offsetof(UUMG_PSOnlyDialog_C, PSOnlyON) == 0x0002A8, "Member 'UUMG_PSOnlyDialog_C::PSOnlyON' has a wrong offset!");
static_assert(offsetof(UUMG_PSOnlyDialog_C, SelectionList_1) == 0x0002B0, "Member 'UUMG_PSOnlyDialog_C::SelectionList_1' has a wrong offset!");
static_assert(offsetof(UUMG_PSOnlyDialog_C, SelectionList_2) == 0x0002B8, "Member 'UUMG_PSOnlyDialog_C::SelectionList_2' has a wrong offset!");
static_assert(offsetof(UUMG_PSOnlyDialog_C, UIBlocker) == 0x0002C0, "Member 'UUMG_PSOnlyDialog_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UUMG_PSOnlyDialog_C, UMG_MultipleSelectDialog_Button_1) == 0x0002C8, "Member 'UUMG_PSOnlyDialog_C::UMG_MultipleSelectDialog_Button_1' has a wrong offset!");
static_assert(offsetof(UUMG_PSOnlyDialog_C, UMG_MultipleSelectDialog_Button_2) == 0x0002D0, "Member 'UUMG_PSOnlyDialog_C::UMG_MultipleSelectDialog_Button_2' has a wrong offset!");
static_assert(offsetof(UUMG_PSOnlyDialog_C, UMG_MultipleSelectDialog_Button_3) == 0x0002D8, "Member 'UUMG_PSOnlyDialog_C::UMG_MultipleSelectDialog_Button_3' has a wrong offset!");
static_assert(offsetof(UUMG_PSOnlyDialog_C, UMG_MultipleSelectDialog_Button_4) == 0x0002E0, "Member 'UUMG_PSOnlyDialog_C::UMG_MultipleSelectDialog_Button_4' has a wrong offset!");
static_assert(offsetof(UUMG_PSOnlyDialog_C, UMG_MultipleSelectDialog_Button_5) == 0x0002E8, "Member 'UUMG_PSOnlyDialog_C::UMG_MultipleSelectDialog_Button_5' has a wrong offset!");
static_assert(offsetof(UUMG_PSOnlyDialog_C, UMG_MultipleSelectDialog_Button_6) == 0x0002F0, "Member 'UUMG_PSOnlyDialog_C::UMG_MultipleSelectDialog_Button_6' has a wrong offset!");
static_assert(offsetof(UUMG_PSOnlyDialog_C, WidgetSwitcher_56) == 0x0002F8, "Member 'UUMG_PSOnlyDialog_C::WidgetSwitcher_56' has a wrong offset!");
static_assert(offsetof(UUMG_PSOnlyDialog_C, OnEnd) == 0x000300, "Member 'UUMG_PSOnlyDialog_C::OnEnd' has a wrong offset!");
static_assert(offsetof(UUMG_PSOnlyDialog_C, bMode_OffToOn) == 0x000310, "Member 'UUMG_PSOnlyDialog_C::bMode_OffToOn' has a wrong offset!");
static_assert(offsetof(UUMG_PSOnlyDialog_C, GeneralConfigCS) == 0x000318, "Member 'UUMG_PSOnlyDialog_C::GeneralConfigCS' has a wrong offset!");

}


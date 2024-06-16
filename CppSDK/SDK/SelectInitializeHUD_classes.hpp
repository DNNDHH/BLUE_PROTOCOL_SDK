#pragma once

 

// Package: SelectInitializeHUD

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "LayoutPresetTypes_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SelectInitializeHUD.SelectInitializeHUD_C
// 0x0080 (0x02F8 - 0x0278)
class USelectInitializeHUD_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USBButton_C*                            Btn_Act;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn_MMO;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnCansel;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnAnim_ArrowM_C*                      CmnAnim_ArrowM;                                    // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Left;                                              // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line1;                                             // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line2;                                             // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Right;                                             // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ELayoutPresetTypes                            SelectLayout;                                      // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79E7[0x7];                                     // 0x02D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnSelected;                                        // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnSelected__DelegateSignature(ELayoutPresetTypes Preset);
	void OnClose__DelegateSignature();
	void ExecuteUbergraph_SelectInitializeHUD(int32 EntryPoint);
	void OnSelectedHUD(EDialogResult Result);
	void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0();
	void BndEvt__CmnBtn16_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature();
	void Destruct();
	void BndEvt__Btn_MMO_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Btn_Act_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SelectInitializeHUD_C">();
	}
	static class USelectInitializeHUD_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USelectInitializeHUD_C>();
	}
};
static_assert(alignof(USelectInitializeHUD_C) == 0x000008, "Wrong alignment on USelectInitializeHUD_C");
static_assert(sizeof(USelectInitializeHUD_C) == 0x0002F8, "Wrong size on USelectInitializeHUD_C");
static_assert(offsetof(USelectInitializeHUD_C, UberGraphFrame) == 0x000278, "Member 'USelectInitializeHUD_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USelectInitializeHUD_C, AnimOut) == 0x000280, "Member 'USelectInitializeHUD_C::AnimOut' has a wrong offset!");
static_assert(offsetof(USelectInitializeHUD_C, AnimIn) == 0x000288, "Member 'USelectInitializeHUD_C::AnimIn' has a wrong offset!");
static_assert(offsetof(USelectInitializeHUD_C, Btn_Act) == 0x000290, "Member 'USelectInitializeHUD_C::Btn_Act' has a wrong offset!");
static_assert(offsetof(USelectInitializeHUD_C, Btn_MMO) == 0x000298, "Member 'USelectInitializeHUD_C::Btn_MMO' has a wrong offset!");
static_assert(offsetof(USelectInitializeHUD_C, BtnCansel) == 0x0002A0, "Member 'USelectInitializeHUD_C::BtnCansel' has a wrong offset!");
static_assert(offsetof(USelectInitializeHUD_C, CmnAnim_ArrowM) == 0x0002A8, "Member 'USelectInitializeHUD_C::CmnAnim_ArrowM' has a wrong offset!");
static_assert(offsetof(USelectInitializeHUD_C, Left) == 0x0002B0, "Member 'USelectInitializeHUD_C::Left' has a wrong offset!");
static_assert(offsetof(USelectInitializeHUD_C, Line1) == 0x0002B8, "Member 'USelectInitializeHUD_C::Line1' has a wrong offset!");
static_assert(offsetof(USelectInitializeHUD_C, Line2) == 0x0002C0, "Member 'USelectInitializeHUD_C::Line2' has a wrong offset!");
static_assert(offsetof(USelectInitializeHUD_C, Right) == 0x0002C8, "Member 'USelectInitializeHUD_C::Right' has a wrong offset!");
static_assert(offsetof(USelectInitializeHUD_C, SelectLayout) == 0x0002D0, "Member 'USelectInitializeHUD_C::SelectLayout' has a wrong offset!");
static_assert(offsetof(USelectInitializeHUD_C, OnSelected) == 0x0002D8, "Member 'USelectInitializeHUD_C::OnSelected' has a wrong offset!");
static_assert(offsetof(USelectInitializeHUD_C, OnClose) == 0x0002E8, "Member 'USelectInitializeHUD_C::OnClose' has a wrong offset!");

}


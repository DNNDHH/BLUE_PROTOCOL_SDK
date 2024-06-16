#pragma once

 

// Package: CharaCreate_PosingSwitch

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CharaCreate_PosingSwitch.CharaCreate_PosingSwitch_C
// 0x0040 (0x02B8 - 0x0278)
class UCharaCreate_PosingSwitch_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                PosingSwitchBtnL;                                  // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                PosingSwitchBtnR;                                  // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickedPosingSwitchBtnLeft;                      // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsDressVisibilityOn;                               // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45F4[0x7];                                     // 0x02A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClickedPosingSwitchBtnRight;                     // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnClickedPosingSwitchBtnLeft__DelegateSignature();
	void OnClickedPosingSwitchBtnRight__DelegateSignature();
	void ExecuteUbergraph_CharaCreate_PosingSwitch(int32 EntryPoint);
	void BndEvt__PosingSwitchBtnR_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PosingSwitchBtnL_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PosingSwitchBtnR_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__PosingSwitchBtn_L_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CharaCreate_PosingSwitch_C">();
	}
	static class UCharaCreate_PosingSwitch_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCharaCreate_PosingSwitch_C>();
	}
};
static_assert(alignof(UCharaCreate_PosingSwitch_C) == 0x000008, "Wrong alignment on UCharaCreate_PosingSwitch_C");
static_assert(sizeof(UCharaCreate_PosingSwitch_C) == 0x0002B8, "Wrong size on UCharaCreate_PosingSwitch_C");
static_assert(offsetof(UCharaCreate_PosingSwitch_C, UberGraphFrame) == 0x000278, "Member 'UCharaCreate_PosingSwitch_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCharaCreate_PosingSwitch_C, PosingSwitchBtnL) == 0x000280, "Member 'UCharaCreate_PosingSwitch_C::PosingSwitchBtnL' has a wrong offset!");
static_assert(offsetof(UCharaCreate_PosingSwitch_C, PosingSwitchBtnR) == 0x000288, "Member 'UCharaCreate_PosingSwitch_C::PosingSwitchBtnR' has a wrong offset!");
static_assert(offsetof(UCharaCreate_PosingSwitch_C, OnClickedPosingSwitchBtnLeft) == 0x000290, "Member 'UCharaCreate_PosingSwitch_C::OnClickedPosingSwitchBtnLeft' has a wrong offset!");
static_assert(offsetof(UCharaCreate_PosingSwitch_C, IsDressVisibilityOn) == 0x0002A0, "Member 'UCharaCreate_PosingSwitch_C::IsDressVisibilityOn' has a wrong offset!");
static_assert(offsetof(UCharaCreate_PosingSwitch_C, OnClickedPosingSwitchBtnRight) == 0x0002A8, "Member 'UCharaCreate_PosingSwitch_C::OnClickedPosingSwitchBtnRight' has a wrong offset!");

}


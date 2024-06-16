#pragma once

 

// Package: StatusTypeSwitchBtnForBattleSet

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "E_BattleSetInfoType_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StatusTypeSwitchBtnForBattleSet.StatusTypeSwitchBtnForBattleSet_C
// 0x0038 (0x02B0 - 0x0278)
class UStatusTypeSwitchBtnForBattleSet_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCmnBtn23_C*                            SwitchBtn1;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn23_C*                            SwitchBtn2;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	E_BattleSetInfoType                           InfoType;                                          // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_8454[0x7];                                     // 0x0291(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnSwitchBtnPressed;                                // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         SelectedSwitchBtnId;                               // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnSwitchBtnPressed__DelegateSignature(int32 InPressedSwitchBtnId);
	void ExecuteUbergraph_StatusTypeSwitchBtnForBattleSet(int32 EntryPoint);
	void BndEvt__MyCharaMenu_StatusTypeSwitchBtn_SwitchBtn2_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();
	void BndEvt__MyCharaMenu_StatusTypeSwitchBtn_SwitchBtn1_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void SetInfoType(E_BattleSetInfoType InInfoType);
	void SetSelectedSwitchBtn(int32 InSelectedSwitchBtnId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StatusTypeSwitchBtnForBattleSet_C">();
	}
	static class UStatusTypeSwitchBtnForBattleSet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStatusTypeSwitchBtnForBattleSet_C>();
	}
};
static_assert(alignof(UStatusTypeSwitchBtnForBattleSet_C) == 0x000008, "Wrong alignment on UStatusTypeSwitchBtnForBattleSet_C");
static_assert(sizeof(UStatusTypeSwitchBtnForBattleSet_C) == 0x0002B0, "Wrong size on UStatusTypeSwitchBtnForBattleSet_C");
static_assert(offsetof(UStatusTypeSwitchBtnForBattleSet_C, UberGraphFrame) == 0x000278, "Member 'UStatusTypeSwitchBtnForBattleSet_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UStatusTypeSwitchBtnForBattleSet_C, SwitchBtn1) == 0x000280, "Member 'UStatusTypeSwitchBtnForBattleSet_C::SwitchBtn1' has a wrong offset!");
static_assert(offsetof(UStatusTypeSwitchBtnForBattleSet_C, SwitchBtn2) == 0x000288, "Member 'UStatusTypeSwitchBtnForBattleSet_C::SwitchBtn2' has a wrong offset!");
static_assert(offsetof(UStatusTypeSwitchBtnForBattleSet_C, InfoType) == 0x000290, "Member 'UStatusTypeSwitchBtnForBattleSet_C::InfoType' has a wrong offset!");
static_assert(offsetof(UStatusTypeSwitchBtnForBattleSet_C, OnSwitchBtnPressed) == 0x000298, "Member 'UStatusTypeSwitchBtnForBattleSet_C::OnSwitchBtnPressed' has a wrong offset!");
static_assert(offsetof(UStatusTypeSwitchBtnForBattleSet_C, SelectedSwitchBtnId) == 0x0002A8, "Member 'UStatusTypeSwitchBtnForBattleSet_C::SelectedSwitchBtnId' has a wrong offset!");

}


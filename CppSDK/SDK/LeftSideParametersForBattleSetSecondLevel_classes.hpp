#pragma once

 

// Package: LeftSideParametersForBattleSetSecondLevel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "E_BattleSetInfoType_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LeftSideParametersForBattleSetSecondLevel.LeftSideParametersForBattleSetSecondLevel_C
// 0x0040 (0x02B8 - 0x0278)
class ULeftSideParametersForBattleSetSecondLevel_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Bg01;                                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_LeftSideParameters_C*      LeftSideParametersBody;                            // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitcherHeadBg;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_LeftSideParametersBody;                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	E_BattleSetInfoType                           BattleSetInfoType;                                 // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_84A7[0x7];                                     // 0x02A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnDetailStatusBtnClicked;                          // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnDetailStatusBtnClicked__DelegateSignature();
	void ExecuteUbergraph_LeftSideParametersForBattleSetSecondLevel(int32 EntryPoint);
	void BndEvt__LeftSideParametersForBattleSetSecondLevel_LeftSideParametersBody_K2Node_ComponentBoundEvent_0_OnDetailedStatusClicked__DelegateSignature();
	void SetBattleSetInfoType(E_BattleSetInfoType InBattleSetInfoType);
	void GetLeftSideParameters(class UMyCharaMenu_LeftSideParameters_C** OutLeftSideParameters);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LeftSideParametersForBattleSetSecondLevel_C">();
	}
	static class ULeftSideParametersForBattleSetSecondLevel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULeftSideParametersForBattleSetSecondLevel_C>();
	}
};
static_assert(alignof(ULeftSideParametersForBattleSetSecondLevel_C) == 0x000008, "Wrong alignment on ULeftSideParametersForBattleSetSecondLevel_C");
static_assert(sizeof(ULeftSideParametersForBattleSetSecondLevel_C) == 0x0002B8, "Wrong size on ULeftSideParametersForBattleSetSecondLevel_C");
static_assert(offsetof(ULeftSideParametersForBattleSetSecondLevel_C, UberGraphFrame) == 0x000278, "Member 'ULeftSideParametersForBattleSetSecondLevel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULeftSideParametersForBattleSetSecondLevel_C, Bg01) == 0x000280, "Member 'ULeftSideParametersForBattleSetSecondLevel_C::Bg01' has a wrong offset!");
static_assert(offsetof(ULeftSideParametersForBattleSetSecondLevel_C, LeftSideParametersBody) == 0x000288, "Member 'ULeftSideParametersForBattleSetSecondLevel_C::LeftSideParametersBody' has a wrong offset!");
static_assert(offsetof(ULeftSideParametersForBattleSetSecondLevel_C, SwitcherHeadBg) == 0x000290, "Member 'ULeftSideParametersForBattleSetSecondLevel_C::SwitcherHeadBg' has a wrong offset!");
static_assert(offsetof(ULeftSideParametersForBattleSetSecondLevel_C, VB_LeftSideParametersBody) == 0x000298, "Member 'ULeftSideParametersForBattleSetSecondLevel_C::VB_LeftSideParametersBody' has a wrong offset!");
static_assert(offsetof(ULeftSideParametersForBattleSetSecondLevel_C, BattleSetInfoType) == 0x0002A0, "Member 'ULeftSideParametersForBattleSetSecondLevel_C::BattleSetInfoType' has a wrong offset!");
static_assert(offsetof(ULeftSideParametersForBattleSetSecondLevel_C, OnDetailStatusBtnClicked) == 0x0002A8, "Member 'ULeftSideParametersForBattleSetSecondLevel_C::OnDetailStatusBtnClicked' has a wrong offset!");

}


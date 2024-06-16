#pragma once

 

// Package: BattleCordeSetHeadingForBattleSet

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BattleCordeSetHeadingForBattleSet.BattleCordeSetHeadingForBattleSet_C
// 0x0040 (0x02B8 - 0x0278)
class UBattleCordeSetHeadingForBattleSet_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCmnBtn16_C*                            AdminOrEditBtn;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Bg01;                                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    HeadingTxt;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Light;                                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnAdminOrEditBtnPressed;                           // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnAdminOrEditBtnPressed__DelegateSignature();
	void ExecuteUbergraph_BattleCordeSetHeadingForBattleSet(int32 EntryPoint);
	void BndEvt__BattleCordeSetHeadingForBattleSet_AdminOrEditBtn_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BattleCordeSetHeadingForBattleSet_C">();
	}
	static class UBattleCordeSetHeadingForBattleSet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBattleCordeSetHeadingForBattleSet_C>();
	}
};
static_assert(alignof(UBattleCordeSetHeadingForBattleSet_C) == 0x000008, "Wrong alignment on UBattleCordeSetHeadingForBattleSet_C");
static_assert(sizeof(UBattleCordeSetHeadingForBattleSet_C) == 0x0002B8, "Wrong size on UBattleCordeSetHeadingForBattleSet_C");
static_assert(offsetof(UBattleCordeSetHeadingForBattleSet_C, UberGraphFrame) == 0x000278, "Member 'UBattleCordeSetHeadingForBattleSet_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBattleCordeSetHeadingForBattleSet_C, AdminOrEditBtn) == 0x000280, "Member 'UBattleCordeSetHeadingForBattleSet_C::AdminOrEditBtn' has a wrong offset!");
static_assert(offsetof(UBattleCordeSetHeadingForBattleSet_C, Bg01) == 0x000288, "Member 'UBattleCordeSetHeadingForBattleSet_C::Bg01' has a wrong offset!");
static_assert(offsetof(UBattleCordeSetHeadingForBattleSet_C, HeadingTxt) == 0x000290, "Member 'UBattleCordeSetHeadingForBattleSet_C::HeadingTxt' has a wrong offset!");
static_assert(offsetof(UBattleCordeSetHeadingForBattleSet_C, Icon) == 0x000298, "Member 'UBattleCordeSetHeadingForBattleSet_C::Icon' has a wrong offset!");
static_assert(offsetof(UBattleCordeSetHeadingForBattleSet_C, Light) == 0x0002A0, "Member 'UBattleCordeSetHeadingForBattleSet_C::Light' has a wrong offset!");
static_assert(offsetof(UBattleCordeSetHeadingForBattleSet_C, OnAdminOrEditBtnPressed) == 0x0002A8, "Member 'UBattleCordeSetHeadingForBattleSet_C::OnAdminOrEditBtnPressed' has a wrong offset!");

}


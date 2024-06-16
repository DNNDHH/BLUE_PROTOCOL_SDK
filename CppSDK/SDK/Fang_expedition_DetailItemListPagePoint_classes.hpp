#pragma once

 

// Package: Fang_expedition_DetailItemListPagePoint

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Fang_expedition_DetailItemListPagePoint.Fang_expedition_DetailItemListPagePoint_C
// 0x0040 (0x02B8 - 0x0278)
class UFang_expedition_DetailItemListPagePoint_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Active;                                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Deactive;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_C_88;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_64;                                 // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnButtonClicked;                                   // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         Index_Fang_expedition_DetailItemListPagePoint_C;   // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnButtonClicked__DelegateSignature(int32 Param_Index);
	void ExecuteUbergraph_Fang_expedition_DetailItemListPagePoint(int32 EntryPoint);
	void BndEvt__Fang_expedition_DetailItemListPagePoint_SBButton_C_88_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void SetActive(bool IsActive);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fang_expedition_DetailItemListPagePoint_C">();
	}
	static class UFang_expedition_DetailItemListPagePoint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFang_expedition_DetailItemListPagePoint_C>();
	}
};
static_assert(alignof(UFang_expedition_DetailItemListPagePoint_C) == 0x000008, "Wrong alignment on UFang_expedition_DetailItemListPagePoint_C");
static_assert(sizeof(UFang_expedition_DetailItemListPagePoint_C) == 0x0002B8, "Wrong size on UFang_expedition_DetailItemListPagePoint_C");
static_assert(offsetof(UFang_expedition_DetailItemListPagePoint_C, UberGraphFrame) == 0x000278, "Member 'UFang_expedition_DetailItemListPagePoint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemListPagePoint_C, Active) == 0x000280, "Member 'UFang_expedition_DetailItemListPagePoint_C::Active' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemListPagePoint_C, Deactive) == 0x000288, "Member 'UFang_expedition_DetailItemListPagePoint_C::Deactive' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemListPagePoint_C, SBButton_C_88) == 0x000290, "Member 'UFang_expedition_DetailItemListPagePoint_C::SBButton_C_88' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemListPagePoint_C, WidgetSwitcher_64) == 0x000298, "Member 'UFang_expedition_DetailItemListPagePoint_C::WidgetSwitcher_64' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemListPagePoint_C, OnButtonClicked) == 0x0002A0, "Member 'UFang_expedition_DetailItemListPagePoint_C::OnButtonClicked' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemListPagePoint_C, Index_Fang_expedition_DetailItemListPagePoint_C) == 0x0002B0, "Member 'UFang_expedition_DetailItemListPagePoint_C::Index_Fang_expedition_DetailItemListPagePoint_C' has a wrong offset!");

}


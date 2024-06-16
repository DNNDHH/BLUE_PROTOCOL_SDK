#pragma once

 

// Package: UMG_LoginBonusListLine

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_LoginBonusListLine.UMG_LoginBonusListLine_C
// 0x0068 (0x02E0 - 0x0278)
class UUMG_LoginBonusListLine_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UUMG_LoginBonusListLineItem_C*          Item1;                                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_LoginBonusListLineItem_C*          Item2;                                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_LoginBonusListLineItem_C*          Item3;                                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_LoginBonusListLineItem_C*          Item4;                                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_LoginBonusListLineItem_C*          Item5;                                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UUMG_LoginBonusListLineItem_C*>  WidgetList;                                        // 0x02A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_             StumpAnimationFinish;                              // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             IconClick;                                         // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         ClickIndexBase;                                    // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void StumpAnimationFinish__DelegateSignature();
	void IconClick__DelegateSignature(int32 Param_Index, class UUMG_LoginBonusListLineItem_C* SelectedItem);
	void ExecuteUbergraph_UMG_LoginBonusListLine(int32 EntryPoint);
	void OnIconClick(int32 ID, class UUMG_LoginBonusListLineItem_C* SelectedItem);
	void Finish();
	void Initialize();
	void OnStumpAnimationFinish();
	void Set_Data(int32 Param_Index, const struct FSBLoginBonusWindowDayData& Data, ESlateVisibility Param_Visibility, bool Stump, bool Click);
	void GetWidget(int32 Param_Index, class UUMG_LoginBonusListLineItem_C** Widget);
	void PlayStumpAnimation(int32 Param_Index, bool* IsPlay);
	void ClearItemSelected();
	void OnCloseAnimationFinished();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_LoginBonusListLine_C">();
	}
	static class UUMG_LoginBonusListLine_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_LoginBonusListLine_C>();
	}
};
static_assert(alignof(UUMG_LoginBonusListLine_C) == 0x000008, "Wrong alignment on UUMG_LoginBonusListLine_C");
static_assert(sizeof(UUMG_LoginBonusListLine_C) == 0x0002E0, "Wrong size on UUMG_LoginBonusListLine_C");
static_assert(offsetof(UUMG_LoginBonusListLine_C, UberGraphFrame) == 0x000278, "Member 'UUMG_LoginBonusListLine_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_LoginBonusListLine_C, Item1) == 0x000280, "Member 'UUMG_LoginBonusListLine_C::Item1' has a wrong offset!");
static_assert(offsetof(UUMG_LoginBonusListLine_C, Item2) == 0x000288, "Member 'UUMG_LoginBonusListLine_C::Item2' has a wrong offset!");
static_assert(offsetof(UUMG_LoginBonusListLine_C, Item3) == 0x000290, "Member 'UUMG_LoginBonusListLine_C::Item3' has a wrong offset!");
static_assert(offsetof(UUMG_LoginBonusListLine_C, Item4) == 0x000298, "Member 'UUMG_LoginBonusListLine_C::Item4' has a wrong offset!");
static_assert(offsetof(UUMG_LoginBonusListLine_C, Item5) == 0x0002A0, "Member 'UUMG_LoginBonusListLine_C::Item5' has a wrong offset!");
static_assert(offsetof(UUMG_LoginBonusListLine_C, WidgetList) == 0x0002A8, "Member 'UUMG_LoginBonusListLine_C::WidgetList' has a wrong offset!");
static_assert(offsetof(UUMG_LoginBonusListLine_C, StumpAnimationFinish) == 0x0002B8, "Member 'UUMG_LoginBonusListLine_C::StumpAnimationFinish' has a wrong offset!");
static_assert(offsetof(UUMG_LoginBonusListLine_C, IconClick) == 0x0002C8, "Member 'UUMG_LoginBonusListLine_C::IconClick' has a wrong offset!");
static_assert(offsetof(UUMG_LoginBonusListLine_C, ClickIndexBase) == 0x0002D8, "Member 'UUMG_LoginBonusListLine_C::ClickIndexBase' has a wrong offset!");

}


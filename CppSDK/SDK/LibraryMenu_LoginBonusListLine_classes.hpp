#pragma once

 

// Package: LibraryMenu_LoginBonusListLine

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LibraryMenu_LoginBonusListLine.LibraryMenu_LoginBonusListLine_C
// 0x0058 (0x02D0 - 0x0278)
class ULibraryMenu_LoginBonusListLine_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ULibraryMenu_LoginBonusListLineItem_C*  Item1;                                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULibraryMenu_LoginBonusListLineItem_C*  Item2;                                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULibraryMenu_LoginBonusListLineItem_C*  Item3;                                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULibraryMenu_LoginBonusListLineItem_C*  Item4;                                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULibraryMenu_LoginBonusListLineItem_C*  Item5;                                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             IconClick;                                         // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         ClickIndexBase;                                    // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_63CF[0x4];                                     // 0x02BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ULibraryMenu_LoginBonusListLineItem_C*> WidgetList;                                        // 0x02C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void IconClick__DelegateSignature(int32 Param_Index);
	void ExecuteUbergraph_LibraryMenu_LoginBonusListLine(int32 EntryPoint);
	void OnIconClick(int32 ID);
	void Finish();
	void Initialize();
	void Set_Data(int32 Param_Index, const struct FSBLoginBonusWindowDayData& Data, ESlateVisibility Param_Visibility, bool Stump, bool Click);
	void GetWidget(int32 Param_Index, class ULibraryMenu_LoginBonusListLineItem_C** Widget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LibraryMenu_LoginBonusListLine_C">();
	}
	static class ULibraryMenu_LoginBonusListLine_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULibraryMenu_LoginBonusListLine_C>();
	}
};
static_assert(alignof(ULibraryMenu_LoginBonusListLine_C) == 0x000008, "Wrong alignment on ULibraryMenu_LoginBonusListLine_C");
static_assert(sizeof(ULibraryMenu_LoginBonusListLine_C) == 0x0002D0, "Wrong size on ULibraryMenu_LoginBonusListLine_C");
static_assert(offsetof(ULibraryMenu_LoginBonusListLine_C, UberGraphFrame) == 0x000278, "Member 'ULibraryMenu_LoginBonusListLine_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonusListLine_C, Item1) == 0x000280, "Member 'ULibraryMenu_LoginBonusListLine_C::Item1' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonusListLine_C, Item2) == 0x000288, "Member 'ULibraryMenu_LoginBonusListLine_C::Item2' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonusListLine_C, Item3) == 0x000290, "Member 'ULibraryMenu_LoginBonusListLine_C::Item3' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonusListLine_C, Item4) == 0x000298, "Member 'ULibraryMenu_LoginBonusListLine_C::Item4' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonusListLine_C, Item5) == 0x0002A0, "Member 'ULibraryMenu_LoginBonusListLine_C::Item5' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonusListLine_C, IconClick) == 0x0002A8, "Member 'ULibraryMenu_LoginBonusListLine_C::IconClick' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonusListLine_C, ClickIndexBase) == 0x0002B8, "Member 'ULibraryMenu_LoginBonusListLine_C::ClickIndexBase' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonusListLine_C, WidgetList) == 0x0002C0, "Member 'ULibraryMenu_LoginBonusListLine_C::WidgetList' has a wrong offset!");

}


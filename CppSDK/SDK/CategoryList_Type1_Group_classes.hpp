#pragma once

 

// Package: CategoryList_Type1_Group

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CategoryList_Type1_Group.CategoryList_Type1_Group_C
// 0x0070 (0x02E8 - 0x0278)
class UCategoryList_Type1_Group_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UExpandableArea*                        ExpandableArea;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UExpandableArea*                        ExpandableArea_64;                                 // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             GroupName;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             GroupName_1;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_155;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox;                                       // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_116;                                   // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_505;                                // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<int32>                                 IDList;                                            // 0x02C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UCategoryList_Type1_Item_C*>     WidgetList;                                        // 0x02D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void ExecuteUbergraph_CategoryList_Type1_Group(int32 EntryPoint);
	void BndEvt__CategoryList_Type1_Group_ExpandableArea_K2Node_ComponentBoundEvent_1_OnExpandableAreaExpansionChanged__DelegateSignature(class UExpandableArea* Area, bool bIsExpanded);
	void BndEvt__CategoryList_Type1_Group_ExpandableArea_64_K2Node_ComponentBoundEvent_0_OnExpandableAreaExpansionChanged__DelegateSignature(class UExpandableArea* Area, bool bIsExpanded);
	void SetGroupNameText(const class FText& NameText);
	void AddListItem(class UCategoryList_Type1_Item_C* ListItem, int32 ID);
	void SetButtonSelected(int32 ID, bool Selected);
	void CheckListNewIconVisible(bool* Result);
	void SetButtonSelectIndex(int32 Param_Index, bool Selected);
	void SetNewIcon(int32 InId, bool InIsActive);
	void SetAllNewIcon(bool InIsActive);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CategoryList_Type1_Group_C">();
	}
	static class UCategoryList_Type1_Group_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCategoryList_Type1_Group_C>();
	}
};
static_assert(alignof(UCategoryList_Type1_Group_C) == 0x000008, "Wrong alignment on UCategoryList_Type1_Group_C");
static_assert(sizeof(UCategoryList_Type1_Group_C) == 0x0002E8, "Wrong size on UCategoryList_Type1_Group_C");
static_assert(offsetof(UCategoryList_Type1_Group_C, UberGraphFrame) == 0x000278, "Member 'UCategoryList_Type1_Group_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCategoryList_Type1_Group_C, ExpandableArea) == 0x000280, "Member 'UCategoryList_Type1_Group_C::ExpandableArea' has a wrong offset!");
static_assert(offsetof(UCategoryList_Type1_Group_C, ExpandableArea_64) == 0x000288, "Member 'UCategoryList_Type1_Group_C::ExpandableArea_64' has a wrong offset!");
static_assert(offsetof(UCategoryList_Type1_Group_C, GroupName) == 0x000290, "Member 'UCategoryList_Type1_Group_C::GroupName' has a wrong offset!");
static_assert(offsetof(UCategoryList_Type1_Group_C, GroupName_1) == 0x000298, "Member 'UCategoryList_Type1_Group_C::GroupName_1' has a wrong offset!");
static_assert(offsetof(UCategoryList_Type1_Group_C, Image) == 0x0002A0, "Member 'UCategoryList_Type1_Group_C::Image' has a wrong offset!");
static_assert(offsetof(UCategoryList_Type1_Group_C, Image_155) == 0x0002A8, "Member 'UCategoryList_Type1_Group_C::Image_155' has a wrong offset!");
static_assert(offsetof(UCategoryList_Type1_Group_C, VerticalBox) == 0x0002B0, "Member 'UCategoryList_Type1_Group_C::VerticalBox' has a wrong offset!");
static_assert(offsetof(UCategoryList_Type1_Group_C, VerticalBox_116) == 0x0002B8, "Member 'UCategoryList_Type1_Group_C::VerticalBox_116' has a wrong offset!");
static_assert(offsetof(UCategoryList_Type1_Group_C, WidgetSwitcher_505) == 0x0002C0, "Member 'UCategoryList_Type1_Group_C::WidgetSwitcher_505' has a wrong offset!");
static_assert(offsetof(UCategoryList_Type1_Group_C, IDList) == 0x0002C8, "Member 'UCategoryList_Type1_Group_C::IDList' has a wrong offset!");
static_assert(offsetof(UCategoryList_Type1_Group_C, WidgetList) == 0x0002D8, "Member 'UCategoryList_Type1_Group_C::WidgetList' has a wrong offset!");

}


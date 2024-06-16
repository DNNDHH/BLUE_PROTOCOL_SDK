#pragma once

 

// Package: CategoryList_Type1_Item

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CategoryList_Type1_Item.CategoryList_Type1_Item_C
// 0x0050 (0x02C8 - 0x0278)
class UCategoryList_Type1_Item_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Btn1;                                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconNew;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ItemName;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchSelected;                                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClick;                                           // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                 Text;                                              // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         ListIndex;                                         // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IsNew;                                             // 0x02C4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnClick__DelegateSignature(int32 Param_ListIndex);
	void ExecuteUbergraph_CategoryList_Type1_Item(int32 EntryPoint);
	void BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_136_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_117_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void SetName(const class FText& InText);
	void SetBtnSelected(bool bSelected);
	void SetNewIcon(bool Param_IsVisible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CategoryList_Type1_Item_C">();
	}
	static class UCategoryList_Type1_Item_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCategoryList_Type1_Item_C>();
	}
};
static_assert(alignof(UCategoryList_Type1_Item_C) == 0x000008, "Wrong alignment on UCategoryList_Type1_Item_C");
static_assert(sizeof(UCategoryList_Type1_Item_C) == 0x0002C8, "Wrong size on UCategoryList_Type1_Item_C");
static_assert(offsetof(UCategoryList_Type1_Item_C, UberGraphFrame) == 0x000278, "Member 'UCategoryList_Type1_Item_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCategoryList_Type1_Item_C, Btn1) == 0x000280, "Member 'UCategoryList_Type1_Item_C::Btn1' has a wrong offset!");
static_assert(offsetof(UCategoryList_Type1_Item_C, IconNew) == 0x000288, "Member 'UCategoryList_Type1_Item_C::IconNew' has a wrong offset!");
static_assert(offsetof(UCategoryList_Type1_Item_C, ItemName) == 0x000290, "Member 'UCategoryList_Type1_Item_C::ItemName' has a wrong offset!");
static_assert(offsetof(UCategoryList_Type1_Item_C, SwitchSelected) == 0x000298, "Member 'UCategoryList_Type1_Item_C::SwitchSelected' has a wrong offset!");
static_assert(offsetof(UCategoryList_Type1_Item_C, OnClick) == 0x0002A0, "Member 'UCategoryList_Type1_Item_C::OnClick' has a wrong offset!");
static_assert(offsetof(UCategoryList_Type1_Item_C, Text) == 0x0002B0, "Member 'UCategoryList_Type1_Item_C::Text' has a wrong offset!");
static_assert(offsetof(UCategoryList_Type1_Item_C, ListIndex) == 0x0002C0, "Member 'UCategoryList_Type1_Item_C::ListIndex' has a wrong offset!");
static_assert(offsetof(UCategoryList_Type1_Item_C, IsNew) == 0x0002C4, "Member 'UCategoryList_Type1_Item_C::IsNew' has a wrong offset!");

}


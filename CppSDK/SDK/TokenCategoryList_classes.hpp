#pragma once

 

// Package: TokenCategoryList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TokenCategoryList.TokenCategoryList_C
// 0x0050 (0x02C8 - 0x0278)
class UTokenCategoryList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         CategoryList;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<int32>                                 TextIdList;                                        // 0x0288(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	class USBTextTableAsset*                      TextTable;                                         // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class UTokenCategoryButton_C*>         Buttons;                                           // 0x02A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_             OnClick;                                           // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         FocusIndex;                                        // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InputActive;                                       // 0x02C4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnClick__DelegateSignature(int32 Param_Index);
	void ExecuteUbergraph_TokenCategoryList(int32 EntryPoint);
	void SeInputActive(bool Param_InputActive);
	void OnButtonClick(int32 ListIndex);
	void SetList();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TokenCategoryList_C">();
	}
	static class UTokenCategoryList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTokenCategoryList_C>();
	}
};
static_assert(alignof(UTokenCategoryList_C) == 0x000008, "Wrong alignment on UTokenCategoryList_C");
static_assert(sizeof(UTokenCategoryList_C) == 0x0002C8, "Wrong size on UTokenCategoryList_C");
static_assert(offsetof(UTokenCategoryList_C, UberGraphFrame) == 0x000278, "Member 'UTokenCategoryList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTokenCategoryList_C, CategoryList) == 0x000280, "Member 'UTokenCategoryList_C::CategoryList' has a wrong offset!");
static_assert(offsetof(UTokenCategoryList_C, TextIdList) == 0x000288, "Member 'UTokenCategoryList_C::TextIdList' has a wrong offset!");
static_assert(offsetof(UTokenCategoryList_C, TextTable) == 0x000298, "Member 'UTokenCategoryList_C::TextTable' has a wrong offset!");
static_assert(offsetof(UTokenCategoryList_C, Buttons) == 0x0002A0, "Member 'UTokenCategoryList_C::Buttons' has a wrong offset!");
static_assert(offsetof(UTokenCategoryList_C, OnClick) == 0x0002B0, "Member 'UTokenCategoryList_C::OnClick' has a wrong offset!");
static_assert(offsetof(UTokenCategoryList_C, FocusIndex) == 0x0002C0, "Member 'UTokenCategoryList_C::FocusIndex' has a wrong offset!");
static_assert(offsetof(UTokenCategoryList_C, InputActive) == 0x0002C4, "Member 'UTokenCategoryList_C::InputActive' has a wrong offset!");

}


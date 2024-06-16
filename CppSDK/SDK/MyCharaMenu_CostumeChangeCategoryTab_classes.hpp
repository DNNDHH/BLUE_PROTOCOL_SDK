#pragma once

 

// Package: MyCharaMenu_CostumeChangeCategoryTab

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "E_MyCharaMenu_CostumeCategory_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MyCharaMenu_CostumeChangeCategoryTab.MyCharaMenu_CostumeChangeCategoryTab_C
// 0x0028 (0x02A0 - 0x0278)
class UMyCharaMenu_CostumeChangeCategoryTab_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         HorizontalBoxForCostumeCategoryIconBtns;           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnCostumeCategoryIconBtnClicked;                   // 0x0288(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	E_MyCharaMenu_CostumeCategory                 SelectedCostumeCategory;                           // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnCostumeCategoryIconBtnClicked__DelegateSignature(E_MyCharaMenu_CostumeCategory InCostumeCategory);
	void ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab(int32 EntryPoint);
	void Destruct();
	void OnCostumeCategoryIconBtnClickedEvent(E_MyCharaMenu_CostumeCategory InCostumeCategory);
	void PreConstruct(bool IsDesignTime);
	void UpdateSelectedCostumeCategoryIconBtn(E_MyCharaMenu_CostumeCategory InSelectedCostumeCategory);
	void SetSelectedCostumeCategoryIconBtn(E_MyCharaMenu_CostumeCategory InSelectedCostumeCategory);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MyCharaMenu_CostumeChangeCategoryTab_C">();
	}
	static class UMyCharaMenu_CostumeChangeCategoryTab_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMyCharaMenu_CostumeChangeCategoryTab_C>();
	}
};
static_assert(alignof(UMyCharaMenu_CostumeChangeCategoryTab_C) == 0x000008, "Wrong alignment on UMyCharaMenu_CostumeChangeCategoryTab_C");
static_assert(sizeof(UMyCharaMenu_CostumeChangeCategoryTab_C) == 0x0002A0, "Wrong size on UMyCharaMenu_CostumeChangeCategoryTab_C");
static_assert(offsetof(UMyCharaMenu_CostumeChangeCategoryTab_C, UberGraphFrame) == 0x000278, "Member 'UMyCharaMenu_CostumeChangeCategoryTab_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeChangeCategoryTab_C, HorizontalBoxForCostumeCategoryIconBtns) == 0x000280, "Member 'UMyCharaMenu_CostumeChangeCategoryTab_C::HorizontalBoxForCostumeCategoryIconBtns' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeChangeCategoryTab_C, OnCostumeCategoryIconBtnClicked) == 0x000288, "Member 'UMyCharaMenu_CostumeChangeCategoryTab_C::OnCostumeCategoryIconBtnClicked' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeChangeCategoryTab_C, SelectedCostumeCategory) == 0x000298, "Member 'UMyCharaMenu_CostumeChangeCategoryTab_C::SelectedCostumeCategory' has a wrong offset!");

}


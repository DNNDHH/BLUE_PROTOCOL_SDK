#pragma once

 

// Package: MyCharaMenu_CostumeChangeAccessoryCategoryTab

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "E_MyCharaMenu_AccessoryCategory_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MyCharaMenu_CostumeChangeAccessoryCategoryTab.MyCharaMenu_CostumeChangeAccessoryCategoryTab_C
// 0x0040 (0x02B8 - 0x0278)
class UMyCharaMenu_CostumeChangeAccessoryCategoryTab_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         HorizontalBoxForCostumeAccessoryCategoryIconBtns;  // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconListBg01;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnAccessoryCategoryIconBtnClicked;                 // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<E_MyCharaMenu_AccessoryCategory>       AccessoryCategories;                               // 0x02A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	E_MyCharaMenu_AccessoryCategory               SelectedAccesoryCategory;                          // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnAccessoryCategoryIconBtnClicked__DelegateSignature(E_MyCharaMenu_AccessoryCategory InAccessoryCategory);
	void ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab(int32 EntryPoint);
	void OnAccessoryCategoryBtnClickedEvent(E_MyCharaMenu_AccessoryCategory InAccessoryCategory);
	void Destruct();
	void PreConstruct(bool IsDesignTime);
	void UpdateSelectedAccessoryCategoryIconBtn(E_MyCharaMenu_AccessoryCategory InAccessoryCategory);
	void SetSelectedAccessoryCategoryIconBtn(E_MyCharaMenu_AccessoryCategory InAccessoryCategory);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MyCharaMenu_CostumeChangeAccessoryCategoryTab_C">();
	}
	static class UMyCharaMenu_CostumeChangeAccessoryCategoryTab_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMyCharaMenu_CostumeChangeAccessoryCategoryTab_C>();
	}
};
static_assert(alignof(UMyCharaMenu_CostumeChangeAccessoryCategoryTab_C) == 0x000008, "Wrong alignment on UMyCharaMenu_CostumeChangeAccessoryCategoryTab_C");
static_assert(sizeof(UMyCharaMenu_CostumeChangeAccessoryCategoryTab_C) == 0x0002B8, "Wrong size on UMyCharaMenu_CostumeChangeAccessoryCategoryTab_C");
static_assert(offsetof(UMyCharaMenu_CostumeChangeAccessoryCategoryTab_C, UberGraphFrame) == 0x000278, "Member 'UMyCharaMenu_CostumeChangeAccessoryCategoryTab_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeChangeAccessoryCategoryTab_C, HorizontalBoxForCostumeAccessoryCategoryIconBtns) == 0x000280, "Member 'UMyCharaMenu_CostumeChangeAccessoryCategoryTab_C::HorizontalBoxForCostumeAccessoryCategoryIconBtns' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeChangeAccessoryCategoryTab_C, IconListBg01) == 0x000288, "Member 'UMyCharaMenu_CostumeChangeAccessoryCategoryTab_C::IconListBg01' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeChangeAccessoryCategoryTab_C, OnAccessoryCategoryIconBtnClicked) == 0x000290, "Member 'UMyCharaMenu_CostumeChangeAccessoryCategoryTab_C::OnAccessoryCategoryIconBtnClicked' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeChangeAccessoryCategoryTab_C, AccessoryCategories) == 0x0002A0, "Member 'UMyCharaMenu_CostumeChangeAccessoryCategoryTab_C::AccessoryCategories' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeChangeAccessoryCategoryTab_C, SelectedAccesoryCategory) == 0x0002B0, "Member 'UMyCharaMenu_CostumeChangeAccessoryCategoryTab_C::SelectedAccesoryCategory' has a wrong offset!");

}


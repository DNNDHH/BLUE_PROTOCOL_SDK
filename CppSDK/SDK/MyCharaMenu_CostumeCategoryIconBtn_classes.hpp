#pragma once

 

// Package: MyCharaMenu_CostumeCategoryIconBtn

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "E_MyCharaMenu_CostumeCategory_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MyCharaMenu_CostumeCategoryIconBtn.MyCharaMenu_CostumeCategoryIconBtn_C
// 0x0038 (0x02B0 - 0x0278)
class UMyCharaMenu_CostumeCategoryIconBtn_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Btn01;                                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImgIcon;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImgSelectedBg;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnButtonClicked;                                   // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	E_MyCharaMenu_CostumeCategory                 CostumeCategory;                                   // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void OnButtonClicked__DelegateSignature(E_MyCharaMenu_CostumeCategory InCostumeCategory);
	void ExecuteUbergraph_MyCharaMenu_CostumeCategoryIconBtn(int32 EntryPoint);
	void BndEvt__Btn01_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void SetCostumeCategory(E_MyCharaMenu_CostumeCategory InCostumeCategory);
	void GetCostumeCategory(E_MyCharaMenu_CostumeCategory* OutCostumeCategory);
	void SetSelected(bool InIsSelected);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MyCharaMenu_CostumeCategoryIconBtn_C">();
	}
	static class UMyCharaMenu_CostumeCategoryIconBtn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMyCharaMenu_CostumeCategoryIconBtn_C>();
	}
};
static_assert(alignof(UMyCharaMenu_CostumeCategoryIconBtn_C) == 0x000008, "Wrong alignment on UMyCharaMenu_CostumeCategoryIconBtn_C");
static_assert(sizeof(UMyCharaMenu_CostumeCategoryIconBtn_C) == 0x0002B0, "Wrong size on UMyCharaMenu_CostumeCategoryIconBtn_C");
static_assert(offsetof(UMyCharaMenu_CostumeCategoryIconBtn_C, UberGraphFrame) == 0x000278, "Member 'UMyCharaMenu_CostumeCategoryIconBtn_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeCategoryIconBtn_C, Btn01) == 0x000280, "Member 'UMyCharaMenu_CostumeCategoryIconBtn_C::Btn01' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeCategoryIconBtn_C, ImgIcon) == 0x000288, "Member 'UMyCharaMenu_CostumeCategoryIconBtn_C::ImgIcon' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeCategoryIconBtn_C, ImgSelectedBg) == 0x000290, "Member 'UMyCharaMenu_CostumeCategoryIconBtn_C::ImgSelectedBg' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeCategoryIconBtn_C, OnButtonClicked) == 0x000298, "Member 'UMyCharaMenu_CostumeCategoryIconBtn_C::OnButtonClicked' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeCategoryIconBtn_C, CostumeCategory) == 0x0002A8, "Member 'UMyCharaMenu_CostumeCategoryIconBtn_C::CostumeCategory' has a wrong offset!");

}


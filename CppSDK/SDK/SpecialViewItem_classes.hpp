#pragma once

 

// Package: SpecialViewItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SpecialViewItem.SpecialViewItem_C
// 0x0178 (0x03F0 - 0x0278)
class USpecialViewItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CvList;                                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_230;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Select;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Imagine;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_PerkName;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_PerkValue;                                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Weapon;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_TextHead;                                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FOwnItemInfo                           ItemData;                                          // 0x02C0(0x0118)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_             OnSelect;                                          // 0x03D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bDisableMouseOver;                                 // 0x03E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void OnSelect__DelegateSignature(class USpecialViewItem_C* Select);
	void ExecuteUbergraph_SpecialViewItem(int32 EntryPoint);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnEntryReleased();
	void UpdateText();
	void SetData(const struct FOwnItemInfo& Param_ItemData);
	void GetData(struct FOwnItemInfo* Param_ItemData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SpecialViewItem_C">();
	}
	static class USpecialViewItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpecialViewItem_C>();
	}
};
static_assert(alignof(USpecialViewItem_C) == 0x000008, "Wrong alignment on USpecialViewItem_C");
static_assert(sizeof(USpecialViewItem_C) == 0x0003F0, "Wrong size on USpecialViewItem_C");
static_assert(offsetof(USpecialViewItem_C, UberGraphFrame) == 0x000278, "Member 'USpecialViewItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USpecialViewItem_C, CvList) == 0x000280, "Member 'USpecialViewItem_C::CvList' has a wrong offset!");
static_assert(offsetof(USpecialViewItem_C, Image_230) == 0x000288, "Member 'USpecialViewItem_C::Image_230' has a wrong offset!");
static_assert(offsetof(USpecialViewItem_C, Img_Select) == 0x000290, "Member 'USpecialViewItem_C::Img_Select' has a wrong offset!");
static_assert(offsetof(USpecialViewItem_C, Txt_Imagine) == 0x000298, "Member 'USpecialViewItem_C::Txt_Imagine' has a wrong offset!");
static_assert(offsetof(USpecialViewItem_C, Txt_PerkName) == 0x0002A0, "Member 'USpecialViewItem_C::Txt_PerkName' has a wrong offset!");
static_assert(offsetof(USpecialViewItem_C, Txt_PerkValue) == 0x0002A8, "Member 'USpecialViewItem_C::Txt_PerkValue' has a wrong offset!");
static_assert(offsetof(USpecialViewItem_C, Txt_Weapon) == 0x0002B0, "Member 'USpecialViewItem_C::Txt_Weapon' has a wrong offset!");
static_assert(offsetof(USpecialViewItem_C, WS_TextHead) == 0x0002B8, "Member 'USpecialViewItem_C::WS_TextHead' has a wrong offset!");
static_assert(offsetof(USpecialViewItem_C, ItemData) == 0x0002C0, "Member 'USpecialViewItem_C::ItemData' has a wrong offset!");
static_assert(offsetof(USpecialViewItem_C, OnSelect) == 0x0003D8, "Member 'USpecialViewItem_C::OnSelect' has a wrong offset!");
static_assert(offsetof(USpecialViewItem_C, bDisableMouseOver) == 0x0003E8, "Member 'USpecialViewItem_C::bDisableMouseOver' has a wrong offset!");

}


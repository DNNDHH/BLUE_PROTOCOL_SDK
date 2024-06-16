#pragma once

 

// Package: FusionitemListItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FusionitemListItem.FusionitemListItem_C
// 0x0178 (0x03F0 - 0x0278)
class UFusionitemListItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Btn_Select;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonIcon_C*                          CommonIcon;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CvsShort;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_561;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_selected;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Name;                                          // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_StackNum;                                      // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_UseSlot;                                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FOwnItemInfo                           ItemData;                                          // 0x02C0(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x03D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         EmptySlot;                                         // 0x03E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClicked__DelegateSignature(const struct FOwnItemInfo& OwnItem, class UFusionitemListItem_C* OnSelected);
	void ExecuteUbergraph_FusionitemListItem(int32 EntryPoint);
	void BndEvt__FusionitemListItem_Btn_Select_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Set_Data(const struct FOwnItemInfo& Param_ItemData);
	void ApplyData();
	void SetSelected(bool bIsSelected);
	void SetEmptySlot(int32 Param_EmptySlot);

	void GetItemData(struct FOwnItemInfo* Param_ItemData) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FusionitemListItem_C">();
	}
	static class UFusionitemListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFusionitemListItem_C>();
	}
};
static_assert(alignof(UFusionitemListItem_C) == 0x000008, "Wrong alignment on UFusionitemListItem_C");
static_assert(sizeof(UFusionitemListItem_C) == 0x0003F0, "Wrong size on UFusionitemListItem_C");
static_assert(offsetof(UFusionitemListItem_C, UberGraphFrame) == 0x000278, "Member 'UFusionitemListItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFusionitemListItem_C, Btn_Select) == 0x000280, "Member 'UFusionitemListItem_C::Btn_Select' has a wrong offset!");
static_assert(offsetof(UFusionitemListItem_C, CommonIcon) == 0x000288, "Member 'UFusionitemListItem_C::CommonIcon' has a wrong offset!");
static_assert(offsetof(UFusionitemListItem_C, CvsShort) == 0x000290, "Member 'UFusionitemListItem_C::CvsShort' has a wrong offset!");
static_assert(offsetof(UFusionitemListItem_C, Image_561) == 0x000298, "Member 'UFusionitemListItem_C::Image_561' has a wrong offset!");
static_assert(offsetof(UFusionitemListItem_C, Img_selected) == 0x0002A0, "Member 'UFusionitemListItem_C::Img_selected' has a wrong offset!");
static_assert(offsetof(UFusionitemListItem_C, Txt_Name) == 0x0002A8, "Member 'UFusionitemListItem_C::Txt_Name' has a wrong offset!");
static_assert(offsetof(UFusionitemListItem_C, Txt_StackNum) == 0x0002B0, "Member 'UFusionitemListItem_C::Txt_StackNum' has a wrong offset!");
static_assert(offsetof(UFusionitemListItem_C, Txt_UseSlot) == 0x0002B8, "Member 'UFusionitemListItem_C::Txt_UseSlot' has a wrong offset!");
static_assert(offsetof(UFusionitemListItem_C, ItemData) == 0x0002C0, "Member 'UFusionitemListItem_C::ItemData' has a wrong offset!");
static_assert(offsetof(UFusionitemListItem_C, OnClicked) == 0x0003D8, "Member 'UFusionitemListItem_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UFusionitemListItem_C, EmptySlot) == 0x0003E8, "Member 'UFusionitemListItem_C::EmptySlot' has a wrong offset!");

}


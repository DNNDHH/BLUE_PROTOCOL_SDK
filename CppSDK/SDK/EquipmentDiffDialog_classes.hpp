#pragma once

 

// Package: EquipmentDiffDialog

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EquipmentDiffDialog.EquipmentDiffDialog_C
// 0x00B0 (0x0328 - 0x0278)
class UEquipmentDiffDialog_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       InAnim;                                            // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  Btn_Back;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose02_C*                          CmnClose02;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_LeftSlotNums;                                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonEquipmentStatusDescWithImageView_C* DescLeft;                                          // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonEquipmentStatusDescWithImageView_C* DescRight;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HB_LeftSlotNums;                                   // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HB_RightSlotNums;                                  // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_185;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_320;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWeaponAbilityInfoSlotList_C*     PerkLeft;                                          // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWeaponAbilityInfoSlotList_C*     PerkRight;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_LeftSlotMax;                                   // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_LeftSlotMin;                                   // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_RightSlotMax;                                  // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_RightSlotMin;                                  // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 VLine01;                                           // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 VLine01_1;                                         // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Anim;                                              // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnClose__DelegateSignature();
	void ExecuteUbergraph_EquipmentDiffDialog(int32 EntryPoint);
	void WidgetAnimationEvt_InAnim_K2Node_WidgetAnimationEvent_0();
	void Destruct();
	void OnPressCancel();
	void BndEvt__EquipmentDiffDialog_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature();
	void Close();
	void BndEvt__EquipmentDiffDialog_Btn_Back_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void SetRecepi(bool IsImagine, bool Left, int32 RecepiId);
	void Set_Own_Item(bool Left, const struct FOwnItemInfo& OwnItem);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EquipmentDiffDialog_C">();
	}
	static class UEquipmentDiffDialog_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEquipmentDiffDialog_C>();
	}
};
static_assert(alignof(UEquipmentDiffDialog_C) == 0x000008, "Wrong alignment on UEquipmentDiffDialog_C");
static_assert(sizeof(UEquipmentDiffDialog_C) == 0x000328, "Wrong size on UEquipmentDiffDialog_C");
static_assert(offsetof(UEquipmentDiffDialog_C, UberGraphFrame) == 0x000278, "Member 'UEquipmentDiffDialog_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEquipmentDiffDialog_C, InAnim) == 0x000280, "Member 'UEquipmentDiffDialog_C::InAnim' has a wrong offset!");
static_assert(offsetof(UEquipmentDiffDialog_C, Btn_Back) == 0x000288, "Member 'UEquipmentDiffDialog_C::Btn_Back' has a wrong offset!");
static_assert(offsetof(UEquipmentDiffDialog_C, CmnClose02) == 0x000290, "Member 'UEquipmentDiffDialog_C::CmnClose02' has a wrong offset!");
static_assert(offsetof(UEquipmentDiffDialog_C, Cvs_LeftSlotNums) == 0x000298, "Member 'UEquipmentDiffDialog_C::Cvs_LeftSlotNums' has a wrong offset!");
static_assert(offsetof(UEquipmentDiffDialog_C, DescLeft) == 0x0002A0, "Member 'UEquipmentDiffDialog_C::DescLeft' has a wrong offset!");
static_assert(offsetof(UEquipmentDiffDialog_C, DescRight) == 0x0002A8, "Member 'UEquipmentDiffDialog_C::DescRight' has a wrong offset!");
static_assert(offsetof(UEquipmentDiffDialog_C, HB_LeftSlotNums) == 0x0002B0, "Member 'UEquipmentDiffDialog_C::HB_LeftSlotNums' has a wrong offset!");
static_assert(offsetof(UEquipmentDiffDialog_C, HB_RightSlotNums) == 0x0002B8, "Member 'UEquipmentDiffDialog_C::HB_RightSlotNums' has a wrong offset!");
static_assert(offsetof(UEquipmentDiffDialog_C, Image_185) == 0x0002C0, "Member 'UEquipmentDiffDialog_C::Image_185' has a wrong offset!");
static_assert(offsetof(UEquipmentDiffDialog_C, Image_320) == 0x0002C8, "Member 'UEquipmentDiffDialog_C::Image_320' has a wrong offset!");
static_assert(offsetof(UEquipmentDiffDialog_C, PerkLeft) == 0x0002D0, "Member 'UEquipmentDiffDialog_C::PerkLeft' has a wrong offset!");
static_assert(offsetof(UEquipmentDiffDialog_C, PerkRight) == 0x0002D8, "Member 'UEquipmentDiffDialog_C::PerkRight' has a wrong offset!");
static_assert(offsetof(UEquipmentDiffDialog_C, Txt_LeftSlotMax) == 0x0002E0, "Member 'UEquipmentDiffDialog_C::Txt_LeftSlotMax' has a wrong offset!");
static_assert(offsetof(UEquipmentDiffDialog_C, Txt_LeftSlotMin) == 0x0002E8, "Member 'UEquipmentDiffDialog_C::Txt_LeftSlotMin' has a wrong offset!");
static_assert(offsetof(UEquipmentDiffDialog_C, Txt_RightSlotMax) == 0x0002F0, "Member 'UEquipmentDiffDialog_C::Txt_RightSlotMax' has a wrong offset!");
static_assert(offsetof(UEquipmentDiffDialog_C, Txt_RightSlotMin) == 0x0002F8, "Member 'UEquipmentDiffDialog_C::Txt_RightSlotMin' has a wrong offset!");
static_assert(offsetof(UEquipmentDiffDialog_C, VLine01) == 0x000300, "Member 'UEquipmentDiffDialog_C::VLine01' has a wrong offset!");
static_assert(offsetof(UEquipmentDiffDialog_C, VLine01_1) == 0x000308, "Member 'UEquipmentDiffDialog_C::VLine01_1' has a wrong offset!");
static_assert(offsetof(UEquipmentDiffDialog_C, OnClose) == 0x000310, "Member 'UEquipmentDiffDialog_C::OnClose' has a wrong offset!");
static_assert(offsetof(UEquipmentDiffDialog_C, Anim) == 0x000320, "Member 'UEquipmentDiffDialog_C::Anim' has a wrong offset!");

}


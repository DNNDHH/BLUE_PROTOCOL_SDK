#pragma once

 

// Package: WeaponSelect

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WeaponSelect.WeaponSelect_C
// 0x01F0 (0x0468 - 0x0278)
class UWeaponSelect_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OutAnim;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       BtnAnim;                                           // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       InAnim;                                            // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USBButton_C*                            Btn_Selected;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBonusLarge_C*                       CmnBonusLarge;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose03_C*                          CmnClose03;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonEquipment2DImageParts_C*         CommonEquipment2DImageParts;                       // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWeaponAbilityInfoSlotList_C*     CommonWeaponAbilityInfoSlotList;                   // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_BeginSelect;                                   // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_WeaponDescription;                             // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_164;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_326;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_415;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_454;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1009;                                        // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2758;                                        // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USelectGrid_C*                          SelectGrid;                                        // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStackBEquipItemDesc_C*                 StackBEquipItemDesc;                               // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_BtnSelect;                                     // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StackB_L_C*                        WBP_StackB_L;                                      // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_SelectVisual;                                   // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FOwnItemInfo                           SelecedOwnWeapon;                                  // 0x0328(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             WeaponSelectApply;                                 // 0x0440(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x0450(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UBP_Dialog_C*                           YnDialog;                                          // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void WeaponSelectApply__DelegateSignature(const struct FOwnItemInfo& ItemInfo);
	void OnClose__DelegateSignature();
	void ExecuteUbergraph_WeaponSelect(int32 EntryPoint);
	void Cancel();
	void BndEvt__WeaponSelect_CmnClose03_K2Node_ComponentBoundEvent_5_OnClosed__DelegateSignature();
	void Construct();
	void End(EDialogResult Result);
	void WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_1();
	void BndEvt__WeaponSelect_Btn_Selected_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WeaponSelect_Btn_Selected_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void RequestClose();
	void BndEvt__WeaponSelect_Btn_Selected_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void Destruct();
	void BndEvt__WeaponSelect_SelectGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature(const struct FOwnItemInfo& SelectItem);
	void Initialize();
	void Terminate();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WeaponSelect_C">();
	}
	static class UWeaponSelect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeaponSelect_C>();
	}
};
static_assert(alignof(UWeaponSelect_C) == 0x000008, "Wrong alignment on UWeaponSelect_C");
static_assert(sizeof(UWeaponSelect_C) == 0x000468, "Wrong size on UWeaponSelect_C");
static_assert(offsetof(UWeaponSelect_C, UberGraphFrame) == 0x000278, "Member 'UWeaponSelect_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWeaponSelect_C, OutAnim) == 0x000280, "Member 'UWeaponSelect_C::OutAnim' has a wrong offset!");
static_assert(offsetof(UWeaponSelect_C, BtnAnim) == 0x000288, "Member 'UWeaponSelect_C::BtnAnim' has a wrong offset!");
static_assert(offsetof(UWeaponSelect_C, InAnim) == 0x000290, "Member 'UWeaponSelect_C::InAnim' has a wrong offset!");
static_assert(offsetof(UWeaponSelect_C, Btn_Selected) == 0x000298, "Member 'UWeaponSelect_C::Btn_Selected' has a wrong offset!");
static_assert(offsetof(UWeaponSelect_C, CmnBonusLarge) == 0x0002A0, "Member 'UWeaponSelect_C::CmnBonusLarge' has a wrong offset!");
static_assert(offsetof(UWeaponSelect_C, CmnClose03) == 0x0002A8, "Member 'UWeaponSelect_C::CmnClose03' has a wrong offset!");
static_assert(offsetof(UWeaponSelect_C, CommonEquipment2DImageParts) == 0x0002B0, "Member 'UWeaponSelect_C::CommonEquipment2DImageParts' has a wrong offset!");
static_assert(offsetof(UWeaponSelect_C, CommonWeaponAbilityInfoSlotList) == 0x0002B8, "Member 'UWeaponSelect_C::CommonWeaponAbilityInfoSlotList' has a wrong offset!");
static_assert(offsetof(UWeaponSelect_C, Cvs_BeginSelect) == 0x0002C0, "Member 'UWeaponSelect_C::Cvs_BeginSelect' has a wrong offset!");
static_assert(offsetof(UWeaponSelect_C, Cvs_WeaponDescription) == 0x0002C8, "Member 'UWeaponSelect_C::Cvs_WeaponDescription' has a wrong offset!");
static_assert(offsetof(UWeaponSelect_C, Image_164) == 0x0002D0, "Member 'UWeaponSelect_C::Image_164' has a wrong offset!");
static_assert(offsetof(UWeaponSelect_C, Image_326) == 0x0002D8, "Member 'UWeaponSelect_C::Image_326' has a wrong offset!");
static_assert(offsetof(UWeaponSelect_C, Image_415) == 0x0002E0, "Member 'UWeaponSelect_C::Image_415' has a wrong offset!");
static_assert(offsetof(UWeaponSelect_C, Image_454) == 0x0002E8, "Member 'UWeaponSelect_C::Image_454' has a wrong offset!");
static_assert(offsetof(UWeaponSelect_C, Image_1009) == 0x0002F0, "Member 'UWeaponSelect_C::Image_1009' has a wrong offset!");
static_assert(offsetof(UWeaponSelect_C, Image_2758) == 0x0002F8, "Member 'UWeaponSelect_C::Image_2758' has a wrong offset!");
static_assert(offsetof(UWeaponSelect_C, SelectGrid) == 0x000300, "Member 'UWeaponSelect_C::SelectGrid' has a wrong offset!");
static_assert(offsetof(UWeaponSelect_C, StackBEquipItemDesc) == 0x000308, "Member 'UWeaponSelect_C::StackBEquipItemDesc' has a wrong offset!");
static_assert(offsetof(UWeaponSelect_C, Txt_BtnSelect) == 0x000310, "Member 'UWeaponSelect_C::Txt_BtnSelect' has a wrong offset!");
static_assert(offsetof(UWeaponSelect_C, WBP_StackB_L) == 0x000318, "Member 'UWeaponSelect_C::WBP_StackB_L' has a wrong offset!");
static_assert(offsetof(UWeaponSelect_C, WS_SelectVisual) == 0x000320, "Member 'UWeaponSelect_C::WS_SelectVisual' has a wrong offset!");
static_assert(offsetof(UWeaponSelect_C, SelecedOwnWeapon) == 0x000328, "Member 'UWeaponSelect_C::SelecedOwnWeapon' has a wrong offset!");
static_assert(offsetof(UWeaponSelect_C, WeaponSelectApply) == 0x000440, "Member 'UWeaponSelect_C::WeaponSelectApply' has a wrong offset!");
static_assert(offsetof(UWeaponSelect_C, OnClose) == 0x000450, "Member 'UWeaponSelect_C::OnClose' has a wrong offset!");
static_assert(offsetof(UWeaponSelect_C, YnDialog) == 0x000460, "Member 'UWeaponSelect_C::YnDialog' has a wrong offset!");

}


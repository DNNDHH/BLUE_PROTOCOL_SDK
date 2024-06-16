#pragma once

 

// Package: ImagineSelect

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Filter_Type_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ImagineSelect.ImagineSelect_C
// 0x01F0 (0x0468 - 0x0278)
class UImagineSelect_C final : public UUserWidget
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
	class UCanvasPanel*                           Cvs_BeginSelect;                                   // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_TargetDescription;                             // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_326;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_415;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_454;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2758;                                        // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImagineTypeView_C*                     ImagineTypeView;                                   // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USelectGrid_C*                          SelectGrid;                                        // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStackBEquipItemDesc_C*                 StackBEquipItemDesc;                               // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_BtnSelect;                                     // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StackB_L_C*                        WBP_StackB_L;                                      // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_SelectVisual;                                   // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FOwnItemInfo                           SelecedOwnImagine;                                 // 0x0318(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             ImagineSelectApply;                                // 0x0430(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x0440(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	ESBImagineCategoryType                        ImagineType;                                       // 0x0450(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_4052[0x7];                                     // 0x0451(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_RewardBoostTooltip_C*              RewardBoostTooltip;                                // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Dialog_C*                           YnDialog;                                          // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ImagineSelectApply__DelegateSignature(const struct FOwnItemInfo& ItemInfo);
	void OnClose__DelegateSignature();
	void ExecuteUbergraph_ImagineSelect(int32 EntryPoint);
	void BndEvt__ImagineSelect_CmnClose03_K2Node_ComponentBoundEvent_5_OnClosed__DelegateSignature();
	void Construct();
	void BndEvt__WeaponSelect_SelectGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature(const struct FOwnItemInfo& SelectItem);
	void End(EDialogResult Result);
	void WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_1();
	void BndEvt__ImagineSelect_Btn_Selected_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ImagineSelect_Btn_Selected_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void RequestClose();
	void BndEvt__WeaponSelect_Btn_Selected_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void Destruct();
	void Initialize();
	void Terminate();
	void ApplyImagineType(const struct FOwnItemInfo& ItemData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ImagineSelect_C">();
	}
	static class UImagineSelect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UImagineSelect_C>();
	}
};
static_assert(alignof(UImagineSelect_C) == 0x000008, "Wrong alignment on UImagineSelect_C");
static_assert(sizeof(UImagineSelect_C) == 0x000468, "Wrong size on UImagineSelect_C");
static_assert(offsetof(UImagineSelect_C, UberGraphFrame) == 0x000278, "Member 'UImagineSelect_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UImagineSelect_C, OutAnim) == 0x000280, "Member 'UImagineSelect_C::OutAnim' has a wrong offset!");
static_assert(offsetof(UImagineSelect_C, BtnAnim) == 0x000288, "Member 'UImagineSelect_C::BtnAnim' has a wrong offset!");
static_assert(offsetof(UImagineSelect_C, InAnim) == 0x000290, "Member 'UImagineSelect_C::InAnim' has a wrong offset!");
static_assert(offsetof(UImagineSelect_C, Btn_Selected) == 0x000298, "Member 'UImagineSelect_C::Btn_Selected' has a wrong offset!");
static_assert(offsetof(UImagineSelect_C, CmnBonusLarge) == 0x0002A0, "Member 'UImagineSelect_C::CmnBonusLarge' has a wrong offset!");
static_assert(offsetof(UImagineSelect_C, CmnClose03) == 0x0002A8, "Member 'UImagineSelect_C::CmnClose03' has a wrong offset!");
static_assert(offsetof(UImagineSelect_C, CommonEquipment2DImageParts) == 0x0002B0, "Member 'UImagineSelect_C::CommonEquipment2DImageParts' has a wrong offset!");
static_assert(offsetof(UImagineSelect_C, Cvs_BeginSelect) == 0x0002B8, "Member 'UImagineSelect_C::Cvs_BeginSelect' has a wrong offset!");
static_assert(offsetof(UImagineSelect_C, Cvs_TargetDescription) == 0x0002C0, "Member 'UImagineSelect_C::Cvs_TargetDescription' has a wrong offset!");
static_assert(offsetof(UImagineSelect_C, Image_326) == 0x0002C8, "Member 'UImagineSelect_C::Image_326' has a wrong offset!");
static_assert(offsetof(UImagineSelect_C, Image_415) == 0x0002D0, "Member 'UImagineSelect_C::Image_415' has a wrong offset!");
static_assert(offsetof(UImagineSelect_C, Image_454) == 0x0002D8, "Member 'UImagineSelect_C::Image_454' has a wrong offset!");
static_assert(offsetof(UImagineSelect_C, Image_2758) == 0x0002E0, "Member 'UImagineSelect_C::Image_2758' has a wrong offset!");
static_assert(offsetof(UImagineSelect_C, ImagineTypeView) == 0x0002E8, "Member 'UImagineSelect_C::ImagineTypeView' has a wrong offset!");
static_assert(offsetof(UImagineSelect_C, SelectGrid) == 0x0002F0, "Member 'UImagineSelect_C::SelectGrid' has a wrong offset!");
static_assert(offsetof(UImagineSelect_C, StackBEquipItemDesc) == 0x0002F8, "Member 'UImagineSelect_C::StackBEquipItemDesc' has a wrong offset!");
static_assert(offsetof(UImagineSelect_C, Txt_BtnSelect) == 0x000300, "Member 'UImagineSelect_C::Txt_BtnSelect' has a wrong offset!");
static_assert(offsetof(UImagineSelect_C, WBP_StackB_L) == 0x000308, "Member 'UImagineSelect_C::WBP_StackB_L' has a wrong offset!");
static_assert(offsetof(UImagineSelect_C, WS_SelectVisual) == 0x000310, "Member 'UImagineSelect_C::WS_SelectVisual' has a wrong offset!");
static_assert(offsetof(UImagineSelect_C, SelecedOwnImagine) == 0x000318, "Member 'UImagineSelect_C::SelecedOwnImagine' has a wrong offset!");
static_assert(offsetof(UImagineSelect_C, ImagineSelectApply) == 0x000430, "Member 'UImagineSelect_C::ImagineSelectApply' has a wrong offset!");
static_assert(offsetof(UImagineSelect_C, OnClose) == 0x000440, "Member 'UImagineSelect_C::OnClose' has a wrong offset!");
static_assert(offsetof(UImagineSelect_C, ImagineType) == 0x000450, "Member 'UImagineSelect_C::ImagineType' has a wrong offset!");
static_assert(offsetof(UImagineSelect_C, RewardBoostTooltip) == 0x000458, "Member 'UImagineSelect_C::RewardBoostTooltip' has a wrong offset!");
static_assert(offsetof(UImagineSelect_C, YnDialog) == 0x000460, "Member 'UImagineSelect_C::YnDialog' has a wrong offset!");

}


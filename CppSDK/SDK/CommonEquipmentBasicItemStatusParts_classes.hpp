#pragma once

 

// Package: CommonEquipmentBasicItemStatusParts

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommonEquipmentBasicItemStatusParts.CommonEquipmentBasicItemStatusParts_C
// 0x01D0 (0x0448 - 0x0278)
class UCommonEquipmentBasicItemStatusParts_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCmnBtn16_C*                            Btn_RateDisplay;                                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_CraftNum;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_Header;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HB_TimeOut;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HLine01;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HLine02;                                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HLine03;                                           // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HLine04;                                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HLine05;                                           // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    IntervalTitleTxt;                                  // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    LevelTitleTxt;                                     // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RetainerBox_Interval;                              // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RetainerBox_Lv;                                    // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTimeLimitIcon_C*                       TimeLimitIcon;                                     // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_Category;                                      // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_CraftNumMax;                                   // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_CraftNumMin;                                   // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Effect;                                        // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBDateTimeTextBlock*                   Txt_EndDate;                                       // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_Flavor;                                        // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Interval;                                      // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Lv;                                            // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_RemainBase;                                    // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 VLine04;                                           // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 VLine04_1;                                         // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 VLine05;                                           // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FItemMasterData                        MasterItem;                                        // 0x0350(0x00D0)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             Request_ShowRate;                                  // 0x0420(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                 EventTermId;                                       // 0x0430(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         RecepiId;                                          // 0x0440(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Request_ShowRate__DelegateSignature();
	void ExecuteUbergraph_CommonEquipmentBasicItemStatusParts(int32 EntryPoint);
	void BndEvt__ItemDescription_Btn_RateDisplay_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
	void Set_ItemData(const struct FItemMasterData& Param_MasterItem);
	void SetShowRateButton(bool bVisible);
	void SetCraftNumVisible(bool Param_Visibility, int32 CraftNumMin, int32 CraftNumMax);
	void SetEventTermId(const class FString& Param_EventTermId);
	void SetRecepiId(int32 Param_RecepiId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonEquipmentBasicItemStatusParts_C">();
	}
	static class UCommonEquipmentBasicItemStatusParts_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonEquipmentBasicItemStatusParts_C>();
	}
};
static_assert(alignof(UCommonEquipmentBasicItemStatusParts_C) == 0x000008, "Wrong alignment on UCommonEquipmentBasicItemStatusParts_C");
static_assert(sizeof(UCommonEquipmentBasicItemStatusParts_C) == 0x000448, "Wrong size on UCommonEquipmentBasicItemStatusParts_C");
static_assert(offsetof(UCommonEquipmentBasicItemStatusParts_C, UberGraphFrame) == 0x000278, "Member 'UCommonEquipmentBasicItemStatusParts_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicItemStatusParts_C, Btn_RateDisplay) == 0x000280, "Member 'UCommonEquipmentBasicItemStatusParts_C::Btn_RateDisplay' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicItemStatusParts_C, Cvs_CraftNum) == 0x000288, "Member 'UCommonEquipmentBasicItemStatusParts_C::Cvs_CraftNum' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicItemStatusParts_C, Cvs_Header) == 0x000290, "Member 'UCommonEquipmentBasicItemStatusParts_C::Cvs_Header' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicItemStatusParts_C, HB_TimeOut) == 0x000298, "Member 'UCommonEquipmentBasicItemStatusParts_C::HB_TimeOut' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicItemStatusParts_C, HLine01) == 0x0002A0, "Member 'UCommonEquipmentBasicItemStatusParts_C::HLine01' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicItemStatusParts_C, HLine02) == 0x0002A8, "Member 'UCommonEquipmentBasicItemStatusParts_C::HLine02' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicItemStatusParts_C, HLine03) == 0x0002B0, "Member 'UCommonEquipmentBasicItemStatusParts_C::HLine03' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicItemStatusParts_C, HLine04) == 0x0002B8, "Member 'UCommonEquipmentBasicItemStatusParts_C::HLine04' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicItemStatusParts_C, HLine05) == 0x0002C0, "Member 'UCommonEquipmentBasicItemStatusParts_C::HLine05' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicItemStatusParts_C, IntervalTitleTxt) == 0x0002C8, "Member 'UCommonEquipmentBasicItemStatusParts_C::IntervalTitleTxt' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicItemStatusParts_C, LevelTitleTxt) == 0x0002D0, "Member 'UCommonEquipmentBasicItemStatusParts_C::LevelTitleTxt' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicItemStatusParts_C, RetainerBox_Interval) == 0x0002D8, "Member 'UCommonEquipmentBasicItemStatusParts_C::RetainerBox_Interval' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicItemStatusParts_C, RetainerBox_Lv) == 0x0002E0, "Member 'UCommonEquipmentBasicItemStatusParts_C::RetainerBox_Lv' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicItemStatusParts_C, TimeLimitIcon) == 0x0002E8, "Member 'UCommonEquipmentBasicItemStatusParts_C::TimeLimitIcon' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicItemStatusParts_C, Txt_Category) == 0x0002F0, "Member 'UCommonEquipmentBasicItemStatusParts_C::Txt_Category' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicItemStatusParts_C, Txt_CraftNumMax) == 0x0002F8, "Member 'UCommonEquipmentBasicItemStatusParts_C::Txt_CraftNumMax' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicItemStatusParts_C, Txt_CraftNumMin) == 0x000300, "Member 'UCommonEquipmentBasicItemStatusParts_C::Txt_CraftNumMin' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicItemStatusParts_C, Txt_Effect) == 0x000308, "Member 'UCommonEquipmentBasicItemStatusParts_C::Txt_Effect' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicItemStatusParts_C, Txt_EndDate) == 0x000310, "Member 'UCommonEquipmentBasicItemStatusParts_C::Txt_EndDate' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicItemStatusParts_C, Txt_Flavor) == 0x000318, "Member 'UCommonEquipmentBasicItemStatusParts_C::Txt_Flavor' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicItemStatusParts_C, Txt_Interval) == 0x000320, "Member 'UCommonEquipmentBasicItemStatusParts_C::Txt_Interval' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicItemStatusParts_C, Txt_Lv) == 0x000328, "Member 'UCommonEquipmentBasicItemStatusParts_C::Txt_Lv' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicItemStatusParts_C, Txt_RemainBase) == 0x000330, "Member 'UCommonEquipmentBasicItemStatusParts_C::Txt_RemainBase' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicItemStatusParts_C, VLine04) == 0x000338, "Member 'UCommonEquipmentBasicItemStatusParts_C::VLine04' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicItemStatusParts_C, VLine04_1) == 0x000340, "Member 'UCommonEquipmentBasicItemStatusParts_C::VLine04_1' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicItemStatusParts_C, VLine05) == 0x000348, "Member 'UCommonEquipmentBasicItemStatusParts_C::VLine05' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicItemStatusParts_C, MasterItem) == 0x000350, "Member 'UCommonEquipmentBasicItemStatusParts_C::MasterItem' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicItemStatusParts_C, Request_ShowRate) == 0x000420, "Member 'UCommonEquipmentBasicItemStatusParts_C::Request_ShowRate' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicItemStatusParts_C, EventTermId) == 0x000430, "Member 'UCommonEquipmentBasicItemStatusParts_C::EventTermId' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicItemStatusParts_C, RecepiId) == 0x000440, "Member 'UCommonEquipmentBasicItemStatusParts_C::RecepiId' has a wrong offset!");

}


#pragma once

 

// Package: WeaponSynthePart_WindowWeaponStatus

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WeaponCustomizerType_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WeaponSynthePart_WindowWeaponStatus.WeaponSynthePart_WindowWeaponStatus_C
// 0x00B0 (0x0328 - 0x0278)
class UWeaponSynthePart_WindowWeaponStatus_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       SizeLAnime;                                        // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UAttributeIcon_C*                       AttributeIcon;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBonusLarge_C*                       CmnBonus;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StackB_M_C*                        StackBIcon;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryTag_C*                        TagNotForStackB;                                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Attack;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Attack_1;                                      // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_AttributeValue;                                // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Dex;                                           // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Int;                                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Lv;                                            // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Mnd;                                           // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_SpecialName;                                   // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_SpecialValue;                                  // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_SpecialValueMark;                              // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Str;                                           // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Vit;                                           // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_WeaponName;                                    // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_CaptureStudio_C*                   UMG_CaptureStudio;                                 // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EWeaponCustomizerType                         DescHeadType;                                      // 0x0318(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_5CED[0x3];                                     // 0x0319(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         WeaponID;                                          // 0x031C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_RewardBoostTooltip_C*              RewardTooltip;                                     // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WeaponSynthePart_WindowWeaponStatus(int32 EntryPoint);
	void OnUpdateReardBoostInfo(class UObject* Sender, class UObject* Param);
	void Destruct();
	void Construct();
	void SetWeaponData(const struct FOwnItemInfo& WeaponData);
	void PlayAnim();
	void SetTextName(const struct FSBWeaponMasterData& SBWeaponMasterData);
	void SetTextLV(int32 Value);
	void SetTextSpecialName(class USBMasterDataManager* Manager, const struct FOwnItemInfo& OwnItemInfo);
	void SetTextParameter(ESBWeaponStatus Param_Index, int32 Value);
	void SetAttributeIcon(const struct FSBWeaponMasterData& SBWeaponMasterData);
	void UpdateBoostInfo();
	void SetStackB(const struct FOwnItemInfo& ItemInfo, bool IsEffectiveDisplay);
	void SetVisibleStackB(bool Param_IsVisible);
	void SetStackBTag(const struct FSBWeaponMasterData& WeaponMasterData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WeaponSynthePart_WindowWeaponStatus_C">();
	}
	static class UWeaponSynthePart_WindowWeaponStatus_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeaponSynthePart_WindowWeaponStatus_C>();
	}
};
static_assert(alignof(UWeaponSynthePart_WindowWeaponStatus_C) == 0x000008, "Wrong alignment on UWeaponSynthePart_WindowWeaponStatus_C");
static_assert(sizeof(UWeaponSynthePart_WindowWeaponStatus_C) == 0x000328, "Wrong size on UWeaponSynthePart_WindowWeaponStatus_C");
static_assert(offsetof(UWeaponSynthePart_WindowWeaponStatus_C, UberGraphFrame) == 0x000278, "Member 'UWeaponSynthePart_WindowWeaponStatus_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_WindowWeaponStatus_C, SizeLAnime) == 0x000280, "Member 'UWeaponSynthePart_WindowWeaponStatus_C::SizeLAnime' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_WindowWeaponStatus_C, AttributeIcon) == 0x000288, "Member 'UWeaponSynthePart_WindowWeaponStatus_C::AttributeIcon' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_WindowWeaponStatus_C, CmnBonus) == 0x000290, "Member 'UWeaponSynthePart_WindowWeaponStatus_C::CmnBonus' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_WindowWeaponStatus_C, StackBIcon) == 0x000298, "Member 'UWeaponSynthePart_WindowWeaponStatus_C::StackBIcon' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_WindowWeaponStatus_C, TagNotForStackB) == 0x0002A0, "Member 'UWeaponSynthePart_WindowWeaponStatus_C::TagNotForStackB' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_WindowWeaponStatus_C, Txt_Attack) == 0x0002A8, "Member 'UWeaponSynthePart_WindowWeaponStatus_C::Txt_Attack' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_WindowWeaponStatus_C, Txt_Attack_1) == 0x0002B0, "Member 'UWeaponSynthePart_WindowWeaponStatus_C::Txt_Attack_1' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_WindowWeaponStatus_C, Txt_AttributeValue) == 0x0002B8, "Member 'UWeaponSynthePart_WindowWeaponStatus_C::Txt_AttributeValue' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_WindowWeaponStatus_C, Txt_Dex) == 0x0002C0, "Member 'UWeaponSynthePart_WindowWeaponStatus_C::Txt_Dex' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_WindowWeaponStatus_C, Txt_Int) == 0x0002C8, "Member 'UWeaponSynthePart_WindowWeaponStatus_C::Txt_Int' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_WindowWeaponStatus_C, Txt_Lv) == 0x0002D0, "Member 'UWeaponSynthePart_WindowWeaponStatus_C::Txt_Lv' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_WindowWeaponStatus_C, Txt_Mnd) == 0x0002D8, "Member 'UWeaponSynthePart_WindowWeaponStatus_C::Txt_Mnd' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_WindowWeaponStatus_C, Txt_SpecialName) == 0x0002E0, "Member 'UWeaponSynthePart_WindowWeaponStatus_C::Txt_SpecialName' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_WindowWeaponStatus_C, Txt_SpecialValue) == 0x0002E8, "Member 'UWeaponSynthePart_WindowWeaponStatus_C::Txt_SpecialValue' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_WindowWeaponStatus_C, Txt_SpecialValueMark) == 0x0002F0, "Member 'UWeaponSynthePart_WindowWeaponStatus_C::Txt_SpecialValueMark' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_WindowWeaponStatus_C, Txt_Str) == 0x0002F8, "Member 'UWeaponSynthePart_WindowWeaponStatus_C::Txt_Str' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_WindowWeaponStatus_C, Txt_Vit) == 0x000300, "Member 'UWeaponSynthePart_WindowWeaponStatus_C::Txt_Vit' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_WindowWeaponStatus_C, Txt_WeaponName) == 0x000308, "Member 'UWeaponSynthePart_WindowWeaponStatus_C::Txt_WeaponName' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_WindowWeaponStatus_C, UMG_CaptureStudio) == 0x000310, "Member 'UWeaponSynthePart_WindowWeaponStatus_C::UMG_CaptureStudio' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_WindowWeaponStatus_C, DescHeadType) == 0x000318, "Member 'UWeaponSynthePart_WindowWeaponStatus_C::DescHeadType' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_WindowWeaponStatus_C, WeaponID) == 0x00031C, "Member 'UWeaponSynthePart_WindowWeaponStatus_C::WeaponID' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_WindowWeaponStatus_C, RewardTooltip) == 0x000320, "Member 'UWeaponSynthePart_WindowWeaponStatus_C::RewardTooltip' has a wrong offset!");

}


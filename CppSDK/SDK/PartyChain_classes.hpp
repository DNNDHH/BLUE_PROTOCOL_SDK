#pragma once

 

// Package: PartyChain

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PartyChain.PartyChain_C
// 0x00E8 (0x03C0 - 0x02D8)
class UPartyChain_C final : public USBPartyChainWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       BuffAnimation;                                     // 0x02E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           BP_ChainActiveGrp;                                 // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           BP_ChainCooldownGrp;                               // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           BP_ChainOutofRangeGrp;                             // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             BP_ComboText;                                      // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             BP_CooldownTimeText;                               // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             BP_CooldownTimeText_1;                             // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             BP_DamegeRateText;                                 // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        BP_WidgetSwitcher;                                 // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CircleGauge;                                       // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CircleGaugeBg;                                     // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CooldownBgImage;                                   // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CooldownGauge;                                     // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Cur;                                               // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Gauge;                                             // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LineImage3;                                        // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LineImage3_1;                                      // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 OutofRangeBgImage;                                 // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     BP_PlayerCharacter;                                // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               BP_ComboGaugeMat;                                  // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               BP_CooldownGaugeMat;                               // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBPartyChainBonusStatusSetting> BP_BonusStatusSettingList;                         // 0x03A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         BP_BonusIndex;                                     // 0x03B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BP_ComboCount;                                     // 0x03B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BP_IsComboCountUp;                                 // 0x03B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_PartyChain(int32 EntryPoint);
	void OnPlayBonusEffect();
	void SetEditMode();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PartyChain_C">();
	}
	static class UPartyChain_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPartyChain_C>();
	}
};
static_assert(alignof(UPartyChain_C) == 0x000008, "Wrong alignment on UPartyChain_C");
static_assert(sizeof(UPartyChain_C) == 0x0003C0, "Wrong size on UPartyChain_C");
static_assert(offsetof(UPartyChain_C, UberGraphFrame) == 0x0002D8, "Member 'UPartyChain_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPartyChain_C, BuffAnimation) == 0x0002E0, "Member 'UPartyChain_C::BuffAnimation' has a wrong offset!");
static_assert(offsetof(UPartyChain_C, BP_ChainActiveGrp) == 0x0002E8, "Member 'UPartyChain_C::BP_ChainActiveGrp' has a wrong offset!");
static_assert(offsetof(UPartyChain_C, BP_ChainCooldownGrp) == 0x0002F0, "Member 'UPartyChain_C::BP_ChainCooldownGrp' has a wrong offset!");
static_assert(offsetof(UPartyChain_C, BP_ChainOutofRangeGrp) == 0x0002F8, "Member 'UPartyChain_C::BP_ChainOutofRangeGrp' has a wrong offset!");
static_assert(offsetof(UPartyChain_C, BP_ComboText) == 0x000300, "Member 'UPartyChain_C::BP_ComboText' has a wrong offset!");
static_assert(offsetof(UPartyChain_C, BP_CooldownTimeText) == 0x000308, "Member 'UPartyChain_C::BP_CooldownTimeText' has a wrong offset!");
static_assert(offsetof(UPartyChain_C, BP_CooldownTimeText_1) == 0x000310, "Member 'UPartyChain_C::BP_CooldownTimeText_1' has a wrong offset!");
static_assert(offsetof(UPartyChain_C, BP_DamegeRateText) == 0x000318, "Member 'UPartyChain_C::BP_DamegeRateText' has a wrong offset!");
static_assert(offsetof(UPartyChain_C, BP_WidgetSwitcher) == 0x000320, "Member 'UPartyChain_C::BP_WidgetSwitcher' has a wrong offset!");
static_assert(offsetof(UPartyChain_C, CircleGauge) == 0x000328, "Member 'UPartyChain_C::CircleGauge' has a wrong offset!");
static_assert(offsetof(UPartyChain_C, CircleGaugeBg) == 0x000330, "Member 'UPartyChain_C::CircleGaugeBg' has a wrong offset!");
static_assert(offsetof(UPartyChain_C, CooldownBgImage) == 0x000338, "Member 'UPartyChain_C::CooldownBgImage' has a wrong offset!");
static_assert(offsetof(UPartyChain_C, CooldownGauge) == 0x000340, "Member 'UPartyChain_C::CooldownGauge' has a wrong offset!");
static_assert(offsetof(UPartyChain_C, Cur) == 0x000348, "Member 'UPartyChain_C::Cur' has a wrong offset!");
static_assert(offsetof(UPartyChain_C, Gauge) == 0x000350, "Member 'UPartyChain_C::Gauge' has a wrong offset!");
static_assert(offsetof(UPartyChain_C, Image) == 0x000358, "Member 'UPartyChain_C::Image' has a wrong offset!");
static_assert(offsetof(UPartyChain_C, Image_1) == 0x000360, "Member 'UPartyChain_C::Image_1' has a wrong offset!");
static_assert(offsetof(UPartyChain_C, Image_2) == 0x000368, "Member 'UPartyChain_C::Image_2' has a wrong offset!");
static_assert(offsetof(UPartyChain_C, LineImage3) == 0x000370, "Member 'UPartyChain_C::LineImage3' has a wrong offset!");
static_assert(offsetof(UPartyChain_C, LineImage3_1) == 0x000378, "Member 'UPartyChain_C::LineImage3_1' has a wrong offset!");
static_assert(offsetof(UPartyChain_C, OutofRangeBgImage) == 0x000380, "Member 'UPartyChain_C::OutofRangeBgImage' has a wrong offset!");
static_assert(offsetof(UPartyChain_C, BP_PlayerCharacter) == 0x000388, "Member 'UPartyChain_C::BP_PlayerCharacter' has a wrong offset!");
static_assert(offsetof(UPartyChain_C, BP_ComboGaugeMat) == 0x000390, "Member 'UPartyChain_C::BP_ComboGaugeMat' has a wrong offset!");
static_assert(offsetof(UPartyChain_C, BP_CooldownGaugeMat) == 0x000398, "Member 'UPartyChain_C::BP_CooldownGaugeMat' has a wrong offset!");
static_assert(offsetof(UPartyChain_C, BP_BonusStatusSettingList) == 0x0003A0, "Member 'UPartyChain_C::BP_BonusStatusSettingList' has a wrong offset!");
static_assert(offsetof(UPartyChain_C, BP_BonusIndex) == 0x0003B0, "Member 'UPartyChain_C::BP_BonusIndex' has a wrong offset!");
static_assert(offsetof(UPartyChain_C, BP_ComboCount) == 0x0003B4, "Member 'UPartyChain_C::BP_ComboCount' has a wrong offset!");
static_assert(offsetof(UPartyChain_C, BP_IsComboCountUp) == 0x0003B8, "Member 'UPartyChain_C::BP_IsComboCountUp' has a wrong offset!");

}


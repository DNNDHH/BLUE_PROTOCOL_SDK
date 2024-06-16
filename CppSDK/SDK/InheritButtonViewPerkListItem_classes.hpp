#pragma once

 

// Package: InheritButtonViewPerkListItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass InheritButtonViewPerkListItem.InheritButtonViewPerkListItem_C
// 0x00E8 (0x0360 - 0x0278)
class UInheritButtonViewPerkListItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonIcon_C*                          CommonIcon;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_4;                                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_5;                                           // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_6;                                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_7;                                           // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_8;                                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_881;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImgMarkUpgradeS1;                                  // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImgMarkUpgradeS2;                                  // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImgMarkUpgradeS3;                                  // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImgMarkUpgradeS4;                                  // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SB_Slot1;                                          // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SB_Slot2;                                          // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SB_Slot3;                                          // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SB_Slot4;                                          // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStackBPerkRarityView_C*                StackBPerkRarityView;                              // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Name;                                          // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_SlotSizer;                                      // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSBStackBPerk                          SlotData;                                          // 0x0330(0x0030)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void ExecuteUbergraph_InheritButtonViewPerkListItem(int32 EntryPoint);
	void Construct();
	void Initialize();
	void SetData(const struct FSBStackBPerk& Param_SlotData);
	void SetEmpty();
	void SetDiffView(bool bShow);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InheritButtonViewPerkListItem_C">();
	}
	static class UInheritButtonViewPerkListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInheritButtonViewPerkListItem_C>();
	}
};
static_assert(alignof(UInheritButtonViewPerkListItem_C) == 0x000008, "Wrong alignment on UInheritButtonViewPerkListItem_C");
static_assert(sizeof(UInheritButtonViewPerkListItem_C) == 0x000360, "Wrong size on UInheritButtonViewPerkListItem_C");
static_assert(offsetof(UInheritButtonViewPerkListItem_C, UberGraphFrame) == 0x000278, "Member 'UInheritButtonViewPerkListItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UInheritButtonViewPerkListItem_C, CommonIcon) == 0x000280, "Member 'UInheritButtonViewPerkListItem_C::CommonIcon' has a wrong offset!");
static_assert(offsetof(UInheritButtonViewPerkListItem_C, Image) == 0x000288, "Member 'UInheritButtonViewPerkListItem_C::Image' has a wrong offset!");
static_assert(offsetof(UInheritButtonViewPerkListItem_C, Image_1) == 0x000290, "Member 'UInheritButtonViewPerkListItem_C::Image_1' has a wrong offset!");
static_assert(offsetof(UInheritButtonViewPerkListItem_C, Image_2) == 0x000298, "Member 'UInheritButtonViewPerkListItem_C::Image_2' has a wrong offset!");
static_assert(offsetof(UInheritButtonViewPerkListItem_C, Image_3) == 0x0002A0, "Member 'UInheritButtonViewPerkListItem_C::Image_3' has a wrong offset!");
static_assert(offsetof(UInheritButtonViewPerkListItem_C, Image_4) == 0x0002A8, "Member 'UInheritButtonViewPerkListItem_C::Image_4' has a wrong offset!");
static_assert(offsetof(UInheritButtonViewPerkListItem_C, Image_5) == 0x0002B0, "Member 'UInheritButtonViewPerkListItem_C::Image_5' has a wrong offset!");
static_assert(offsetof(UInheritButtonViewPerkListItem_C, Image_6) == 0x0002B8, "Member 'UInheritButtonViewPerkListItem_C::Image_6' has a wrong offset!");
static_assert(offsetof(UInheritButtonViewPerkListItem_C, Image_7) == 0x0002C0, "Member 'UInheritButtonViewPerkListItem_C::Image_7' has a wrong offset!");
static_assert(offsetof(UInheritButtonViewPerkListItem_C, Image_8) == 0x0002C8, "Member 'UInheritButtonViewPerkListItem_C::Image_8' has a wrong offset!");
static_assert(offsetof(UInheritButtonViewPerkListItem_C, Image_881) == 0x0002D0, "Member 'UInheritButtonViewPerkListItem_C::Image_881' has a wrong offset!");
static_assert(offsetof(UInheritButtonViewPerkListItem_C, ImgMarkUpgradeS1) == 0x0002D8, "Member 'UInheritButtonViewPerkListItem_C::ImgMarkUpgradeS1' has a wrong offset!");
static_assert(offsetof(UInheritButtonViewPerkListItem_C, ImgMarkUpgradeS2) == 0x0002E0, "Member 'UInheritButtonViewPerkListItem_C::ImgMarkUpgradeS2' has a wrong offset!");
static_assert(offsetof(UInheritButtonViewPerkListItem_C, ImgMarkUpgradeS3) == 0x0002E8, "Member 'UInheritButtonViewPerkListItem_C::ImgMarkUpgradeS3' has a wrong offset!");
static_assert(offsetof(UInheritButtonViewPerkListItem_C, ImgMarkUpgradeS4) == 0x0002F0, "Member 'UInheritButtonViewPerkListItem_C::ImgMarkUpgradeS4' has a wrong offset!");
static_assert(offsetof(UInheritButtonViewPerkListItem_C, SB_Slot1) == 0x0002F8, "Member 'UInheritButtonViewPerkListItem_C::SB_Slot1' has a wrong offset!");
static_assert(offsetof(UInheritButtonViewPerkListItem_C, SB_Slot2) == 0x000300, "Member 'UInheritButtonViewPerkListItem_C::SB_Slot2' has a wrong offset!");
static_assert(offsetof(UInheritButtonViewPerkListItem_C, SB_Slot3) == 0x000308, "Member 'UInheritButtonViewPerkListItem_C::SB_Slot3' has a wrong offset!");
static_assert(offsetof(UInheritButtonViewPerkListItem_C, SB_Slot4) == 0x000310, "Member 'UInheritButtonViewPerkListItem_C::SB_Slot4' has a wrong offset!");
static_assert(offsetof(UInheritButtonViewPerkListItem_C, StackBPerkRarityView) == 0x000318, "Member 'UInheritButtonViewPerkListItem_C::StackBPerkRarityView' has a wrong offset!");
static_assert(offsetof(UInheritButtonViewPerkListItem_C, Txt_Name) == 0x000320, "Member 'UInheritButtonViewPerkListItem_C::Txt_Name' has a wrong offset!");
static_assert(offsetof(UInheritButtonViewPerkListItem_C, WS_SlotSizer) == 0x000328, "Member 'UInheritButtonViewPerkListItem_C::WS_SlotSizer' has a wrong offset!");
static_assert(offsetof(UInheritButtonViewPerkListItem_C, SlotData) == 0x000330, "Member 'UInheritButtonViewPerkListItem_C::SlotData' has a wrong offset!");

}


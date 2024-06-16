#pragma once

 

// Package: LibraryMenu_Monster_DropItem

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LibraryMenu_Monster_DropItem.LibraryMenu_Monster_DropItem_C
// 0x0058 (0x02D0 - 0x0278)
class ULibraryMenu_Monster_DropItem_C final : public UUserWidget
{
public:
	class UImage*                                 BG;                                                // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        BGSwitch;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonIcon_C*                          CommonIcon;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DisableIcon;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 InfoIcon;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        ItemViewSwitch;                                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LevelText;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Light;                                             // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 NewIcon;                                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RareBG;                                            // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonToolTipDetail_Variable_C*    ToolTip;                                           // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetData(EItemType ItemType, int32 ItemId, int32 LevelMin, int32 LevelMax, bool NewIconVisible, bool Rare);
	void DropMask(int32 OpenCount, int32 NowCount);
	void SetDataLottery(ESBRewardItemType RewardType, int32 ItemId, int32 LevelMin, int32 LevelMax, bool Rare);
	void SetUnknownData(int32 LevelMin, int32 LevelMax, bool Rare);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LibraryMenu_Monster_DropItem_C">();
	}
	static class ULibraryMenu_Monster_DropItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULibraryMenu_Monster_DropItem_C>();
	}
};
static_assert(alignof(ULibraryMenu_Monster_DropItem_C) == 0x000008, "Wrong alignment on ULibraryMenu_Monster_DropItem_C");
static_assert(sizeof(ULibraryMenu_Monster_DropItem_C) == 0x0002D0, "Wrong size on ULibraryMenu_Monster_DropItem_C");
static_assert(offsetof(ULibraryMenu_Monster_DropItem_C, BG) == 0x000278, "Member 'ULibraryMenu_Monster_DropItem_C::BG' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DropItem_C, BGSwitch) == 0x000280, "Member 'ULibraryMenu_Monster_DropItem_C::BGSwitch' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DropItem_C, CommonIcon) == 0x000288, "Member 'ULibraryMenu_Monster_DropItem_C::CommonIcon' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DropItem_C, DisableIcon) == 0x000290, "Member 'ULibraryMenu_Monster_DropItem_C::DisableIcon' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DropItem_C, InfoIcon) == 0x000298, "Member 'ULibraryMenu_Monster_DropItem_C::InfoIcon' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DropItem_C, ItemViewSwitch) == 0x0002A0, "Member 'ULibraryMenu_Monster_DropItem_C::ItemViewSwitch' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DropItem_C, LevelText) == 0x0002A8, "Member 'ULibraryMenu_Monster_DropItem_C::LevelText' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DropItem_C, Light) == 0x0002B0, "Member 'ULibraryMenu_Monster_DropItem_C::Light' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DropItem_C, NewIcon) == 0x0002B8, "Member 'ULibraryMenu_Monster_DropItem_C::NewIcon' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DropItem_C, RareBG) == 0x0002C0, "Member 'ULibraryMenu_Monster_DropItem_C::RareBG' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_DropItem_C, ToolTip) == 0x0002C8, "Member 'ULibraryMenu_Monster_DropItem_C::ToolTip' has a wrong offset!");

}


#pragma once

 

// Package: WeaponSynthePart_ItemBoxItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WeaponSynthePart_ItemBoxItem.WeaponSynthePart_ItemBoxItem_C
// 0x0118 (0x0390 - 0x0278)
class UWeaponSynthePart_ItemBoxItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Img_Lock;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemDropInfo_C*                        ItemDropInfo;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Amount;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_NeedNum;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_TokenName;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FItemMasterData                        ItemData;                                          // 0x02A8(0x00D0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSBMasterFusionItem                    FusionItemMaster;                                  // 0x0378(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void ExecuteUbergraph_WeaponSynthePart_ItemBoxItem(int32 EntryPoint);
	void Set_HeaderMode();
	void SetItemData(int32 ItemId);
	void Construct();
	void GetItemData(int32* ItemId);
	void SetColorTextNeedNum(bool IsActive);
	void IsCondition(bool* Result);
	void Nodata();

	bool IsLockedItem() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WeaponSynthePart_ItemBoxItem_C">();
	}
	static class UWeaponSynthePart_ItemBoxItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeaponSynthePart_ItemBoxItem_C>();
	}
};
static_assert(alignof(UWeaponSynthePart_ItemBoxItem_C) == 0x000008, "Wrong alignment on UWeaponSynthePart_ItemBoxItem_C");
static_assert(sizeof(UWeaponSynthePart_ItemBoxItem_C) == 0x000390, "Wrong size on UWeaponSynthePart_ItemBoxItem_C");
static_assert(offsetof(UWeaponSynthePart_ItemBoxItem_C, UberGraphFrame) == 0x000278, "Member 'UWeaponSynthePart_ItemBoxItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_ItemBoxItem_C, Img_Lock) == 0x000280, "Member 'UWeaponSynthePart_ItemBoxItem_C::Img_Lock' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_ItemBoxItem_C, ItemDropInfo) == 0x000288, "Member 'UWeaponSynthePart_ItemBoxItem_C::ItemDropInfo' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_ItemBoxItem_C, Txt_Amount) == 0x000290, "Member 'UWeaponSynthePart_ItemBoxItem_C::Txt_Amount' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_ItemBoxItem_C, Txt_NeedNum) == 0x000298, "Member 'UWeaponSynthePart_ItemBoxItem_C::Txt_NeedNum' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_ItemBoxItem_C, Txt_TokenName) == 0x0002A0, "Member 'UWeaponSynthePart_ItemBoxItem_C::Txt_TokenName' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_ItemBoxItem_C, ItemData) == 0x0002A8, "Member 'UWeaponSynthePart_ItemBoxItem_C::ItemData' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_ItemBoxItem_C, FusionItemMaster) == 0x000378, "Member 'UWeaponSynthePart_ItemBoxItem_C::FusionItemMaster' has a wrong offset!");

}


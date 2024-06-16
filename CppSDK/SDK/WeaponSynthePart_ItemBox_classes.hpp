#pragma once

 

// Package: WeaponSynthePart_ItemBox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WeaponSynthePart_ItemBox.WeaponSynthePart_ItemBox_C
// 0x0020 (0x0298 - 0x0278)
class UWeaponSynthePart_ItemBox_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_TicketIcon;                                  // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_Item;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponSynthePart_ItemBoxItem_C*        WeaponSynthePart_ItemBoxItem;                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WeaponSynthePart_ItemBox(int32 EntryPoint);
	void Construct();
	void Destruct();
	void Generate(const int32 ItemId);
	class UWeaponSynthePart_ItemBoxItem_C* Create();
	void Clear();
	int32 GetCreateNum();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WeaponSynthePart_ItemBox_C">();
	}
	static class UWeaponSynthePart_ItemBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeaponSynthePart_ItemBox_C>();
	}
};
static_assert(alignof(UWeaponSynthePart_ItemBox_C) == 0x000008, "Wrong alignment on UWeaponSynthePart_ItemBox_C");
static_assert(sizeof(UWeaponSynthePart_ItemBox_C) == 0x000298, "Wrong size on UWeaponSynthePart_ItemBox_C");
static_assert(offsetof(UWeaponSynthePart_ItemBox_C, UberGraphFrame) == 0x000278, "Member 'UWeaponSynthePart_ItemBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_ItemBox_C, Image_TicketIcon) == 0x000280, "Member 'UWeaponSynthePart_ItemBox_C::Image_TicketIcon' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_ItemBox_C, VB_Item) == 0x000288, "Member 'UWeaponSynthePart_ItemBox_C::VB_Item' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_ItemBox_C, WeaponSynthePart_ItemBoxItem) == 0x000290, "Member 'UWeaponSynthePart_ItemBox_C::WeaponSynthePart_ItemBoxItem' has a wrong offset!");

}


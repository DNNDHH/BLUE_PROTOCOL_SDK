#pragma once

 

// Package: CraftedWeaponLIstitem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CraftedWeaponLIstitem.CraftedWeaponLIstitem_C
// 0x0060 (0x02D8 - 0x0278)
class UCraftedWeaponLIstitem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Base;                                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_155;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_SlotNum;                                       // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Tag;                                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_TagValue;                                      // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 UID;                                               // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         No;                                                // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         StorageNo;                                         // 0x02CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IsCritical;                                        // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_CraftedWeaponLIstitem(int32 EntryPoint);
	void Construct();
	void Update_All_Text_Critical_Color();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CraftedWeaponLIstitem_C">();
	}
	static class UCraftedWeaponLIstitem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCraftedWeaponLIstitem_C>();
	}
};
static_assert(alignof(UCraftedWeaponLIstitem_C) == 0x000008, "Wrong alignment on UCraftedWeaponLIstitem_C");
static_assert(sizeof(UCraftedWeaponLIstitem_C) == 0x0002D8, "Wrong size on UCraftedWeaponLIstitem_C");
static_assert(offsetof(UCraftedWeaponLIstitem_C, UberGraphFrame) == 0x000278, "Member 'UCraftedWeaponLIstitem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCraftedWeaponLIstitem_C, Base) == 0x000280, "Member 'UCraftedWeaponLIstitem_C::Base' has a wrong offset!");
static_assert(offsetof(UCraftedWeaponLIstitem_C, Image) == 0x000288, "Member 'UCraftedWeaponLIstitem_C::Image' has a wrong offset!");
static_assert(offsetof(UCraftedWeaponLIstitem_C, Image_3) == 0x000290, "Member 'UCraftedWeaponLIstitem_C::Image_3' has a wrong offset!");
static_assert(offsetof(UCraftedWeaponLIstitem_C, Image_155) == 0x000298, "Member 'UCraftedWeaponLIstitem_C::Image_155' has a wrong offset!");
static_assert(offsetof(UCraftedWeaponLIstitem_C, Txt_SlotNum) == 0x0002A0, "Member 'UCraftedWeaponLIstitem_C::Txt_SlotNum' has a wrong offset!");
static_assert(offsetof(UCraftedWeaponLIstitem_C, Txt_Tag) == 0x0002A8, "Member 'UCraftedWeaponLIstitem_C::Txt_Tag' has a wrong offset!");
static_assert(offsetof(UCraftedWeaponLIstitem_C, Txt_TagValue) == 0x0002B0, "Member 'UCraftedWeaponLIstitem_C::Txt_TagValue' has a wrong offset!");
static_assert(offsetof(UCraftedWeaponLIstitem_C, UID) == 0x0002B8, "Member 'UCraftedWeaponLIstitem_C::UID' has a wrong offset!");
static_assert(offsetof(UCraftedWeaponLIstitem_C, No) == 0x0002C8, "Member 'UCraftedWeaponLIstitem_C::No' has a wrong offset!");
static_assert(offsetof(UCraftedWeaponLIstitem_C, StorageNo) == 0x0002CC, "Member 'UCraftedWeaponLIstitem_C::StorageNo' has a wrong offset!");
static_assert(offsetof(UCraftedWeaponLIstitem_C, IsCritical) == 0x0002D0, "Member 'UCraftedWeaponLIstitem_C::IsCritical' has a wrong offset!");

}


#pragma once

 

// Package: CraftResultWeaponMulti

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CraftResultWeaponMulti.CraftResultWeaponMulti_C
// 0x0090 (0x0308 - 0x0278)
class UCraftResultWeaponMulti_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonIcon_C*                          CommonIcon;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icn_Bag;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icn_Storage;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_103;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_155;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_169;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_243;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_492;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_988;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       RTxt_Count;                                        // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_StorageView;                                   // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_WeaponName;                                    // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_Items;                                          // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_StorageDisp;                                    // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CraftResultWeaponMulti(int32 EntryPoint);
	void Set_Result(const struct FCraftMasterData& Recepi, const TArray<class FString>& Uids, int32 StorageNo, const TArray<bool>& Criticals);
	void UpdateCriticalCount(TArray<bool>& CriticalCount);
	void PlayAnimIn();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CraftResultWeaponMulti_C">();
	}
	static class UCraftResultWeaponMulti_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCraftResultWeaponMulti_C>();
	}
};
static_assert(alignof(UCraftResultWeaponMulti_C) == 0x000008, "Wrong alignment on UCraftResultWeaponMulti_C");
static_assert(sizeof(UCraftResultWeaponMulti_C) == 0x000308, "Wrong size on UCraftResultWeaponMulti_C");
static_assert(offsetof(UCraftResultWeaponMulti_C, UberGraphFrame) == 0x000278, "Member 'UCraftResultWeaponMulti_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCraftResultWeaponMulti_C, AnimIn) == 0x000280, "Member 'UCraftResultWeaponMulti_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UCraftResultWeaponMulti_C, CommonIcon) == 0x000288, "Member 'UCraftResultWeaponMulti_C::CommonIcon' has a wrong offset!");
static_assert(offsetof(UCraftResultWeaponMulti_C, Icn_Bag) == 0x000290, "Member 'UCraftResultWeaponMulti_C::Icn_Bag' has a wrong offset!");
static_assert(offsetof(UCraftResultWeaponMulti_C, Icn_Storage) == 0x000298, "Member 'UCraftResultWeaponMulti_C::Icn_Storage' has a wrong offset!");
static_assert(offsetof(UCraftResultWeaponMulti_C, Image) == 0x0002A0, "Member 'UCraftResultWeaponMulti_C::Image' has a wrong offset!");
static_assert(offsetof(UCraftResultWeaponMulti_C, Image_3) == 0x0002A8, "Member 'UCraftResultWeaponMulti_C::Image_3' has a wrong offset!");
static_assert(offsetof(UCraftResultWeaponMulti_C, Image_103) == 0x0002B0, "Member 'UCraftResultWeaponMulti_C::Image_103' has a wrong offset!");
static_assert(offsetof(UCraftResultWeaponMulti_C, Image_155) == 0x0002B8, "Member 'UCraftResultWeaponMulti_C::Image_155' has a wrong offset!");
static_assert(offsetof(UCraftResultWeaponMulti_C, Image_169) == 0x0002C0, "Member 'UCraftResultWeaponMulti_C::Image_169' has a wrong offset!");
static_assert(offsetof(UCraftResultWeaponMulti_C, Image_243) == 0x0002C8, "Member 'UCraftResultWeaponMulti_C::Image_243' has a wrong offset!");
static_assert(offsetof(UCraftResultWeaponMulti_C, Image_492) == 0x0002D0, "Member 'UCraftResultWeaponMulti_C::Image_492' has a wrong offset!");
static_assert(offsetof(UCraftResultWeaponMulti_C, Image_988) == 0x0002D8, "Member 'UCraftResultWeaponMulti_C::Image_988' has a wrong offset!");
static_assert(offsetof(UCraftResultWeaponMulti_C, RTxt_Count) == 0x0002E0, "Member 'UCraftResultWeaponMulti_C::RTxt_Count' has a wrong offset!");
static_assert(offsetof(UCraftResultWeaponMulti_C, Txt_StorageView) == 0x0002E8, "Member 'UCraftResultWeaponMulti_C::Txt_StorageView' has a wrong offset!");
static_assert(offsetof(UCraftResultWeaponMulti_C, Txt_WeaponName) == 0x0002F0, "Member 'UCraftResultWeaponMulti_C::Txt_WeaponName' has a wrong offset!");
static_assert(offsetof(UCraftResultWeaponMulti_C, VB_Items) == 0x0002F8, "Member 'UCraftResultWeaponMulti_C::VB_Items' has a wrong offset!");
static_assert(offsetof(UCraftResultWeaponMulti_C, WS_StorageDisp) == 0x000300, "Member 'UCraftResultWeaponMulti_C::WS_StorageDisp' has a wrong offset!");

}


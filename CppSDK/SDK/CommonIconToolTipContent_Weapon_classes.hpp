#pragma once

 

// Package: CommonIconToolTipContent_Weapon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommonIconToolTipContent_Weapon.CommonIconToolTipContent_Weapon_C
// 0x0100 (0x0378 - 0x0278)
class UCommonIconToolTipContent_Weapon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             AttackValue;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAttributeIcon_C*                       AttributeIcon;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             AttributePowerValue;                               // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG;                                                // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ClassTypeName;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    LevelHeading;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    LevelMark;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LevelValue;                                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LvSyncMark;                                        // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SPEffectDesc;                                      // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SPEffectHeading;                                   // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SPEffectValue;                                     // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SplitLine05;                                       // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ToolTipDetailsDateTime_C*          TermLimitDateTimeParts;                            // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StackB_M_C*                        WBP_StackB_M;                                      // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           WeaponAbilityGrp;                                  // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWeaponAbilityInfoSlotList_C*     WeaponAbilityInfoSlotList;                         // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             WeaponName;                                        // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 WeaponUniqueID;                                    // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          bIsStackB;                                         // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsPlayerProfile;                                  // 0x0321(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9447[0x6];                                     // 0x0322(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponItemData                      PlayerProfileWeaponData;                           // 0x0328(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_CommonIconToolTipContent_Weapon(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void SetToolTipWeapon(const struct FSBWeaponMasterData& InWeaponMasterData, const class FString& InItemUniqueId, int32 InStorageId, bool IsEffectiveDisplay, bool InForceLevelSyncOff);
	void SetLevelSync(const class FString& InUniqueId);
	void SetAttributePower(int32 InAttributePower);
	void ResetToDefaultTextColor();
	void SetPlayerProfileWeaponData(const struct FSBWeaponItemData& Param_PlayerProfileWeaponData);
	void SetPlayerProfileToolTipWeapon(const struct FSBWeaponMasterData& InWeaponMasterData, const class FString& InItemUniqueId, int32 InStorageId, bool IsEffectiveDisplay, bool InForceLevelSyncOff);
	void SetToolTipWeaponBase(const struct FSBWeaponMasterData& InWeaponMasterData, const class FString& InItemUniqueId, int32 InStorageId, int32 InPerkUnlockedNum, TArray<struct FSBCharacterWeaponPerkData>& InPerkList, int32 InUsedPerkSlotNum, int32 InSpecialPerkId, int32 InSpecialPerkValue, int32 InStackBNum, bool InIsTermLimited, const struct FDateTime& InExpiryDateTime, bool IsEffectiveDisplay, bool InForceLevelSyncOff);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonIconToolTipContent_Weapon_C">();
	}
	static class UCommonIconToolTipContent_Weapon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonIconToolTipContent_Weapon_C>();
	}
};
static_assert(alignof(UCommonIconToolTipContent_Weapon_C) == 0x000008, "Wrong alignment on UCommonIconToolTipContent_Weapon_C");
static_assert(sizeof(UCommonIconToolTipContent_Weapon_C) == 0x000378, "Wrong size on UCommonIconToolTipContent_Weapon_C");
static_assert(offsetof(UCommonIconToolTipContent_Weapon_C, UberGraphFrame) == 0x000278, "Member 'UCommonIconToolTipContent_Weapon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_Weapon_C, AttackValue) == 0x000280, "Member 'UCommonIconToolTipContent_Weapon_C::AttackValue' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_Weapon_C, AttributeIcon) == 0x000288, "Member 'UCommonIconToolTipContent_Weapon_C::AttributeIcon' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_Weapon_C, AttributePowerValue) == 0x000290, "Member 'UCommonIconToolTipContent_Weapon_C::AttributePowerValue' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_Weapon_C, BG) == 0x000298, "Member 'UCommonIconToolTipContent_Weapon_C::BG' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_Weapon_C, ClassTypeName) == 0x0002A0, "Member 'UCommonIconToolTipContent_Weapon_C::ClassTypeName' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_Weapon_C, LevelHeading) == 0x0002A8, "Member 'UCommonIconToolTipContent_Weapon_C::LevelHeading' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_Weapon_C, LevelMark) == 0x0002B0, "Member 'UCommonIconToolTipContent_Weapon_C::LevelMark' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_Weapon_C, LevelValue) == 0x0002B8, "Member 'UCommonIconToolTipContent_Weapon_C::LevelValue' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_Weapon_C, LvSyncMark) == 0x0002C0, "Member 'UCommonIconToolTipContent_Weapon_C::LvSyncMark' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_Weapon_C, SPEffectDesc) == 0x0002C8, "Member 'UCommonIconToolTipContent_Weapon_C::SPEffectDesc' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_Weapon_C, SPEffectHeading) == 0x0002D0, "Member 'UCommonIconToolTipContent_Weapon_C::SPEffectHeading' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_Weapon_C, SPEffectValue) == 0x0002D8, "Member 'UCommonIconToolTipContent_Weapon_C::SPEffectValue' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_Weapon_C, SplitLine05) == 0x0002E0, "Member 'UCommonIconToolTipContent_Weapon_C::SplitLine05' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_Weapon_C, TermLimitDateTimeParts) == 0x0002E8, "Member 'UCommonIconToolTipContent_Weapon_C::TermLimitDateTimeParts' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_Weapon_C, WBP_StackB_M) == 0x0002F0, "Member 'UCommonIconToolTipContent_Weapon_C::WBP_StackB_M' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_Weapon_C, WeaponAbilityGrp) == 0x0002F8, "Member 'UCommonIconToolTipContent_Weapon_C::WeaponAbilityGrp' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_Weapon_C, WeaponAbilityInfoSlotList) == 0x000300, "Member 'UCommonIconToolTipContent_Weapon_C::WeaponAbilityInfoSlotList' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_Weapon_C, WeaponName) == 0x000308, "Member 'UCommonIconToolTipContent_Weapon_C::WeaponName' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_Weapon_C, WeaponUniqueID) == 0x000310, "Member 'UCommonIconToolTipContent_Weapon_C::WeaponUniqueID' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_Weapon_C, bIsStackB) == 0x000320, "Member 'UCommonIconToolTipContent_Weapon_C::bIsStackB' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_Weapon_C, bIsPlayerProfile) == 0x000321, "Member 'UCommonIconToolTipContent_Weapon_C::bIsPlayerProfile' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_Weapon_C, PlayerProfileWeaponData) == 0x000328, "Member 'UCommonIconToolTipContent_Weapon_C::PlayerProfileWeaponData' has a wrong offset!");

}


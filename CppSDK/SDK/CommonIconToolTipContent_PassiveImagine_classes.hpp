#pragma once

 

// Package: CommonIconToolTipContent_PassiveImagine

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommonIconToolTipContent_PassiveImagine.CommonIconToolTipContent_PassiveImagine_C
// 0x0080 (0x02F8 - 0x0278)
class UCommonIconToolTipContent_PassiveImagine_C final : public UUserWidget
{
public:
	class UTextBlock*                             AbilityDesc;                                       // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG;                                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 EquipPositionIcon01;                               // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 EquipPositionIcon02;                               // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 EquipPositionIcon03;                               // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 EquipPositionIcon04;                               // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 EquipPositionIcon05;                               // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ImagineName;                                       // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    LevelMark;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LevelValue;                                        // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LvSyncMark;                                        // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SplitLine03;                                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitcherForEquipPositionIcon;                      // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ToolTipDetailsDateTime_C*          TermLimitDateTimeParts;                            // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StackB_M_C*                        WBP_StackB_M;                                      // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          UseClassTypeForLevelSync;                          // 0x02F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	ESBClassType                                  ClassTypeForLevelSync;                             // 0x02F1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ForceLevelSyncOff;                                 // 0x02F2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void SetImagineData(const struct FSBMasterImagine& InMasterImagine, const class FString& InUniqueId, bool InUseClassTypeForLevelSync, ESBClassType InClassTypeForLevelSync, bool IsEffectiveDisplay, bool bInForceLevelSyncOff);
	void SetImagineLevel(int32 InImagineLv, int32 InClassLevel, int32* OutImagineLv);
	void SetIntToText(class UTextBlock* InTextWidget, int32 InInteger, bool InUseGrouping);
	void SetImagineDataBase(const struct FSBMasterImagine& InMasterImagine, const class FString& InUniqueId, bool InUseClassTypeForLevelSync, ESBClassType InClassTypeForLevelSync, bool IsEffectiveDisplay, bool bInForceLevelSyncOff, int32 InClassLevel, int32 InPerkId, int32 InStackBNum, int32 InStackBMax);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonIconToolTipContent_PassiveImagine_C">();
	}
	static class UCommonIconToolTipContent_PassiveImagine_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonIconToolTipContent_PassiveImagine_C>();
	}
};
static_assert(alignof(UCommonIconToolTipContent_PassiveImagine_C) == 0x000008, "Wrong alignment on UCommonIconToolTipContent_PassiveImagine_C");
static_assert(sizeof(UCommonIconToolTipContent_PassiveImagine_C) == 0x0002F8, "Wrong size on UCommonIconToolTipContent_PassiveImagine_C");
static_assert(offsetof(UCommonIconToolTipContent_PassiveImagine_C, AbilityDesc) == 0x000278, "Member 'UCommonIconToolTipContent_PassiveImagine_C::AbilityDesc' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_PassiveImagine_C, BG) == 0x000280, "Member 'UCommonIconToolTipContent_PassiveImagine_C::BG' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_PassiveImagine_C, EquipPositionIcon01) == 0x000288, "Member 'UCommonIconToolTipContent_PassiveImagine_C::EquipPositionIcon01' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_PassiveImagine_C, EquipPositionIcon02) == 0x000290, "Member 'UCommonIconToolTipContent_PassiveImagine_C::EquipPositionIcon02' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_PassiveImagine_C, EquipPositionIcon03) == 0x000298, "Member 'UCommonIconToolTipContent_PassiveImagine_C::EquipPositionIcon03' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_PassiveImagine_C, EquipPositionIcon04) == 0x0002A0, "Member 'UCommonIconToolTipContent_PassiveImagine_C::EquipPositionIcon04' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_PassiveImagine_C, EquipPositionIcon05) == 0x0002A8, "Member 'UCommonIconToolTipContent_PassiveImagine_C::EquipPositionIcon05' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_PassiveImagine_C, ImagineName) == 0x0002B0, "Member 'UCommonIconToolTipContent_PassiveImagine_C::ImagineName' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_PassiveImagine_C, LevelMark) == 0x0002B8, "Member 'UCommonIconToolTipContent_PassiveImagine_C::LevelMark' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_PassiveImagine_C, LevelValue) == 0x0002C0, "Member 'UCommonIconToolTipContent_PassiveImagine_C::LevelValue' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_PassiveImagine_C, LvSyncMark) == 0x0002C8, "Member 'UCommonIconToolTipContent_PassiveImagine_C::LvSyncMark' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_PassiveImagine_C, SplitLine03) == 0x0002D0, "Member 'UCommonIconToolTipContent_PassiveImagine_C::SplitLine03' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_PassiveImagine_C, SwitcherForEquipPositionIcon) == 0x0002D8, "Member 'UCommonIconToolTipContent_PassiveImagine_C::SwitcherForEquipPositionIcon' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_PassiveImagine_C, TermLimitDateTimeParts) == 0x0002E0, "Member 'UCommonIconToolTipContent_PassiveImagine_C::TermLimitDateTimeParts' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_PassiveImagine_C, WBP_StackB_M) == 0x0002E8, "Member 'UCommonIconToolTipContent_PassiveImagine_C::WBP_StackB_M' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_PassiveImagine_C, UseClassTypeForLevelSync) == 0x0002F0, "Member 'UCommonIconToolTipContent_PassiveImagine_C::UseClassTypeForLevelSync' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_PassiveImagine_C, ClassTypeForLevelSync) == 0x0002F1, "Member 'UCommonIconToolTipContent_PassiveImagine_C::ClassTypeForLevelSync' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_PassiveImagine_C, ForceLevelSyncOff) == 0x0002F2, "Member 'UCommonIconToolTipContent_PassiveImagine_C::ForceLevelSyncOff' has a wrong offset!");

}


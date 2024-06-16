#pragma once

 

// Package: PlayerName

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PlayerName.PlayerName_C
// 0x00D0 (0x0348 - 0x0278)
class UPlayerName_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimSTRecover;                                     // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UPlayerGaugeBagCapacity_C*              BagCapacity;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClassIcon_C*                           ClassIcon;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClassIcon_C*                           ClassIconShadow;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnExpOverflowLevelMark_C*             CmnExpOverflowLevelMark;                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        ColorSwitcher;                                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           EXPGaugeSize;                                      // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ExpNormalColor;                                    // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconLeader;                                        // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line1;                                             // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line1_1;                                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line1_2;                                           // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line2;                                             // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 OverflowExpColor;                                  // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTensionTagIcon_C*                      TensionTagIcon;                                    // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtAchievementName;                                // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtClassName;                                      // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtLvl;                                            // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtPlayerName;                                     // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBPCBerserkerComponent*                BerserkerComp;                                     // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  NowClassType;                                      // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61A8[0x7];                                     // 0x0321(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       EXPSlot;                                           // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              EXPSlotSizeXY;                                     // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCharacterInfoLoadCompleted;                       // 0x0338(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsInitTensionIcon;                                // 0x0339(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61A9[0x2];                                     // 0x033A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PrevTotalPower;                                    // 0x033C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bPendingUpdateTotalPower;                          // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_PlayerName(int32 EntryPoint);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UnbindTensionTagChanged();
	void LoadCharacterInfo(class ASBPlayerCharacter* PlayerCharacter);
	void SetTensionIcon(class ASBPlayerCharacter* PlayerCharacter);
	void OnChangeTensionTag(const ESBTensionTagType TensionTag);
	void Destruct();
	void ClassChangeLevelUpdate(const int32 InRetCode, const bool bInIsExpiredStickerWeapons, const TArray<class FString>& InExpiredStickerWeaponUniqueIds, const struct FSBExpiredEquipmentData& InDirtyExpiredEquipmentData);
	void LevelUpLevelUpdate(int32 InPrevLevel, int32 InCurLevel, const struct FSBExtraExpParse& InExtraExpParse);
	void SetPlayerName(const class FText& InName);
	void SetBgVisibility(bool Param_IsVisible);
	void SetPlayerNameVisibility(bool Param_IsVisible);
	void SetAchievementName(const class FText& InName);
	void SetAchievementNameVisibility(bool Param_IsVisible);
	void SetClassData(ESBClassType ClassType);
	void UpdateLevelText(int32 Level);
	void UpdateAutoDeliveryQuest();
	void UpdatePartyLeaderIcon();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerName_C">();
	}
	static class UPlayerName_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerName_C>();
	}
};
static_assert(alignof(UPlayerName_C) == 0x000008, "Wrong alignment on UPlayerName_C");
static_assert(sizeof(UPlayerName_C) == 0x000348, "Wrong size on UPlayerName_C");
static_assert(offsetof(UPlayerName_C, UberGraphFrame) == 0x000278, "Member 'UPlayerName_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayerName_C, AnimSTRecover) == 0x000280, "Member 'UPlayerName_C::AnimSTRecover' has a wrong offset!");
static_assert(offsetof(UPlayerName_C, BagCapacity) == 0x000288, "Member 'UPlayerName_C::BagCapacity' has a wrong offset!");
static_assert(offsetof(UPlayerName_C, ClassIcon) == 0x000290, "Member 'UPlayerName_C::ClassIcon' has a wrong offset!");
static_assert(offsetof(UPlayerName_C, ClassIconShadow) == 0x000298, "Member 'UPlayerName_C::ClassIconShadow' has a wrong offset!");
static_assert(offsetof(UPlayerName_C, CmnExpOverflowLevelMark) == 0x0002A0, "Member 'UPlayerName_C::CmnExpOverflowLevelMark' has a wrong offset!");
static_assert(offsetof(UPlayerName_C, ColorSwitcher) == 0x0002A8, "Member 'UPlayerName_C::ColorSwitcher' has a wrong offset!");
static_assert(offsetof(UPlayerName_C, EXPGaugeSize) == 0x0002B0, "Member 'UPlayerName_C::EXPGaugeSize' has a wrong offset!");
static_assert(offsetof(UPlayerName_C, ExpNormalColor) == 0x0002B8, "Member 'UPlayerName_C::ExpNormalColor' has a wrong offset!");
static_assert(offsetof(UPlayerName_C, IconLeader) == 0x0002C0, "Member 'UPlayerName_C::IconLeader' has a wrong offset!");
static_assert(offsetof(UPlayerName_C, Line1) == 0x0002C8, "Member 'UPlayerName_C::Line1' has a wrong offset!");
static_assert(offsetof(UPlayerName_C, Line1_1) == 0x0002D0, "Member 'UPlayerName_C::Line1_1' has a wrong offset!");
static_assert(offsetof(UPlayerName_C, Line1_2) == 0x0002D8, "Member 'UPlayerName_C::Line1_2' has a wrong offset!");
static_assert(offsetof(UPlayerName_C, Line2) == 0x0002E0, "Member 'UPlayerName_C::Line2' has a wrong offset!");
static_assert(offsetof(UPlayerName_C, OverflowExpColor) == 0x0002E8, "Member 'UPlayerName_C::OverflowExpColor' has a wrong offset!");
static_assert(offsetof(UPlayerName_C, TensionTagIcon) == 0x0002F0, "Member 'UPlayerName_C::TensionTagIcon' has a wrong offset!");
static_assert(offsetof(UPlayerName_C, TxtAchievementName) == 0x0002F8, "Member 'UPlayerName_C::TxtAchievementName' has a wrong offset!");
static_assert(offsetof(UPlayerName_C, TxtClassName) == 0x000300, "Member 'UPlayerName_C::TxtClassName' has a wrong offset!");
static_assert(offsetof(UPlayerName_C, TxtLvl) == 0x000308, "Member 'UPlayerName_C::TxtLvl' has a wrong offset!");
static_assert(offsetof(UPlayerName_C, TxtPlayerName) == 0x000310, "Member 'UPlayerName_C::TxtPlayerName' has a wrong offset!");
static_assert(offsetof(UPlayerName_C, BerserkerComp) == 0x000318, "Member 'UPlayerName_C::BerserkerComp' has a wrong offset!");
static_assert(offsetof(UPlayerName_C, NowClassType) == 0x000320, "Member 'UPlayerName_C::NowClassType' has a wrong offset!");
static_assert(offsetof(UPlayerName_C, EXPSlot) == 0x000328, "Member 'UPlayerName_C::EXPSlot' has a wrong offset!");
static_assert(offsetof(UPlayerName_C, EXPSlotSizeXY) == 0x000330, "Member 'UPlayerName_C::EXPSlotSizeXY' has a wrong offset!");
static_assert(offsetof(UPlayerName_C, bCharacterInfoLoadCompleted) == 0x000338, "Member 'UPlayerName_C::bCharacterInfoLoadCompleted' has a wrong offset!");
static_assert(offsetof(UPlayerName_C, bIsInitTensionIcon) == 0x000339, "Member 'UPlayerName_C::bIsInitTensionIcon' has a wrong offset!");
static_assert(offsetof(UPlayerName_C, PrevTotalPower) == 0x00033C, "Member 'UPlayerName_C::PrevTotalPower' has a wrong offset!");
static_assert(offsetof(UPlayerName_C, bPendingUpdateTotalPower) == 0x000340, "Member 'UPlayerName_C::bPendingUpdateTotalPower' has a wrong offset!");

}


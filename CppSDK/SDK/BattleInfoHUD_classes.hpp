#pragma once

 

// Package: BattleInfoHUD

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HUDUI_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BattleInfoHUD.BattleInfoHUD_C
// 0x0088 (0x0300 - 0x0278)
class UBattleInfoHUD_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                               Combination;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             CombinationNumber;                                 // 0x0288(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             CombinationTimer;                                  // 0x0290(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboHUD_C*                            ComboHUD;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHitIndicator_C*                        HitIndicator;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInstanceDungeonBattleinfoHUD_C*        InstanceDungeonBattleinfoHUD;                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInteractNotice_C*                      InteractNotice;                                    // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URespawnHUD_C*                          RespawnHUD;                                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USimpleAlert_C*                         SimpleAlert;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EHUDUI                                        LayoutingUI;                                       // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5005[0x3];                                     // 0x02C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ScreenWidth;                                       // 0x02CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ScreenHeight;                                      // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          KeyBoard;                                          // 0x02D4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5006[0x3];                                     // 0x02D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlaceGuide_C*                          PlaceGuide2;                                       // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTickerMessage_C*                       TickerMessage;                                     // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTutorialHelpDialogBox_C*               TutorialHelpWidget;                                // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   TutorialHelpId;                                    // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCheckTutorialHelp;                               // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BattleInfoHUD(int32 EntryPoint);
	void OnUpdateRespawnGauge();
	void Destruct();
	void BattleAreaDisableMessage();
	void OnShowRespawnBattleArea_Event();
	void UpdateInteractionNotice();
	void OnDisableRespawn_Event();
	void OnShowRespawn_Event(float InRespawnTime);
	void OnShowCombo_Event(int32 Combo);
	void UIVisibleSettingChangeDelegate_Event_0(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
	void Construct();
	void InitWeaponEvents();
	void UnbindTutorialHelpJingleDelegate();
	void OnTutorialHelp_Close();
	void JingleTutorialHelp_Events(class FName Param_TutorialHelpId);
	void InitTutorialHelp_Event();
	class FText Get_PartyEngram();
	class FText Get_NextValue();
	class FText Get_PartyLevel();
	ESlateVisibility Get_Combination_Visibility_0();
	class FText Get_CombinationNumber_Text_0();
	class FText Get_CombinationTimer_Text_0();
	void IsAllHUDCreated(bool* OutIsCreated);
	ESlateVisibility Get_Countdown_Visibility_0();
	void GetHitIndicator(class UHitIndicator_C** Param_HitIndicator);
	void GetRespawnHUD(class URespawnHUD_C** Param_RespawnHUD);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BattleInfoHUD_C">();
	}
	static class UBattleInfoHUD_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBattleInfoHUD_C>();
	}
};
static_assert(alignof(UBattleInfoHUD_C) == 0x000008, "Wrong alignment on UBattleInfoHUD_C");
static_assert(sizeof(UBattleInfoHUD_C) == 0x000300, "Wrong size on UBattleInfoHUD_C");
static_assert(offsetof(UBattleInfoHUD_C, UberGraphFrame) == 0x000278, "Member 'UBattleInfoHUD_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBattleInfoHUD_C, Combination) == 0x000280, "Member 'UBattleInfoHUD_C::Combination' has a wrong offset!");
static_assert(offsetof(UBattleInfoHUD_C, CombinationNumber) == 0x000288, "Member 'UBattleInfoHUD_C::CombinationNumber' has a wrong offset!");
static_assert(offsetof(UBattleInfoHUD_C, CombinationTimer) == 0x000290, "Member 'UBattleInfoHUD_C::CombinationTimer' has a wrong offset!");
static_assert(offsetof(UBattleInfoHUD_C, ComboHUD) == 0x000298, "Member 'UBattleInfoHUD_C::ComboHUD' has a wrong offset!");
static_assert(offsetof(UBattleInfoHUD_C, HitIndicator) == 0x0002A0, "Member 'UBattleInfoHUD_C::HitIndicator' has a wrong offset!");
static_assert(offsetof(UBattleInfoHUD_C, InstanceDungeonBattleinfoHUD) == 0x0002A8, "Member 'UBattleInfoHUD_C::InstanceDungeonBattleinfoHUD' has a wrong offset!");
static_assert(offsetof(UBattleInfoHUD_C, InteractNotice) == 0x0002B0, "Member 'UBattleInfoHUD_C::InteractNotice' has a wrong offset!");
static_assert(offsetof(UBattleInfoHUD_C, RespawnHUD) == 0x0002B8, "Member 'UBattleInfoHUD_C::RespawnHUD' has a wrong offset!");
static_assert(offsetof(UBattleInfoHUD_C, SimpleAlert) == 0x0002C0, "Member 'UBattleInfoHUD_C::SimpleAlert' has a wrong offset!");
static_assert(offsetof(UBattleInfoHUD_C, LayoutingUI) == 0x0002C8, "Member 'UBattleInfoHUD_C::LayoutingUI' has a wrong offset!");
static_assert(offsetof(UBattleInfoHUD_C, ScreenWidth) == 0x0002CC, "Member 'UBattleInfoHUD_C::ScreenWidth' has a wrong offset!");
static_assert(offsetof(UBattleInfoHUD_C, ScreenHeight) == 0x0002D0, "Member 'UBattleInfoHUD_C::ScreenHeight' has a wrong offset!");
static_assert(offsetof(UBattleInfoHUD_C, KeyBoard) == 0x0002D4, "Member 'UBattleInfoHUD_C::KeyBoard' has a wrong offset!");
static_assert(offsetof(UBattleInfoHUD_C, PlaceGuide2) == 0x0002D8, "Member 'UBattleInfoHUD_C::PlaceGuide2' has a wrong offset!");
static_assert(offsetof(UBattleInfoHUD_C, TickerMessage) == 0x0002E0, "Member 'UBattleInfoHUD_C::TickerMessage' has a wrong offset!");
static_assert(offsetof(UBattleInfoHUD_C, TutorialHelpWidget) == 0x0002E8, "Member 'UBattleInfoHUD_C::TutorialHelpWidget' has a wrong offset!");
static_assert(offsetof(UBattleInfoHUD_C, TutorialHelpId) == 0x0002F0, "Member 'UBattleInfoHUD_C::TutorialHelpId' has a wrong offset!");
static_assert(offsetof(UBattleInfoHUD_C, IsCheckTutorialHelp) == 0x0002F8, "Member 'UBattleInfoHUD_C::IsCheckTutorialHelp' has a wrong offset!");

}


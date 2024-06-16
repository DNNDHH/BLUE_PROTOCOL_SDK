#pragma once

 

// Package: BP_PlayerName_Layoutable

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C
// 0x0030 (0x02A8 - 0x0278)
class UBP_PlayerName_Layoutable_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UUIWrapperForMouseDrag_C*               MouseDragWrapper;                                  // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               PlayerGauge;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerName_C*                          PlayerGauge_14;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          LayoutEditMode;                                    // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6822[0x7];                                     // 0x0299(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBBattleStatusComponent*               BattleStateComp;                                   // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_PlayerName_Layoutable(int32 EntryPoint);
	void UnbindPlayerStateDelegate();
	void UnbindAttachedClientPlayerStateDelegate();
	void Destruct();
	void OnAchievementSelectedChangeDelegate______0();
	void OnReciveBattleStatus();
	void OnChangePlayerCharacter(class APawn* InPawn);
	void OnCharacterNameChangeDelegate_Event_0(const class FString& InName);
	void InitPlayerStateDelegate(class ASBPlayerState* InPlayerState);
	void OnAttachedClientPlayerStateDelegate_Event_0(class ASBPlayerController* PlayerController);
	void Construct();
	void SetLayoutEditMode(bool Param_LayoutEditMode);
	void SetPlayerName();
	void SetAchievementName();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerName_Layoutable_C">();
	}
	static class UBP_PlayerName_Layoutable_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PlayerName_Layoutable_C>();
	}
};
static_assert(alignof(UBP_PlayerName_Layoutable_C) == 0x000008, "Wrong alignment on UBP_PlayerName_Layoutable_C");
static_assert(sizeof(UBP_PlayerName_Layoutable_C) == 0x0002A8, "Wrong size on UBP_PlayerName_Layoutable_C");
static_assert(offsetof(UBP_PlayerName_Layoutable_C, UberGraphFrame) == 0x000278, "Member 'UBP_PlayerName_Layoutable_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_PlayerName_Layoutable_C, MouseDragWrapper) == 0x000280, "Member 'UBP_PlayerName_Layoutable_C::MouseDragWrapper' has a wrong offset!");
static_assert(offsetof(UBP_PlayerName_Layoutable_C, PlayerGauge) == 0x000288, "Member 'UBP_PlayerName_Layoutable_C::PlayerGauge' has a wrong offset!");
static_assert(offsetof(UBP_PlayerName_Layoutable_C, PlayerGauge_14) == 0x000290, "Member 'UBP_PlayerName_Layoutable_C::PlayerGauge_14' has a wrong offset!");
static_assert(offsetof(UBP_PlayerName_Layoutable_C, LayoutEditMode) == 0x000298, "Member 'UBP_PlayerName_Layoutable_C::LayoutEditMode' has a wrong offset!");
static_assert(offsetof(UBP_PlayerName_Layoutable_C, BattleStateComp) == 0x0002A0, "Member 'UBP_PlayerName_Layoutable_C::BattleStateComp' has a wrong offset!");

}


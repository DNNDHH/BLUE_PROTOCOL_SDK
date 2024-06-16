#pragma once

 

// Package: MapWidget_PartyMemberIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MapWidget_PartyMemberIcon.MapWidget_PartyMemberIcon_C
// 0x0050 (0x02C8 - 0x0278)
class UMapWidget_PartyMemberIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimScale;                                         // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Dead;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Default;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switcher;                                          // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               TooltipHit;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMapWidget_IconTooltip1_C*              ToolTip;                                           // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         PlayerState;                                       // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDead;                                            // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_MapWidget_PartyMemberIcon(int32 EntryPoint);
	void CheckVisible();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void Set_Text(const class FText& InText);
	void CheckDead();
	void GetText(class FText* OutText);
	void SetPlayerState(class ASBPlayerState* InPlayerState);
	void GetPlayerState(class ASBPlayerState** OutPlayerState);
	void GetDeadFlag(bool* OutDeadFlag);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MapWidget_PartyMemberIcon_C">();
	}
	static class UMapWidget_PartyMemberIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMapWidget_PartyMemberIcon_C>();
	}
};
static_assert(alignof(UMapWidget_PartyMemberIcon_C) == 0x000008, "Wrong alignment on UMapWidget_PartyMemberIcon_C");
static_assert(sizeof(UMapWidget_PartyMemberIcon_C) == 0x0002C8, "Wrong size on UMapWidget_PartyMemberIcon_C");
static_assert(offsetof(UMapWidget_PartyMemberIcon_C, UberGraphFrame) == 0x000278, "Member 'UMapWidget_PartyMemberIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMapWidget_PartyMemberIcon_C, AnimScale) == 0x000280, "Member 'UMapWidget_PartyMemberIcon_C::AnimScale' has a wrong offset!");
static_assert(offsetof(UMapWidget_PartyMemberIcon_C, CanvasPanel_0) == 0x000288, "Member 'UMapWidget_PartyMemberIcon_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UMapWidget_PartyMemberIcon_C, Icon_Dead) == 0x000290, "Member 'UMapWidget_PartyMemberIcon_C::Icon_Dead' has a wrong offset!");
static_assert(offsetof(UMapWidget_PartyMemberIcon_C, Icon_Default) == 0x000298, "Member 'UMapWidget_PartyMemberIcon_C::Icon_Default' has a wrong offset!");
static_assert(offsetof(UMapWidget_PartyMemberIcon_C, Switcher) == 0x0002A0, "Member 'UMapWidget_PartyMemberIcon_C::Switcher' has a wrong offset!");
static_assert(offsetof(UMapWidget_PartyMemberIcon_C, TooltipHit) == 0x0002A8, "Member 'UMapWidget_PartyMemberIcon_C::TooltipHit' has a wrong offset!");
static_assert(offsetof(UMapWidget_PartyMemberIcon_C, ToolTip) == 0x0002B0, "Member 'UMapWidget_PartyMemberIcon_C::ToolTip' has a wrong offset!");
static_assert(offsetof(UMapWidget_PartyMemberIcon_C, PlayerState) == 0x0002B8, "Member 'UMapWidget_PartyMemberIcon_C::PlayerState' has a wrong offset!");
static_assert(offsetof(UMapWidget_PartyMemberIcon_C, IsDead) == 0x0002C0, "Member 'UMapWidget_PartyMemberIcon_C::IsDead' has a wrong offset!");

}


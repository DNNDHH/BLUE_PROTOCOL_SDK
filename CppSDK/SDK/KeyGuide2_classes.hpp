#pragma once

 

// Package: KeyGuide2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "EKeyGuideType_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass KeyGuide2.KeyGuide2_C
// 0x00C8 (0x0340 - 0x0278)
class UKeyGuide2_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetSwitcher*                        Disp;                                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeyGuide_Gamepad2_C*                   KeyGuide_Gamepad2;                                 // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeyGuide_Gamepad2_CheerfulItem_C*      KeyGuide_Gamepad2_CheerfulItem;                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeyGuide_Gamepad2_cty_C*               KeyGuide_Gamepad2_cty;                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeyGuide_Gamepad2_Mount_C*             KeyGuide_Gamepad2_Mount;                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeyGuide_Gamepad2_OfflineBattle_C*     KeyGuide_Gamepad2_OfflineBattle;                   // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeyGuide_Mouse2_C*                     KeyGuide_Mouse2;                                   // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeyGuide_Mouse2_CheerfulItem_C*        KeyGuide_Mouse2_CheerfulItem;                      // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeyGuide_Mouse2_cty_C*                 KeyGuide_Mouse2_cty;                               // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeyGuide_Mouse2_Mount_C*               KeyGuide_Mouse2_Mount;                             // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeyGuide_Mouse2_OfflineBattle_C*       KeyGuide_Mouse2_OfflineBattle;                     // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bShowGamepad;                                      // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsInitKeyGuideSettingDone;                        // 0x02D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EKeyGuideType                                 CurrKeyGuideType;                                  // 0x02DA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDesignTime;                                      // 0x02DB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BE4[0x4];                                     // 0x02DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerAdventurerComponent*           AdvComponent;                                      // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsMounting;                                        // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsCheerfulItem;                                    // 0x02E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BE5[0x6];                                     // 0x02EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnChangeKeyGuideVisibilityEvent;                   // 0x02F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         VisibleAdventureRank;                              // 0x0300(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BE6[0x4];                                     // 0x0304(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnChangeMountEvent;                                // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ASBPlayerCharacter*                     As_SBPlayer_Character;                             // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnCheerfulItemEvent;                               // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UUserWidget*                            TmpNextActiveWidget;                               // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           SettingTimer;                                      // 0x0338(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void OnChangeKeyGuideVisibilityEvent__DelegateSignature();
	void OnChangeMountEvent__DelegateSignature(bool IsMount);
	void OnCheerfulItemEvent__DelegateSignature(bool Param_IsCheerfulItem);
	void ExecuteUbergraph_KeyGuide2(int32 EntryPoint);
	void InitKeyGuideSettingTimerEvent();
	void Unbind_Pad_Skin_Change();
	void Bind_Pad_Skin_Change();
	void OnChangePad(const ESBPadKeySkinType SkinType);
	void CustomEvent_0(class UObject* Sender, class UObject* Param);
	void UnbindUpdateKeyConfigDelegate();
	void Destruct();
	void UnbindAdventurerRankDelegate();
	void SetEditMode(bool bIsEdit);
	void ChangeKeyGuideVisibilityAuto();
	void OnAdventurerRankDelegate_Event(const int32 InRetCode);
	void PreConstruct(bool Param_IsDesignTime);
	void OnRetryKeyGuideType();
	void OnUpdateKeyConfig();
	void ChangeKeyGuideVisibility();
	void ChangeKeyGuide(EKeyGuideType InKeyGuideType);
	void Construct();
	void IsKeyGuideAuto(bool* bAuto);
	void SetKeyConfig(bool* RetValue);
	void SetCheerfulItem(bool* RetValue);
	void SetKeyConfig_Cty(bool* RetValue);
	void SetKeyConfig_OfflineBattle(bool* RetValue);
	void SetIsMount(bool* RetValue);
	struct FSBPlayerClassKeyConfigData GetPlayerClassKeyConfigData();
	void ExecChangeKeyGuide();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"KeyGuide2_C">();
	}
	static class UKeyGuide2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKeyGuide2_C>();
	}
};
static_assert(alignof(UKeyGuide2_C) == 0x000008, "Wrong alignment on UKeyGuide2_C");
static_assert(sizeof(UKeyGuide2_C) == 0x000340, "Wrong size on UKeyGuide2_C");
static_assert(offsetof(UKeyGuide2_C, UberGraphFrame) == 0x000278, "Member 'UKeyGuide2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UKeyGuide2_C, Disp) == 0x000280, "Member 'UKeyGuide2_C::Disp' has a wrong offset!");
static_assert(offsetof(UKeyGuide2_C, KeyGuide_Gamepad2) == 0x000288, "Member 'UKeyGuide2_C::KeyGuide_Gamepad2' has a wrong offset!");
static_assert(offsetof(UKeyGuide2_C, KeyGuide_Gamepad2_CheerfulItem) == 0x000290, "Member 'UKeyGuide2_C::KeyGuide_Gamepad2_CheerfulItem' has a wrong offset!");
static_assert(offsetof(UKeyGuide2_C, KeyGuide_Gamepad2_cty) == 0x000298, "Member 'UKeyGuide2_C::KeyGuide_Gamepad2_cty' has a wrong offset!");
static_assert(offsetof(UKeyGuide2_C, KeyGuide_Gamepad2_Mount) == 0x0002A0, "Member 'UKeyGuide2_C::KeyGuide_Gamepad2_Mount' has a wrong offset!");
static_assert(offsetof(UKeyGuide2_C, KeyGuide_Gamepad2_OfflineBattle) == 0x0002A8, "Member 'UKeyGuide2_C::KeyGuide_Gamepad2_OfflineBattle' has a wrong offset!");
static_assert(offsetof(UKeyGuide2_C, KeyGuide_Mouse2) == 0x0002B0, "Member 'UKeyGuide2_C::KeyGuide_Mouse2' has a wrong offset!");
static_assert(offsetof(UKeyGuide2_C, KeyGuide_Mouse2_CheerfulItem) == 0x0002B8, "Member 'UKeyGuide2_C::KeyGuide_Mouse2_CheerfulItem' has a wrong offset!");
static_assert(offsetof(UKeyGuide2_C, KeyGuide_Mouse2_cty) == 0x0002C0, "Member 'UKeyGuide2_C::KeyGuide_Mouse2_cty' has a wrong offset!");
static_assert(offsetof(UKeyGuide2_C, KeyGuide_Mouse2_Mount) == 0x0002C8, "Member 'UKeyGuide2_C::KeyGuide_Mouse2_Mount' has a wrong offset!");
static_assert(offsetof(UKeyGuide2_C, KeyGuide_Mouse2_OfflineBattle) == 0x0002D0, "Member 'UKeyGuide2_C::KeyGuide_Mouse2_OfflineBattle' has a wrong offset!");
static_assert(offsetof(UKeyGuide2_C, bShowGamepad) == 0x0002D8, "Member 'UKeyGuide2_C::bShowGamepad' has a wrong offset!");
static_assert(offsetof(UKeyGuide2_C, bIsInitKeyGuideSettingDone) == 0x0002D9, "Member 'UKeyGuide2_C::bIsInitKeyGuideSettingDone' has a wrong offset!");
static_assert(offsetof(UKeyGuide2_C, CurrKeyGuideType) == 0x0002DA, "Member 'UKeyGuide2_C::CurrKeyGuideType' has a wrong offset!");
static_assert(offsetof(UKeyGuide2_C, IsDesignTime) == 0x0002DB, "Member 'UKeyGuide2_C::IsDesignTime' has a wrong offset!");
static_assert(offsetof(UKeyGuide2_C, AdvComponent) == 0x0002E0, "Member 'UKeyGuide2_C::AdvComponent' has a wrong offset!");
static_assert(offsetof(UKeyGuide2_C, IsMounting) == 0x0002E8, "Member 'UKeyGuide2_C::IsMounting' has a wrong offset!");
static_assert(offsetof(UKeyGuide2_C, IsCheerfulItem) == 0x0002E9, "Member 'UKeyGuide2_C::IsCheerfulItem' has a wrong offset!");
static_assert(offsetof(UKeyGuide2_C, OnChangeKeyGuideVisibilityEvent) == 0x0002F0, "Member 'UKeyGuide2_C::OnChangeKeyGuideVisibilityEvent' has a wrong offset!");
static_assert(offsetof(UKeyGuide2_C, VisibleAdventureRank) == 0x000300, "Member 'UKeyGuide2_C::VisibleAdventureRank' has a wrong offset!");
static_assert(offsetof(UKeyGuide2_C, OnChangeMountEvent) == 0x000308, "Member 'UKeyGuide2_C::OnChangeMountEvent' has a wrong offset!");
static_assert(offsetof(UKeyGuide2_C, As_SBPlayer_Character) == 0x000318, "Member 'UKeyGuide2_C::As_SBPlayer_Character' has a wrong offset!");
static_assert(offsetof(UKeyGuide2_C, OnCheerfulItemEvent) == 0x000320, "Member 'UKeyGuide2_C::OnCheerfulItemEvent' has a wrong offset!");
static_assert(offsetof(UKeyGuide2_C, TmpNextActiveWidget) == 0x000330, "Member 'UKeyGuide2_C::TmpNextActiveWidget' has a wrong offset!");
static_assert(offsetof(UKeyGuide2_C, SettingTimer) == 0x000338, "Member 'UKeyGuide2_C::SettingTimer' has a wrong offset!");

}


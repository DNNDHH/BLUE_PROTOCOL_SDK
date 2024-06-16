#pragma once

 

// Package: KeyGuide

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "EKeyGuideType_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass KeyGuide.KeyGuide_C
// 0x0078 (0x02F0 - 0x0278)
class UKeyGuide_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetSwitcher*                        Disp;                                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeyGuide_Gamepad_C*                    KeyGuide_Gamepad;                                  // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeyGuide_Gamepad_OfflineBattle_C*      KeyGuide_Gamepad_OfflineBattle;                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeyGuide_Mouse_C*                      KeyGuide_Mouse;                                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeyGuide_Mouse_OfflineBattle_C*        KeyGuide_Mouse_OfflineBattle;                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bShowGamepad;                                      // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EKeyGuideType                                 CurrKeyGuideType;                                  // 0x02A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDesignTime;                                      // 0x02AA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BBB[0x5];                                     // 0x02AB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerAdventurerComponent*           AdvComponent;                                      // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bVisible;                                          // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	ESkillActionPosition                          SkillActionPosition;                               // 0x02B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsMounting;                                        // 0x02BA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BBC[0x5];                                     // 0x02BB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnChangeKeyGuideVisibilityEvent;                   // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         VisibleAdventureRank;                              // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BBD[0x4];                                     // 0x02D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            TmpNextActiveWidget;                               // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           SettingTimer;                                      // 0x02E0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         VisibleAdventureRank_0;                            // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnChangeKeyGuideVisibilityEvent__DelegateSignature();
	void ExecuteUbergraph_KeyGuide(int32 EntryPoint);
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
	void ChangeKeyGuideVisibility(bool Param_IsVisible);
	void ChangeKeyGuide(EKeyGuideType InKeyGuideType);
	void Construct();
	void IsKeyGuideAuto(bool* bAuto);
	void SetTextVisible(ESkillActionPosition Param_SkillActionPosition, bool Param_IsVisible);
	void UpdateTextVisible();
	void SetKeyGuide_OfflineBattle();
	void SetKeyGuide_Mount();
	void SetKeyGuide_CheerfulItem();
	void ExecChangeKeyGuide();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"KeyGuide_C">();
	}
	static class UKeyGuide_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKeyGuide_C>();
	}
};
static_assert(alignof(UKeyGuide_C) == 0x000008, "Wrong alignment on UKeyGuide_C");
static_assert(sizeof(UKeyGuide_C) == 0x0002F0, "Wrong size on UKeyGuide_C");
static_assert(offsetof(UKeyGuide_C, UberGraphFrame) == 0x000278, "Member 'UKeyGuide_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UKeyGuide_C, Disp) == 0x000280, "Member 'UKeyGuide_C::Disp' has a wrong offset!");
static_assert(offsetof(UKeyGuide_C, KeyGuide_Gamepad) == 0x000288, "Member 'UKeyGuide_C::KeyGuide_Gamepad' has a wrong offset!");
static_assert(offsetof(UKeyGuide_C, KeyGuide_Gamepad_OfflineBattle) == 0x000290, "Member 'UKeyGuide_C::KeyGuide_Gamepad_OfflineBattle' has a wrong offset!");
static_assert(offsetof(UKeyGuide_C, KeyGuide_Mouse) == 0x000298, "Member 'UKeyGuide_C::KeyGuide_Mouse' has a wrong offset!");
static_assert(offsetof(UKeyGuide_C, KeyGuide_Mouse_OfflineBattle) == 0x0002A0, "Member 'UKeyGuide_C::KeyGuide_Mouse_OfflineBattle' has a wrong offset!");
static_assert(offsetof(UKeyGuide_C, bShowGamepad) == 0x0002A8, "Member 'UKeyGuide_C::bShowGamepad' has a wrong offset!");
static_assert(offsetof(UKeyGuide_C, CurrKeyGuideType) == 0x0002A9, "Member 'UKeyGuide_C::CurrKeyGuideType' has a wrong offset!");
static_assert(offsetof(UKeyGuide_C, IsDesignTime) == 0x0002AA, "Member 'UKeyGuide_C::IsDesignTime' has a wrong offset!");
static_assert(offsetof(UKeyGuide_C, AdvComponent) == 0x0002B0, "Member 'UKeyGuide_C::AdvComponent' has a wrong offset!");
static_assert(offsetof(UKeyGuide_C, bVisible) == 0x0002B8, "Member 'UKeyGuide_C::bVisible' has a wrong offset!");
static_assert(offsetof(UKeyGuide_C, SkillActionPosition) == 0x0002B9, "Member 'UKeyGuide_C::SkillActionPosition' has a wrong offset!");
static_assert(offsetof(UKeyGuide_C, IsMounting) == 0x0002BA, "Member 'UKeyGuide_C::IsMounting' has a wrong offset!");
static_assert(offsetof(UKeyGuide_C, OnChangeKeyGuideVisibilityEvent) == 0x0002C0, "Member 'UKeyGuide_C::OnChangeKeyGuideVisibilityEvent' has a wrong offset!");
static_assert(offsetof(UKeyGuide_C, VisibleAdventureRank) == 0x0002D0, "Member 'UKeyGuide_C::VisibleAdventureRank' has a wrong offset!");
static_assert(offsetof(UKeyGuide_C, TmpNextActiveWidget) == 0x0002D8, "Member 'UKeyGuide_C::TmpNextActiveWidget' has a wrong offset!");
static_assert(offsetof(UKeyGuide_C, SettingTimer) == 0x0002E0, "Member 'UKeyGuide_C::SettingTimer' has a wrong offset!");
static_assert(offsetof(UKeyGuide_C, VisibleAdventureRank_0) == 0x0002E8, "Member 'UKeyGuide_C::VisibleAdventureRank_0' has a wrong offset!");

}


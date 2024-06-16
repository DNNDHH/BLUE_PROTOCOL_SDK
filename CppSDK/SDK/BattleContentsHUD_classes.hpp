#pragma once

 

// Package: BattleContentsHUD

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "BattleContentsStruct_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BattleContentsHUD.BattleContentsHUD_C
// 0x00A0 (0x0370 - 0x02D0)
class UBattleContentsHUD_C final : public USBBattleContentsHUD
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           Arena;                                             // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           GameHUDPanel;                                      // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           PreviewPanel;                                      // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        PreviewSwitcher;                                   // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FBattleContentsStruct>          Types;                                             // 0x0300(0x0010)(Edit, BlueprintVisible)
	EBattleContentsHUDType                        HUDType;                                           // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6281[0x7];                                     // 0x0311(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftClassPtr<class UClass>                   Asset_Class;                                       // 0x0318(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         Counter;                                           // 0x0340(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6282[0x4];                                     // 0x0344(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             InittedHUD;                                        // 0x0348(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          CompLoad;                                          // 0x0358(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6283[0x7];                                     // 0x0359(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCharacterCardHUD_C*                    CharacterCardHUDBP;                                // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBDxBattleHUD*                         As_SBDx_Battle_HUD;                                // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void InittedHUD__DelegateSignature();
	void ExecuteUbergraph_BattleContentsHUD(int32 EntryPoint);
	void UnBindDxBattleStart();
	void DxBattleStartGameDelegate();
	void BindDxBattleStart();
	void TrySetupCharacterCard();
	void BndEvt__BattleContentsHUD_CharacterCardHUD_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature();
	void OnUnbind();
	void OnBind();
	void MakeHUDEvent(EBattleContentsHUDType Type);
	void CreatePreviewHUD();
	void ChangeVisible(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
	void PreConstruct(bool IsDesignTime);
	void OnLoaded_ECE1C1BA4E700CC4BA03EE9564CEDB35(TSubclassOf<class UObject> Loaded);
	void OnLoaded_6DF30A834378AD2EA639D79963E4E40F(TSubclassOf<class UObject> Loaded);
	void RemovePreview();
	void GetObj(EBattleContentsHUDType Type, TSoftClassPtr<class UClass>* Path);
	void SetupHUD();
	void OnInitialize();
	void OnTerminate();
	void GetNowContentsHUD(EBattleContentsHUDType* Type, class USBContentsHUDBase** HUD);
	void ClearPanel();
	class UUserWidget* GetCurrentHUD();
	void SetVisibilityHUD(bool TrueIsVisible);
	void CheckDxBattleStart(bool* TrueIsStarted);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BattleContentsHUD_C">();
	}
	static class UBattleContentsHUD_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBattleContentsHUD_C>();
	}
};
static_assert(alignof(UBattleContentsHUD_C) == 0x000008, "Wrong alignment on UBattleContentsHUD_C");
static_assert(sizeof(UBattleContentsHUD_C) == 0x000370, "Wrong size on UBattleContentsHUD_C");
static_assert(offsetof(UBattleContentsHUD_C, UberGraphFrame) == 0x0002D0, "Member 'UBattleContentsHUD_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBattleContentsHUD_C, Arena) == 0x0002D8, "Member 'UBattleContentsHUD_C::Arena' has a wrong offset!");
static_assert(offsetof(UBattleContentsHUD_C, CanvasPanel_0) == 0x0002E0, "Member 'UBattleContentsHUD_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UBattleContentsHUD_C, GameHUDPanel) == 0x0002E8, "Member 'UBattleContentsHUD_C::GameHUDPanel' has a wrong offset!");
static_assert(offsetof(UBattleContentsHUD_C, PreviewPanel) == 0x0002F0, "Member 'UBattleContentsHUD_C::PreviewPanel' has a wrong offset!");
static_assert(offsetof(UBattleContentsHUD_C, PreviewSwitcher) == 0x0002F8, "Member 'UBattleContentsHUD_C::PreviewSwitcher' has a wrong offset!");
static_assert(offsetof(UBattleContentsHUD_C, Types) == 0x000300, "Member 'UBattleContentsHUD_C::Types' has a wrong offset!");
static_assert(offsetof(UBattleContentsHUD_C, HUDType) == 0x000310, "Member 'UBattleContentsHUD_C::HUDType' has a wrong offset!");
static_assert(offsetof(UBattleContentsHUD_C, Asset_Class) == 0x000318, "Member 'UBattleContentsHUD_C::Asset_Class' has a wrong offset!");
static_assert(offsetof(UBattleContentsHUD_C, Counter) == 0x000340, "Member 'UBattleContentsHUD_C::Counter' has a wrong offset!");
static_assert(offsetof(UBattleContentsHUD_C, InittedHUD) == 0x000348, "Member 'UBattleContentsHUD_C::InittedHUD' has a wrong offset!");
static_assert(offsetof(UBattleContentsHUD_C, CompLoad) == 0x000358, "Member 'UBattleContentsHUD_C::CompLoad' has a wrong offset!");
static_assert(offsetof(UBattleContentsHUD_C, CharacterCardHUDBP) == 0x000360, "Member 'UBattleContentsHUD_C::CharacterCardHUDBP' has a wrong offset!");
static_assert(offsetof(UBattleContentsHUD_C, As_SBDx_Battle_HUD) == 0x000368, "Member 'UBattleContentsHUD_C::As_SBDx_Battle_HUD' has a wrong offset!");

}


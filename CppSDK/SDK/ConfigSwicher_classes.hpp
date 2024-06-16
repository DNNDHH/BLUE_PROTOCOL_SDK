#pragma once

 

// Package: ConfigSwicher

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Configurations_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ConfigSwicher.ConfigSwicher_C
// 0x0098 (0x0310 - 0x0278)
class UConfigSwicher_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHUDConfigMode_C*                       HUDConfigMode;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeyConfig_C*                           KeyConfig;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switcher;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EConfigurations                               NowConfig;                                         // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7CD5[0x7];                                     // 0x0299(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             SuccessChanged;                                    // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             FailChanged;                                       // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	EConfigurations                               NextConfig;                                        // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7CD6[0x7];                                     // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Dialog_C*                           YnDialog;                                          // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Dialog_C*                           NothingChange;                                     // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             RequestParentFocus;                                // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnHasChenged;                                      // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class USBOptionChildBase*                     General;                                           // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOptionChildBase*                     Sound;                                             // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOptionChildBase*                     Graphics;                                          // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void InitializeCS();
	void GenerateConfigs();
	void YesNoCheckResult(bool bIsYes);
	void Get_Widget(EConfigurations NectConfig, class UWidget** Widget);
	void SetCloseState(bool Close);
	void IsClosed(bool* Param_IsClosed);
	void IsCommandKeyAsNone(bool* bNone);
	void IsChanged(bool* Param_IsChanged);
	void Construct();
	void ChangeConfigMode(EConfigurations Configurations);
	void Changed(bool bConfigChanged);
	void YesNoCheck(EDialogResult Result);
	void CheckChanged();
	void IsNone(EDialogResult Result);
	void LocalSave();
	void BndEvt__KeyConfig_K2Node_ComponentBoundEvent_1_RequestParentFocus__DelegateSignature();
	void SetTitleMode(bool bTitleMode);
	void ShowError_None();
	void ExecuteUbergraph_ConfigSwicher(int32 EntryPoint);
	void OnHasChenged__DelegateSignature();
	void RequestParentFocus__DelegateSignature();
	void FailChanged__DelegateSignature();
	void SuccessChanged__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ConfigSwicher_C">();
	}
	static class UConfigSwicher_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConfigSwicher_C>();
	}
};
static_assert(alignof(UConfigSwicher_C) == 0x000008, "Wrong alignment on UConfigSwicher_C");
static_assert(sizeof(UConfigSwicher_C) == 0x000310, "Wrong size on UConfigSwicher_C");
static_assert(offsetof(UConfigSwicher_C, UberGraphFrame) == 0x000278, "Member 'UConfigSwicher_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UConfigSwicher_C, HUDConfigMode) == 0x000280, "Member 'UConfigSwicher_C::HUDConfigMode' has a wrong offset!");
static_assert(offsetof(UConfigSwicher_C, KeyConfig) == 0x000288, "Member 'UConfigSwicher_C::KeyConfig' has a wrong offset!");
static_assert(offsetof(UConfigSwicher_C, Switcher) == 0x000290, "Member 'UConfigSwicher_C::Switcher' has a wrong offset!");
static_assert(offsetof(UConfigSwicher_C, NowConfig) == 0x000298, "Member 'UConfigSwicher_C::NowConfig' has a wrong offset!");
static_assert(offsetof(UConfigSwicher_C, SuccessChanged) == 0x0002A0, "Member 'UConfigSwicher_C::SuccessChanged' has a wrong offset!");
static_assert(offsetof(UConfigSwicher_C, FailChanged) == 0x0002B0, "Member 'UConfigSwicher_C::FailChanged' has a wrong offset!");
static_assert(offsetof(UConfigSwicher_C, NextConfig) == 0x0002C0, "Member 'UConfigSwicher_C::NextConfig' has a wrong offset!");
static_assert(offsetof(UConfigSwicher_C, YnDialog) == 0x0002C8, "Member 'UConfigSwicher_C::YnDialog' has a wrong offset!");
static_assert(offsetof(UConfigSwicher_C, NothingChange) == 0x0002D0, "Member 'UConfigSwicher_C::NothingChange' has a wrong offset!");
static_assert(offsetof(UConfigSwicher_C, RequestParentFocus) == 0x0002D8, "Member 'UConfigSwicher_C::RequestParentFocus' has a wrong offset!");
static_assert(offsetof(UConfigSwicher_C, OnHasChenged) == 0x0002E8, "Member 'UConfigSwicher_C::OnHasChenged' has a wrong offset!");
static_assert(offsetof(UConfigSwicher_C, General) == 0x0002F8, "Member 'UConfigSwicher_C::General' has a wrong offset!");
static_assert(offsetof(UConfigSwicher_C, Sound) == 0x000300, "Member 'UConfigSwicher_C::Sound' has a wrong offset!");
static_assert(offsetof(UConfigSwicher_C, Graphics) == 0x000308, "Member 'UConfigSwicher_C::Graphics' has a wrong offset!");

}


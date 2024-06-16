#pragma once

 

// Package: OptionVFXVisibleSelector

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass OptionVFXVisibleSelector.OptionVFXVisibleSelector_C
// 0x0038 (0x02B0 - 0x0278)
class UOptionVFXVisibleSelector_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Bdr_BlockerAllVisible;                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Bdr_BlockerCustomSetting;                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                              CB_AllVisible;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                              CB_CustomSetting;                                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_SelectorBox;                                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Type;                                              // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void IsSkipTableRegisted(ESBBattleEffectVisibleCategory Category, ESBBattleEffectVisibleType Param_Type, bool* IsRegisted);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void GenerateVFXItems();
	void UpdateVisible(ESBBattleEffectVisibleCategory Category, ESBBattleEffectVisibleType Param_Type, bool Vidsible);
	void BndEvt__CB_AllVisible_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__CB_CustomSetting_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void InitializeCheck();
	void Destruct();
	void ExecuteUbergraph_OptionVFXVisibleSelector(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"OptionVFXVisibleSelector_C">();
	}
	static class UOptionVFXVisibleSelector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOptionVFXVisibleSelector_C>();
	}
};
static_assert(alignof(UOptionVFXVisibleSelector_C) == 0x000008, "Wrong alignment on UOptionVFXVisibleSelector_C");
static_assert(sizeof(UOptionVFXVisibleSelector_C) == 0x0002B0, "Wrong size on UOptionVFXVisibleSelector_C");
static_assert(offsetof(UOptionVFXVisibleSelector_C, UberGraphFrame) == 0x000278, "Member 'UOptionVFXVisibleSelector_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UOptionVFXVisibleSelector_C, Bdr_BlockerAllVisible) == 0x000280, "Member 'UOptionVFXVisibleSelector_C::Bdr_BlockerAllVisible' has a wrong offset!");
static_assert(offsetof(UOptionVFXVisibleSelector_C, Bdr_BlockerCustomSetting) == 0x000288, "Member 'UOptionVFXVisibleSelector_C::Bdr_BlockerCustomSetting' has a wrong offset!");
static_assert(offsetof(UOptionVFXVisibleSelector_C, CB_AllVisible) == 0x000290, "Member 'UOptionVFXVisibleSelector_C::CB_AllVisible' has a wrong offset!");
static_assert(offsetof(UOptionVFXVisibleSelector_C, CB_CustomSetting) == 0x000298, "Member 'UOptionVFXVisibleSelector_C::CB_CustomSetting' has a wrong offset!");
static_assert(offsetof(UOptionVFXVisibleSelector_C, VB_SelectorBox) == 0x0002A0, "Member 'UOptionVFXVisibleSelector_C::VB_SelectorBox' has a wrong offset!");
static_assert(offsetof(UOptionVFXVisibleSelector_C, Type) == 0x0002A8, "Member 'UOptionVFXVisibleSelector_C::Type' has a wrong offset!");

}


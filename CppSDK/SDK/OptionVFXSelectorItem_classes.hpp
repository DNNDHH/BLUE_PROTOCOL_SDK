#pragma once

 

// Package: OptionVFXSelectorItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass OptionVFXSelectorItem.OptionVFXSelectorItem_C
// 0x0038 (0x02B0 - 0x0278)
class UOptionVFXSelectorItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBCheckBox_C*                          CB_Select;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                Spc_Indent;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_OptionName;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             UpdateVisible;                                     // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	ESBBattleEffectVisibleType                    EffectType;                                        // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	ESBBattleEffectVisibleCategory                EffectCategory;                                    // 0x02A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          CanCustomSetting;                                  // 0x02AA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void BndEvt__CB_Select_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void OnChange(const ESBBattleEffectVisibleCategory Category, const ESBBattleEffectVisibleType Type, bool Visible);
	void OnCustomMode_Change(const bool bCustom);
	void PreConstruct(bool IsDesignTime);
	void Initialize();
	void Construct();
	void ExecuteUbergraph_OptionVFXSelectorItem(int32 EntryPoint);
	void UpdateVisible__DelegateSignature(ESBBattleEffectVisibleCategory Category, ESBBattleEffectVisibleType Type, bool Vidsible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"OptionVFXSelectorItem_C">();
	}
	static class UOptionVFXSelectorItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOptionVFXSelectorItem_C>();
	}
};
static_assert(alignof(UOptionVFXSelectorItem_C) == 0x000008, "Wrong alignment on UOptionVFXSelectorItem_C");
static_assert(sizeof(UOptionVFXSelectorItem_C) == 0x0002B0, "Wrong size on UOptionVFXSelectorItem_C");
static_assert(offsetof(UOptionVFXSelectorItem_C, UberGraphFrame) == 0x000278, "Member 'UOptionVFXSelectorItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UOptionVFXSelectorItem_C, CB_Select) == 0x000280, "Member 'UOptionVFXSelectorItem_C::CB_Select' has a wrong offset!");
static_assert(offsetof(UOptionVFXSelectorItem_C, Spc_Indent) == 0x000288, "Member 'UOptionVFXSelectorItem_C::Spc_Indent' has a wrong offset!");
static_assert(offsetof(UOptionVFXSelectorItem_C, Txt_OptionName) == 0x000290, "Member 'UOptionVFXSelectorItem_C::Txt_OptionName' has a wrong offset!");
static_assert(offsetof(UOptionVFXSelectorItem_C, UpdateVisible) == 0x000298, "Member 'UOptionVFXSelectorItem_C::UpdateVisible' has a wrong offset!");
static_assert(offsetof(UOptionVFXSelectorItem_C, EffectType) == 0x0002A8, "Member 'UOptionVFXSelectorItem_C::EffectType' has a wrong offset!");
static_assert(offsetof(UOptionVFXSelectorItem_C, EffectCategory) == 0x0002A9, "Member 'UOptionVFXSelectorItem_C::EffectCategory' has a wrong offset!");
static_assert(offsetof(UOptionVFXSelectorItem_C, CanCustomSetting) == 0x0002AA, "Member 'UOptionVFXSelectorItem_C::CanCustomSetting' has a wrong offset!");

}


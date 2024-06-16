#pragma once

 

// Package: KeyConfig_List

#include "Basic.hpp"

#include "Config_KeyConfigItemType_structs.hpp"
#include "KeyConfigType_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"
#include "Config_KeyconfigItems_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass KeyConfig_List.KeyConfig_List_C
// 0x0098 (0x0310 - 0x0278)
class UKeyConfig_List_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                             Scroll;                                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FKeyConfigType>                 ConfigBox;                                         // 0x0288(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UUserWidget*>                    Childs;                                            // 0x0298(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_             ClickedKeyChangeWait;                              // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             ClickedPadChangeWait;                              // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             SliderChange;                                      // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             ChangeRadio;                                       // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UDataTable*                             KeyConfigDataTable;                                // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             BookmarkDeletes;                                   // 0x02F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UKeyConfig_Slider_C*>            Sliders;                                           // 0x0300(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void ResetSliderChanged();
	void UpdateData();
	void CalcTop(int32 Limit, float* Top);
	void ResetInputModes();
	void GetNoneTop(class UKeyConfig_ConfigSlot_C** AsKey_Config_Config_Slot, bool* bChanged);
	void HasNone(bool* bHasNone);
	void GetChangedTop(class UUserWidget** Target, bool* bChanged);
	void ApplyKeyConfigDatas(struct FSBPlayerClassKeyConfigData& SBPlayerClassKeyConfigData);
	void CreateChildWidget(const struct FKeyConfigType& ConfigureType, class UUserWidget** Child, EConfig_KeyConfigItemType* ItemType);
	void ApplyPadKeyConfig(const struct FSBGamePadSettings& SBGamePadSettings);
	void ApplyKeyboardMouseData(const struct FSBKeyboardSettings& SBKeyboardSettings, const struct FSBMouseSettings& SBMouseSettings);
	void CheckChangedKey(const struct FSBPlayerClassKeyConfigData& Base, const struct FSBPlayerClassKeyConfigData& Now);
	void OnChangeSlider(int32 Value, float Ratio, EConfig_KeyconfigItems Type, class UKeyConfig_Slider_C* Target);
	void OnChangeRadio(int32 Param_Index, EConfig_KeyconfigItems Type);
	void ApplySliders(const struct FSBPlayerClassKeyConfigData& KeyConfigData);
	void ApplyRadio(const struct FSBPlayerClassKeyConfigData& KeyConfigData);
	void CheckChangedSlider(class UKeyConfig_Slider_C* Target, const struct FSBPlayerClassKeyConfigData& Base, const struct FSBPlayerClassKeyConfigData& Now);
	void OnDeleteBookmarks();
	void PreConstruct(bool IsDesignTime);
	void KeyChangeWait(EConfig_KeyconfigItems KeyType, class UKeyConfig_ConfigSlot_C* Caller);
	void PadChangeWait(EConfig_KeyconfigItems KeyType, class UKeyConfig_ConfigSlot_C* Caller);
	void ScrollChangeTop();
	void ScrollNoneTop();
	void ExecuteUbergraph_KeyConfig_List(int32 EntryPoint);
	void BookmarkDeletes__DelegateSignature();
	void ChangeRadio__DelegateSignature(int32 Param_Index, EConfig_KeyconfigItems Type);
	void SliderChange__DelegateSignature(int32 Value, float Ratio, EConfig_KeyconfigItems Type, class UKeyConfig_Slider_C* Target);
	void ClickedPadChangeWait__DelegateSignature(EConfig_KeyconfigItems KeyType);
	void ClickedKeyChangeWait__DelegateSignature(EConfig_KeyconfigItems KeyType);

	void GetNoAssignedItemTop(const struct FSBPlayerClassKeyConfigData& KeyConfig, EConfig_KeyconfigItems* InputType) const;
	void ContainsNoAssignedKey(const struct FSBPlayerClassKeyConfigData& KeyConfig, bool* Assigned) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"KeyConfig_List_C">();
	}
	static class UKeyConfig_List_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKeyConfig_List_C>();
	}
};
static_assert(alignof(UKeyConfig_List_C) == 0x000008, "Wrong alignment on UKeyConfig_List_C");
static_assert(sizeof(UKeyConfig_List_C) == 0x000310, "Wrong size on UKeyConfig_List_C");
static_assert(offsetof(UKeyConfig_List_C, UberGraphFrame) == 0x000278, "Member 'UKeyConfig_List_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UKeyConfig_List_C, Scroll) == 0x000280, "Member 'UKeyConfig_List_C::Scroll' has a wrong offset!");
static_assert(offsetof(UKeyConfig_List_C, ConfigBox) == 0x000288, "Member 'UKeyConfig_List_C::ConfigBox' has a wrong offset!");
static_assert(offsetof(UKeyConfig_List_C, Childs) == 0x000298, "Member 'UKeyConfig_List_C::Childs' has a wrong offset!");
static_assert(offsetof(UKeyConfig_List_C, ClickedKeyChangeWait) == 0x0002A8, "Member 'UKeyConfig_List_C::ClickedKeyChangeWait' has a wrong offset!");
static_assert(offsetof(UKeyConfig_List_C, ClickedPadChangeWait) == 0x0002B8, "Member 'UKeyConfig_List_C::ClickedPadChangeWait' has a wrong offset!");
static_assert(offsetof(UKeyConfig_List_C, SliderChange) == 0x0002C8, "Member 'UKeyConfig_List_C::SliderChange' has a wrong offset!");
static_assert(offsetof(UKeyConfig_List_C, ChangeRadio) == 0x0002D8, "Member 'UKeyConfig_List_C::ChangeRadio' has a wrong offset!");
static_assert(offsetof(UKeyConfig_List_C, KeyConfigDataTable) == 0x0002E8, "Member 'UKeyConfig_List_C::KeyConfigDataTable' has a wrong offset!");
static_assert(offsetof(UKeyConfig_List_C, BookmarkDeletes) == 0x0002F0, "Member 'UKeyConfig_List_C::BookmarkDeletes' has a wrong offset!");
static_assert(offsetof(UKeyConfig_List_C, Sliders) == 0x000300, "Member 'UKeyConfig_List_C::Sliders' has a wrong offset!");

}


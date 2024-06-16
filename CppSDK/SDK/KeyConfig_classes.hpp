#pragma once

 

// Package: KeyConfig

#include "Basic.hpp"

#include "Config_ValueSetting_structs.hpp"
#include "Engine_structs.hpp"
#include "Config_KeyconfigItems_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass KeyConfig.KeyConfig_C
// 0x04B0 (0x0728 - 0x0278)
class UKeyConfig_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCmnBtn17_C*                            ApplyButton;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn17_C*                            CancelButton;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBComboBoxCmn01_C*                     Cmb_ClassSelect;                                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeyConfig_List_C*                      KeyConfigList;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn17_C*                            ReInitButton;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn17_C*                            ResetButton;                                       // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class FString, ESBClassType>             ClassTypes;                                        // 0x02B8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	ESBClassType                                  NowClass;                                          // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5BCF[0x7];                                     // 0x0309(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerClassKeyConfigData            KeyConfigData;                                     // 0x0310(0x01C8)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSBPlayerClassKeyConfigData            InitKeyConfigData;                                 // 0x04D8(0x01C8)(Edit, BlueprintVisible, DisableEditOnInstance)
	EConfig_KeyconfigItems                        InputType;                                         // 0x06A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5BD0[0x7];                                     // 0x06A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Dialog_C*                           YesNoDialog;                                       // 0x06A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  NextClassType;                                     // 0x06B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5BD1[0x7];                                     // 0x06B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 NextClassName;                                     // 0x06B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 CurrClassName;                                     // 0x06C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UOverKeyInput_C*                        KeyInput;                                          // 0x06D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsCommonData;                                     // 0x06E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsAllReset;                                       // 0x06E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BD2[0x6];                                     // 0x06E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Dialog_C*                           ErrorDisp;                                         // 0x06E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             RequestParentFocus;                                // 0x06F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsWaitSaved;                                       // 0x0700(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsResetDropDown;                                   // 0x0701(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BD3[0x2];                                     // 0x0702(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FConfig_ValueSetting                   ConfigValueSettings;                               // 0x0704(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsKeyConfig;                                       // 0x0724(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          CloseFlag;                                         // 0x0725(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_KeyConfig(int32 EntryPoint);
	void RequestParentFocus__DelegateSignature();
	void IfShowWarnMsg(const struct FKey& InKey);
	void OnDeleteBookmarks();
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature();
	void BndEvt__ApplyButton_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature();
	void BndEvt__ReInitButton_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
	void BndEvt__ResetButton_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
	void RequestUnassignableKeyMsg(const struct FKey& Key);
	void PlayKeySetSound(bool IsEnableKey);
	void OnSavedResetKeyConfig(bool Result);
	void Cansel_Change(EDialogResult Result);
	void RadioButton(int32 Param_Index, EConfig_KeyconfigItems Type);
	void OnSliderChange(int32 Value, float Ratio, EConfig_KeyconfigItems Type, class UKeyConfig_Slider_C* Target);
	void Destruct();
	void Result_Agreement(EDialogResult Result);
	void SaveAgreementCheck(int32 InTextID);
	void Checked(EDialogResult Result);
	void UIBlock(bool bLock);
	void IsInitializable(EDialogResult Result);
	void KeyInputed_KeyMouse(const struct FKey& DownKey);
	void PadChange(EConfig_KeyconfigItems KeyType);
	void KeyInputed_Pad(const struct FKey& DownKey);
	void KeyChange(EConfig_KeyconfigItems KeyType);
	void LoadKeyConfigData();
	void ApplySettings();
	void OnDropDownSelected(ESBClassType NextClass);
	void SelectChanged(const class FString& SelectedItem, ESelectInfo SelectionType);
	void Construct();
	void ApplySlider(class UKeyConfig_Slider_C* Target);
	void ShowErrorCmdsNone();
	void CheckChanged();
	void SaveKeyConfigData();
	void ApplyList();
	void GenerateComboBox(class FString* LastRet1);
	void ResetKeyConfig();
	void SetGamePadSetting(struct FSBPlayerClassKeyConfigData& SBPlayerClassKeyConfigData, EConfig_KeyconfigItems Selection, const struct FKey& DownKey);
	void SetKeyBoardSetting(struct FSBPlayerClassKeyConfigData& SBPlayerClassKeyConfigData, EConfig_KeyconfigItems Selection, const struct FKey& DownKey);
	void SetMouseSetting(struct FSBPlayerClassKeyConfigData& SBPlayerClassKeyConfigData, EConfig_KeyconfigItems Selection, const struct FKey& DownKey);
	void IsChanged(bool* bChanged);
	bool IsNothingTypeMouse();
	void IsNothingTypePad();
	void IsCommandKeyAsNone(bool* bNone);
	bool IsModify();
	class UWidget* On_ClassSelect_GenerateWidget_0(const class FString& Item);
	void IsDispNoneDialog(bool* IsNeedNoneDisp);
	class UWidget* On_Cmb_ClassSelect_GenerateWidget_0(const class FString& Item);
	void ConvertSliderValueToRealValue(float InValueRate, struct FFloatRange& InValueRange, float* OutValue);
	void GetGamePadCameraSpeedRateYaw(float InValueRate, float* OutValue);
	void GetGamePadCameraSpeedRatePitch(float InValueRate, float* OutValue);
	void IsClosed(bool* Param_IsClosed);
	void SetCloseState(bool Close);

	void GetNoAssignedTextId(int32* TextId) const;
	void IsWaitSaveing_(bool* IsWaiting) const;
	bool HasUnassinableSetKey() const;
	void Get_Slot_Data_Table(class UDataTable** Table) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"KeyConfig_C">();
	}
	static class UKeyConfig_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKeyConfig_C>();
	}
};
static_assert(alignof(UKeyConfig_C) == 0x000008, "Wrong alignment on UKeyConfig_C");
static_assert(sizeof(UKeyConfig_C) == 0x000728, "Wrong size on UKeyConfig_C");
static_assert(offsetof(UKeyConfig_C, UberGraphFrame) == 0x000278, "Member 'UKeyConfig_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UKeyConfig_C, ApplyButton) == 0x000280, "Member 'UKeyConfig_C::ApplyButton' has a wrong offset!");
static_assert(offsetof(UKeyConfig_C, CancelButton) == 0x000288, "Member 'UKeyConfig_C::CancelButton' has a wrong offset!");
static_assert(offsetof(UKeyConfig_C, Cmb_ClassSelect) == 0x000290, "Member 'UKeyConfig_C::Cmb_ClassSelect' has a wrong offset!");
static_assert(offsetof(UKeyConfig_C, KeyConfigList) == 0x000298, "Member 'UKeyConfig_C::KeyConfigList' has a wrong offset!");
static_assert(offsetof(UKeyConfig_C, ReInitButton) == 0x0002A0, "Member 'UKeyConfig_C::ReInitButton' has a wrong offset!");
static_assert(offsetof(UKeyConfig_C, ResetButton) == 0x0002A8, "Member 'UKeyConfig_C::ResetButton' has a wrong offset!");
static_assert(offsetof(UKeyConfig_C, UIBlocker) == 0x0002B0, "Member 'UKeyConfig_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UKeyConfig_C, ClassTypes) == 0x0002B8, "Member 'UKeyConfig_C::ClassTypes' has a wrong offset!");
static_assert(offsetof(UKeyConfig_C, NowClass) == 0x000308, "Member 'UKeyConfig_C::NowClass' has a wrong offset!");
static_assert(offsetof(UKeyConfig_C, KeyConfigData) == 0x000310, "Member 'UKeyConfig_C::KeyConfigData' has a wrong offset!");
static_assert(offsetof(UKeyConfig_C, InitKeyConfigData) == 0x0004D8, "Member 'UKeyConfig_C::InitKeyConfigData' has a wrong offset!");
static_assert(offsetof(UKeyConfig_C, InputType) == 0x0006A0, "Member 'UKeyConfig_C::InputType' has a wrong offset!");
static_assert(offsetof(UKeyConfig_C, YesNoDialog) == 0x0006A8, "Member 'UKeyConfig_C::YesNoDialog' has a wrong offset!");
static_assert(offsetof(UKeyConfig_C, NextClassType) == 0x0006B0, "Member 'UKeyConfig_C::NextClassType' has a wrong offset!");
static_assert(offsetof(UKeyConfig_C, NextClassName) == 0x0006B8, "Member 'UKeyConfig_C::NextClassName' has a wrong offset!");
static_assert(offsetof(UKeyConfig_C, CurrClassName) == 0x0006C8, "Member 'UKeyConfig_C::CurrClassName' has a wrong offset!");
static_assert(offsetof(UKeyConfig_C, KeyInput) == 0x0006D8, "Member 'UKeyConfig_C::KeyInput' has a wrong offset!");
static_assert(offsetof(UKeyConfig_C, bIsCommonData) == 0x0006E0, "Member 'UKeyConfig_C::bIsCommonData' has a wrong offset!");
static_assert(offsetof(UKeyConfig_C, bIsAllReset) == 0x0006E1, "Member 'UKeyConfig_C::bIsAllReset' has a wrong offset!");
static_assert(offsetof(UKeyConfig_C, ErrorDisp) == 0x0006E8, "Member 'UKeyConfig_C::ErrorDisp' has a wrong offset!");
static_assert(offsetof(UKeyConfig_C, RequestParentFocus) == 0x0006F0, "Member 'UKeyConfig_C::RequestParentFocus' has a wrong offset!");
static_assert(offsetof(UKeyConfig_C, IsWaitSaved) == 0x000700, "Member 'UKeyConfig_C::IsWaitSaved' has a wrong offset!");
static_assert(offsetof(UKeyConfig_C, IsResetDropDown) == 0x000701, "Member 'UKeyConfig_C::IsResetDropDown' has a wrong offset!");
static_assert(offsetof(UKeyConfig_C, ConfigValueSettings) == 0x000704, "Member 'UKeyConfig_C::ConfigValueSettings' has a wrong offset!");
static_assert(offsetof(UKeyConfig_C, IsKeyConfig) == 0x000724, "Member 'UKeyConfig_C::IsKeyConfig' has a wrong offset!");
static_assert(offsetof(UKeyConfig_C, CloseFlag) == 0x000725, "Member 'UKeyConfig_C::CloseFlag' has a wrong offset!");

}


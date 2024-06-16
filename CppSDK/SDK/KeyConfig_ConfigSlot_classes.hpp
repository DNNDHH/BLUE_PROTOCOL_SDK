#pragma once

 

// Package: KeyConfig_ConfigSlot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "KeyInputMode_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "Config_KeyconfigItems_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass KeyConfig_ConfigSlot.KeyConfig_ConfigSlot_C
// 0x00C8 (0x0340 - 0x0278)
class UKeyConfig_ConfigSlot_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnmBtn2In;                                         // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnmBtn1In;                                         // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    ActionName;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                ChangedBoader;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            GamePadInput_Btn;                                  // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    GamePadInput_Lbl;                                  // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            KeyMouseInput_Btn;                                 // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    KeyMouseInput_Lbl;                                 // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EKeyInputMode                                 InputMode;                                         // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61DD[0x7];                                     // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             StartWaitInput;                                    // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             ButtonClicked_Key;                                 // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             ButtonClicked_Pad;                                 // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	EConfig_KeyconfigItems                        KeyType;                                           // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bChanged;                                          // 0x02F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bNone;                                             // 0x02FA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61DE[0x5];                                     // 0x02FB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                NormalImage;                                       // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                ChangedImage;                                      // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                SelectImage;                                       // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                DisableImage;                                      // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                HoverdImage;                                       // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 TempBookmark;                                      // 0x0328(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          bBookmark;                                         // 0x0338(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ConvertBookMark(EConfig_KeyconfigItems ConfigType, bool* bIsValid, ESBBookMarkerSlot* Param_Slot);
	void IsBookMarks(EConfig_KeyconfigItems KeyConfigItems, bool* IsBookMark);
	void GetItemStringId(EConfig_KeyconfigItems Type, int32* TextId);
	void ResetInputMode();
	void BndEvt__KeyMouseInput_Btn_K2Node_ComponentBoundEvent_72_OnButtonClickedEvent__DelegateSignature();
	void SetData(const struct FKeyConfigType& ConfigData);
	void CheckChanged(bool Param_bChanged);
	void SetKeyMouse(ESBKeyConfigKeyboardKey KeyboardKey, ESBKeyConfigMouseKey MouseKey);
	void SetGamePadButton(ESBKeyConfigGamepadKey Selection, bool bSwichLR);
	void KeyMouseChanged(bool Param_KeyMouseChanged);
	void PadChanged(bool Param_PadChanged);
	void ApplySlateWidget();
	void BndEvt__GamePadInput_Btn_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature();
	void SetRequireSetting(bool bRequire);
	void ExecuteUbergraph_KeyConfig_ConfigSlot(int32 EntryPoint);
	void ButtonClicked_Pad__DelegateSignature(EConfig_KeyconfigItems Param_KeyType, class UKeyConfig_ConfigSlot_C* Caller);
	void ButtonClicked_Key__DelegateSignature(EConfig_KeyconfigItems Param_KeyType, class UKeyConfig_ConfigSlot_C* Caller);
	void StartWaitInput__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"KeyConfig_ConfigSlot_C">();
	}
	static class UKeyConfig_ConfigSlot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKeyConfig_ConfigSlot_C>();
	}
};
static_assert(alignof(UKeyConfig_ConfigSlot_C) == 0x000008, "Wrong alignment on UKeyConfig_ConfigSlot_C");
static_assert(sizeof(UKeyConfig_ConfigSlot_C) == 0x000340, "Wrong size on UKeyConfig_ConfigSlot_C");
static_assert(offsetof(UKeyConfig_ConfigSlot_C, UberGraphFrame) == 0x000278, "Member 'UKeyConfig_ConfigSlot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UKeyConfig_ConfigSlot_C, AnmBtn2In) == 0x000280, "Member 'UKeyConfig_ConfigSlot_C::AnmBtn2In' has a wrong offset!");
static_assert(offsetof(UKeyConfig_ConfigSlot_C, AnmBtn1In) == 0x000288, "Member 'UKeyConfig_ConfigSlot_C::AnmBtn1In' has a wrong offset!");
static_assert(offsetof(UKeyConfig_ConfigSlot_C, ActionName) == 0x000290, "Member 'UKeyConfig_ConfigSlot_C::ActionName' has a wrong offset!");
static_assert(offsetof(UKeyConfig_ConfigSlot_C, ChangedBoader) == 0x000298, "Member 'UKeyConfig_ConfigSlot_C::ChangedBoader' has a wrong offset!");
static_assert(offsetof(UKeyConfig_ConfigSlot_C, GamePadInput_Btn) == 0x0002A0, "Member 'UKeyConfig_ConfigSlot_C::GamePadInput_Btn' has a wrong offset!");
static_assert(offsetof(UKeyConfig_ConfigSlot_C, GamePadInput_Lbl) == 0x0002A8, "Member 'UKeyConfig_ConfigSlot_C::GamePadInput_Lbl' has a wrong offset!");
static_assert(offsetof(UKeyConfig_ConfigSlot_C, KeyMouseInput_Btn) == 0x0002B0, "Member 'UKeyConfig_ConfigSlot_C::KeyMouseInput_Btn' has a wrong offset!");
static_assert(offsetof(UKeyConfig_ConfigSlot_C, KeyMouseInput_Lbl) == 0x0002B8, "Member 'UKeyConfig_ConfigSlot_C::KeyMouseInput_Lbl' has a wrong offset!");
static_assert(offsetof(UKeyConfig_ConfigSlot_C, InputMode) == 0x0002C0, "Member 'UKeyConfig_ConfigSlot_C::InputMode' has a wrong offset!");
static_assert(offsetof(UKeyConfig_ConfigSlot_C, StartWaitInput) == 0x0002C8, "Member 'UKeyConfig_ConfigSlot_C::StartWaitInput' has a wrong offset!");
static_assert(offsetof(UKeyConfig_ConfigSlot_C, ButtonClicked_Key) == 0x0002D8, "Member 'UKeyConfig_ConfigSlot_C::ButtonClicked_Key' has a wrong offset!");
static_assert(offsetof(UKeyConfig_ConfigSlot_C, ButtonClicked_Pad) == 0x0002E8, "Member 'UKeyConfig_ConfigSlot_C::ButtonClicked_Pad' has a wrong offset!");
static_assert(offsetof(UKeyConfig_ConfigSlot_C, KeyType) == 0x0002F8, "Member 'UKeyConfig_ConfigSlot_C::KeyType' has a wrong offset!");
static_assert(offsetof(UKeyConfig_ConfigSlot_C, bChanged) == 0x0002F9, "Member 'UKeyConfig_ConfigSlot_C::bChanged' has a wrong offset!");
static_assert(offsetof(UKeyConfig_ConfigSlot_C, bNone) == 0x0002FA, "Member 'UKeyConfig_ConfigSlot_C::bNone' has a wrong offset!");
static_assert(offsetof(UKeyConfig_ConfigSlot_C, NormalImage) == 0x000300, "Member 'UKeyConfig_ConfigSlot_C::NormalImage' has a wrong offset!");
static_assert(offsetof(UKeyConfig_ConfigSlot_C, ChangedImage) == 0x000308, "Member 'UKeyConfig_ConfigSlot_C::ChangedImage' has a wrong offset!");
static_assert(offsetof(UKeyConfig_ConfigSlot_C, SelectImage) == 0x000310, "Member 'UKeyConfig_ConfigSlot_C::SelectImage' has a wrong offset!");
static_assert(offsetof(UKeyConfig_ConfigSlot_C, DisableImage) == 0x000318, "Member 'UKeyConfig_ConfigSlot_C::DisableImage' has a wrong offset!");
static_assert(offsetof(UKeyConfig_ConfigSlot_C, HoverdImage) == 0x000320, "Member 'UKeyConfig_ConfigSlot_C::HoverdImage' has a wrong offset!");
static_assert(offsetof(UKeyConfig_ConfigSlot_C, TempBookmark) == 0x000328, "Member 'UKeyConfig_ConfigSlot_C::TempBookmark' has a wrong offset!");
static_assert(offsetof(UKeyConfig_ConfigSlot_C, bBookmark) == 0x000338, "Member 'UKeyConfig_ConfigSlot_C::bBookmark' has a wrong offset!");

}


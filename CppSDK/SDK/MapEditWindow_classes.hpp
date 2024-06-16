#pragma once

 

// Package: MapEditWindow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MapEditWindow.MapEditWindow_C
// 0x00E0 (0x0358 - 0x0278)
class UMapEditWindow_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Out;                                               // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In;                                                // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USBTextButtonCmnBtn27_C*                BtnReset;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose02_C*                          CmnClose02;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMapEditSlider_C*                       SliderBG;                                          // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMapEditSlider_C*                       SliderIcon;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMapEditSlider_C*                       SliderZoom;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMapEditWindowPin_C*                    WindowPin;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMapEditWindowSize_C*                   WindowSize;                                        // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnBGAlphaChanged;                                  // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnIconSizeChanged;                                 // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnWindowSizeChanged;                               // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnRangeScaleChanged;                               // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnPinVisible;                                      // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnReset;                                           // 0x0318(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnInAnim;                                          // 0x0328(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnOutAnim;                                         // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FSBCursorStateHandle                   CursorHandle;                                      // 0x0348(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	uint8                                         Pad_6FE8[0x4];                                     // 0x034C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Dialog_C*                           Dialog;                                            // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnRangeScaleChanged__DelegateSignature(float Value);
	void OnBGAlphaChanged__DelegateSignature(float Value);
	void OnInAnim__DelegateSignature();
	void OnOutAnim__DelegateSignature();
	void OnIconSizeChanged__DelegateSignature(float Value);
	void OnWindowSizeChanged__DelegateSignature(int32 Number);
	void OnReset__DelegateSignature();
	void OnPinVisible__DelegateSignature(bool IsOn);
	void ExecuteUbergraph_MapEditWindow(int32 EntryPoint);
	void Destruct();
	void Construct();
	void BndEvt__MapEditWindow_BtnReset_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void DialogDelegate(EDialogResult Result);
	void BndEvt__MapEditWindow_WindowPin_K2Node_ComponentBoundEvent_3_OnPinVisible__DelegateSignature(bool IsOn);
	void BndEvt__MapEditWindow_MapEditWindowSize_K2Node_ComponentBoundEvent_19_OnWindowSizeChanged__DelegateSignature(int32 Number);
	void BndEvt__MapEditWindow_SliderZ_K2Node_ComponentBoundEvent_15_OnValueChanged__DelegateSignature(float Value);
	void BndEvt__MapEditWindow_MapEditSlider_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature(float Value);
	void BndEvt__MapEditWindow_SliderBG_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(float Value);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void UIVisibleSettingChangeDelegate_Event_0(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
	void UnbindVisibleSettingChangeDelegate();
	void BindVisibleSettingChangeDelegate();
	void CustomEvent_1();
	void CustomEvent_0(class UObject* Sender, class UObject* Param);
	void UnbindClosedMenu();
	void BindClosedMenu();
	void BndEvt__MapEditWindow_CmnClose02_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature();
	void OnPressCancel();
	void DeregisterCancelKey();
	void RegisterCancelKey();
	void Bind();
	void Unbind();
	void Initialize(int32 WindowSizeIndex, float BGAlphaValue, float IconSizeScale, float Zoom, bool PinChecked);
	void Open();
	void Close();
	void SetMapSizeTitle();
	void SetGameModeAndUI();
	void SetGameMode();
	class UBP_Dialog_C* CreateDialogYesNo(const class FText& Message);
	void DeleteDialogYesNo();

	void GetDialogMessage(class FText* Message) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MapEditWindow_C">();
	}
	static class UMapEditWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMapEditWindow_C>();
	}
};
static_assert(alignof(UMapEditWindow_C) == 0x000008, "Wrong alignment on UMapEditWindow_C");
static_assert(sizeof(UMapEditWindow_C) == 0x000358, "Wrong size on UMapEditWindow_C");
static_assert(offsetof(UMapEditWindow_C, UberGraphFrame) == 0x000278, "Member 'UMapEditWindow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMapEditWindow_C, Out) == 0x000280, "Member 'UMapEditWindow_C::Out' has a wrong offset!");
static_assert(offsetof(UMapEditWindow_C, In) == 0x000288, "Member 'UMapEditWindow_C::In' has a wrong offset!");
static_assert(offsetof(UMapEditWindow_C, BtnReset) == 0x000290, "Member 'UMapEditWindow_C::BtnReset' has a wrong offset!");
static_assert(offsetof(UMapEditWindow_C, CmnClose02) == 0x000298, "Member 'UMapEditWindow_C::CmnClose02' has a wrong offset!");
static_assert(offsetof(UMapEditWindow_C, SliderBG) == 0x0002A0, "Member 'UMapEditWindow_C::SliderBG' has a wrong offset!");
static_assert(offsetof(UMapEditWindow_C, SliderIcon) == 0x0002A8, "Member 'UMapEditWindow_C::SliderIcon' has a wrong offset!");
static_assert(offsetof(UMapEditWindow_C, SliderZoom) == 0x0002B0, "Member 'UMapEditWindow_C::SliderZoom' has a wrong offset!");
static_assert(offsetof(UMapEditWindow_C, WindowPin) == 0x0002B8, "Member 'UMapEditWindow_C::WindowPin' has a wrong offset!");
static_assert(offsetof(UMapEditWindow_C, WindowSize) == 0x0002C0, "Member 'UMapEditWindow_C::WindowSize' has a wrong offset!");
static_assert(offsetof(UMapEditWindow_C, OnBGAlphaChanged) == 0x0002C8, "Member 'UMapEditWindow_C::OnBGAlphaChanged' has a wrong offset!");
static_assert(offsetof(UMapEditWindow_C, OnIconSizeChanged) == 0x0002D8, "Member 'UMapEditWindow_C::OnIconSizeChanged' has a wrong offset!");
static_assert(offsetof(UMapEditWindow_C, OnWindowSizeChanged) == 0x0002E8, "Member 'UMapEditWindow_C::OnWindowSizeChanged' has a wrong offset!");
static_assert(offsetof(UMapEditWindow_C, OnRangeScaleChanged) == 0x0002F8, "Member 'UMapEditWindow_C::OnRangeScaleChanged' has a wrong offset!");
static_assert(offsetof(UMapEditWindow_C, OnPinVisible) == 0x000308, "Member 'UMapEditWindow_C::OnPinVisible' has a wrong offset!");
static_assert(offsetof(UMapEditWindow_C, OnReset) == 0x000318, "Member 'UMapEditWindow_C::OnReset' has a wrong offset!");
static_assert(offsetof(UMapEditWindow_C, OnInAnim) == 0x000328, "Member 'UMapEditWindow_C::OnInAnim' has a wrong offset!");
static_assert(offsetof(UMapEditWindow_C, OnOutAnim) == 0x000338, "Member 'UMapEditWindow_C::OnOutAnim' has a wrong offset!");
static_assert(offsetof(UMapEditWindow_C, CursorHandle) == 0x000348, "Member 'UMapEditWindow_C::CursorHandle' has a wrong offset!");
static_assert(offsetof(UMapEditWindow_C, Dialog) == 0x000350, "Member 'UMapEditWindow_C::Dialog' has a wrong offset!");

}


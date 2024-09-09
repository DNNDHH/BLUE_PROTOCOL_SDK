#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass MapEditWindow.MapEditWindow_C
	 * Size -> 0x00E0 (FullSize[0x0358] - InheritedSize[0x0278])
	 */
	class UMapEditWindow_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Out;                                                     // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    In;                                                      // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class USBTextButtonCmnBtn27_C*                             BtnReset;                                                // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnClose02_C*                                       CmnClose02;                                              // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMapEditSlider_C*                                    SliderBG;                                                // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMapEditSlider_C*                                    SliderIcon;                                              // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMapEditSlider_C*                                    SliderZoom;                                              // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMapEditWindowPin_C*                                 WindowPin;                                               // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMapEditWindowSize_C*                                WindowSize;                                              // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnBGAlphaChanged;                                        // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnIconSizeChanged;                                       // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnWindowSizeChanged;                                     // 0x02E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnRangeScaleChanged;                                     // 0x02F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnPinVisible;                                            // 0x0308(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnReset;                                                 // 0x0318(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnInAnim;                                                // 0x0328(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnOutAnim;                                               // 0x0338(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FSBCursorStateHandle                                CursorHandle;                                            // 0x0348(0x0004) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		unsigned char                                              UnknownData_USL6[0x4];                                   // 0x034C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBP_Dialog_C*                                        Dialog;                                                  // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetDialogMessage(class FText* Message);
		void DeleteDialogYesNo();
		class UBP_Dialog_C* CreateDialogYesNo(const class FText& Message);
		void SetGameMode();
		void SetGameModeAndUI();
		void SetMapSizeTitle();
		void Close();
		void Open();
		void Initialize(int32_t WindowSizeIndex, float BGAlphaValue, float IconSizeScale, float Zoom, bool PinChecked);
		void Unbind();
		void Bind();
		void RegisterCancelKey();
		void DeregisterCancelKey();
		void OnPressCancel();
		void BndEvt__MapEditWindow_CmnClose02_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature();
		void BindClosedMenu();
		void UnbindClosedMenu();
		void CustomEvent_1(class UObject* Sender, class UObject* Param);
		void CustomEvent_2();
		void BindVisibleSettingChangeDelegate();
		void UnbindVisibleSettingChangeDelegate();
		void UIVisibleSettingChangeDelegate_Event_1(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
		void OnAnimationFinished(class UWidgetAnimation* Animation);
		void BndEvt__MapEditWindow_SliderBG_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(float Value);
		void BndEvt__MapEditWindow_MapEditSlider_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature(float Value);
		void BndEvt__MapEditWindow_SliderZ_K2Node_ComponentBoundEvent_15_OnValueChanged__DelegateSignature(float Value);
		void BndEvt__MapEditWindow_MapEditWindowSize_K2Node_ComponentBoundEvent_19_OnWindowSizeChanged__DelegateSignature(int32_t Number);
		void BndEvt__MapEditWindow_WindowPin_K2Node_ComponentBoundEvent_3_OnPinVisible__DelegateSignature(bool IsOn);
		void DialogDelegate(EDialogResult Result);
		void BndEvt__MapEditWindow_BtnReset_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
		void Construct();
		void Destruct();
		void ExecuteUbergraph_MapEditWindow(int32_t EntryPoint);
		void OnPinVisible__DelegateSignature(bool IsOn);
		void OnReset__DelegateSignature();
		void OnWindowSizeChanged__DelegateSignature(int32_t Number);
		void OnIconSizeChanged__DelegateSignature(float Value);
		void OnOutAnim__DelegateSignature();
		void OnInAnim__DelegateSignature();
		void OnBGAlphaChanged__DelegateSignature(float Value);
		void OnRangeScaleChanged__DelegateSignature(float Value);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

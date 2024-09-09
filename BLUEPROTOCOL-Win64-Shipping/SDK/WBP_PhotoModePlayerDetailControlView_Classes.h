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
	 * WidgetBlueprintGeneratedClass WBP_PhotoModePlayerDetailControlView.WBP_PhotoModePlayerDetailControlView_C
	 * Size -> 0x00F8 (FullSize[0x0370] - InheritedSize[0x0278])
	 */
	class UWBP_PhotoModePlayerDetailControlView_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCanvasPanel*                                        CanvasPanel_BodyTab;                                     // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasPanel_FaceTab;                                     // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UComboBoxString*                                     FacialComboBox;                                          // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBSelectableTextButtonCmnBtn27_C*                   SBButton_BodyTab;                                        // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         SBButton_Close;                                          // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBSelectableTextButtonCmnBtn27_C*                   SBButton_FaceTab;                                        // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         SBButton_FacialNext;                                     // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         SBButton_FacialPrev;                                     // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBSelectableTextButtonCmnBtn27_C*                   SBButton_LipClose;                                       // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBSelectableTextButtonCmnBtn27_C*                   SBButton_LipDefault;                                     // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBSelectableTextButtonCmnBtn27_C*                   SBButton_LipOpen;                                        // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBSelectableTextButtonCmnBtn27_C*                   SBButton_LipSemiOpen;                                    // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         SBButton_MoveBack;                                       // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         SBButton_MoveForward;                                    // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         SBButton_MoveLeft;                                       // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         SBButton_MoveRight;                                      // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         SBButton_RotateLeft;                                     // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         SBButton_RotateLeft2;                                    // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         SBButton_RotateRight;                                    // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         SBButton_RotateRight2;                                   // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBCheckBoxCmnCheckBox01_C*                          SBCheckBox_EnableFacial;                                 // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 SBRuntimeTextBlock_LipSyncState;                         // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 SBRuntimeTextBlock_LookAtEyeState;                       // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 SBRuntimeTextBlock_LookAtState;                          // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBSelectableTextButtonCmnBtn27_C*                   SBSelectableButton_FixEye;                               // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBSelectableTextButtonCmnBtn27_C*                   SBSelectableButton_FixHead;                              // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBSelectableTextButtonCmnBtn27_C*                   SBSelectableButton_LookAtActive;                         // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBSelectableTextButtonCmnBtn27_C*                   SBSelectableButton_LookAtEyeActive;                      // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WidgetSwitcher;                                          // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBPhotoModePlayerControlData*                       Data;                                                    // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void InitFacialOption();
		class UWidget* On_FacialComboBox_GenerateWidget_1(const class FString& item);
		void BndEvt__UMG_PhotoModeControllMenu_FacialComboBox_K2Node_ComponentBoundEvent_31_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_LipDefault_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_LipOpen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_LipSemiOpen_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_LipClose_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__WBP_PhotoModePlayerDetailControlView_SBCheckBox_EnableFacial_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__UMG_PhotoModeEmotionView_SBButton_FacialPrev_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__UMG_PhotoModeEmotionView_SBButton_FacialNext_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
		void ChangeFacialOption(int32_t Index);
		void BndEvt__WBP_PhotoModePlayerDetailControlView_SBSelectableButton_LookAtActive_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__WBP_PhotoModePlayerDetailControlView_SBSelectableButton_FixHead_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__WBP_PhotoModePlayerDetailControlView_SBSelectableButton_LookAtEyeActive_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__WBP_PhotoModePlayerDetailControlView_SBSelectableButton_FixEye_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_FaceTab_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_BodyTab_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_RotateLeft2_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_RotateLeft2_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_RotateLeft_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_RotateLeft_K2Node_ComponentBoundEvent_17_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_RotateRight_K2Node_ComponentBoundEvent_18_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_RotateRight_K2Node_ComponentBoundEvent_19_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_RotateRight2_K2Node_ComponentBoundEvent_20_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_RotateRight2_K2Node_ComponentBoundEvent_21_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_MoveLeft_K2Node_ComponentBoundEvent_22_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_MoveLeft_K2Node_ComponentBoundEvent_23_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_MoveForward_K2Node_ComponentBoundEvent_24_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_MoveForward_K2Node_ComponentBoundEvent_25_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_MoveBack_K2Node_ComponentBoundEvent_26_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_MoveBack_K2Node_ComponentBoundEvent_27_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_MoveRight_K2Node_ComponentBoundEvent_28_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_MoveRight_K2Node_ComponentBoundEvent_29_OnButtonReleasedEvent__DelegateSignature();
		void SetData(class USBPhotoModePlayerControlData* Data);
		void Construct();
		void OnUpdate();
		void DummyEvent();
		void ExecuteUbergraph_WBP_PhotoModePlayerDetailControlView(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

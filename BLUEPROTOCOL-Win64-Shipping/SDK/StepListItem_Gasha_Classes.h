﻿#pragma once

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
	 * WidgetBlueprintGeneratedClass StepListItem_Gasha.StepListItem_Gasha_C
	 * Size -> 0x0529 (FullSize[0x07A1] - InheritedSize[0x0278])
	 */
	class UStepListItem_Gasha_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimSelect;                                              // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class USBButton_C*                                         Btn1;                                                    // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 Txt1;                                                    // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    BtnId;                                                   // 0x0298(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AHZC[0x4];                                   // 0x029C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnBtnClicked;                                            // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FButtonStyle                                        BtnOn;                                                   // 0x02B0(0x0278) Edit, BlueprintVisible, DisableEditOnInstance
		struct FButtonStyle                                        BtnOff;                                                  // 0x0528(0x0278) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsSelected;                                              // 0x07A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetBtnSelected(bool bSelected);
		void GetBtnText(int32_t* TextId);
		void SetBtnText(int32_t BtnId);
		void BndEvt__StepListItem_Btn1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Btn1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Btn1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__StepListItem_Gasha_Btn1_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature();
		void ExecuteUbergraph_StepListItem_Gasha(int32_t EntryPoint);
		void OnBtnClicked__DelegateSignature(int32_t BtnId);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
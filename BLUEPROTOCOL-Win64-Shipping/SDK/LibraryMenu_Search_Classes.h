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
	 * WidgetBlueprintGeneratedClass LibraryMenu_Search.LibraryMenu_Search_C
	 * Size -> 0x0030 (FullSize[0x02E0] - InheritedSize[0x02B0])
	 */
	class ULibraryMenu_Search_C : public USBUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USBButton_C*                                         ResetButton;                                             // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     SwitchSearchBg;                                          // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBEditableTextBox*                                  TextBoxPlayerName;                                       // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnTextChange;                                            // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void GetSerchKeyword(class FString* SerchKeyword);
		void ClearText();
		void BndEvt__TextBoxPlayerName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
		void BndEvt__ResetButton_K2Node_ComponentBoundEvent_223_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__ResetButton_K2Node_ComponentBoundEvent_246_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__ResetButton_K2Node_ComponentBoundEvent_267_OnButtonClickedEvent__DelegateSignature();
		void ExecuteUbergraph_LibraryMenu_Search(int32_t EntryPoint);
		void OnTextChange__DelegateSignature(const class FText& NewParam);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
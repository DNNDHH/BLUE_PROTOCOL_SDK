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
	 * WidgetBlueprintGeneratedClass OverlayMessage.OverlayMessage_C
	 * Size -> 0x00A0 (FullSize[0x0350] - InheritedSize[0x02B0])
	 */
	class UOverlayMessage_C : public USBUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimOut;                                                 // 0x02B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimIn;                                                  // 0x02C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              BG;                                                      // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Line;                                                    // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 MessageText;                                             // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         NoButton;                                                // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         OKButton;                                                // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 TxtNo;                                                   // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 TxtOK;                                                   // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 TxtYes;                                                  // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlocker;                                               // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         YesButton;                                               // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        YesNoGrp;                                                // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		EDialogResult                                              Result;                                                  // 0x0320(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2ROW[0x3];                                   // 0x0321(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CurrentButtonIndex;                                      // 0x0324(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class USBButton_C*>                                 ButtonList;                                              // 0x0328(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class FScriptMulticastDelegate                             OnHide;                                                  // 0x0338(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UUIBlocker_C*                                        Blocker;                                                 // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetResultForButton(class USBButton_C* Button);
		void ChangeCurrentButton(int32_t Index);
		void OnRepeat_Left();
		void OnRepeat_Right();
		void OnPress_Ok();
		void StartMessageDialog(int32_t InTextId);
		void StartYesNoDialog(int32_t InTextId);
		void BndEvt__SBButton_Message_K2Node_ComponentBoundEvent_189_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__SBButton_Message_K2Node_ComponentBoundEvent_245_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__SBButton_Message_K2Node_ComponentBoundEvent_269_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__SBButton_C_1_K2Node_ComponentBoundEvent_434_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__SBButton_C_1_K2Node_ComponentBoundEvent_465_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__SBButton_C_1_K2Node_ComponentBoundEvent_492_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__SBButton_No_K2Node_ComponentBoundEvent_612_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__SBButton_No_K2Node_ComponentBoundEvent_646_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__SBButton_No_K2Node_ComponentBoundEvent_676_OnButtonHoverEvent__DelegateSignature();
		void Construct();
		void HideDialog();
		void Destruct();
		void OnAnimationFinished(class UWidgetAnimation* Animation);
		void OnPress_Cancel();
		void ExecuteUbergraph_OverlayMessage(int32_t EntryPoint);
		void OnHide__DelegateSignature(EDialogResult Result);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

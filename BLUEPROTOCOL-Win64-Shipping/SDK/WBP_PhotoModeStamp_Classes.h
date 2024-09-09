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
	 * WidgetBlueprintGeneratedClass WBP_PhotoModeStamp.WBP_PhotoModeStamp_C
	 * Size -> 0x0050 (FullSize[0x02C8] - InheritedSize[0x0278])
	 */
	class UWBP_PhotoModeStamp_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCanvasPanel*                                        CanvasPanel;                                             // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_Stamp;                                             // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBSelectableTextButtonCmnBtn27_C*                   SBSelectableButton;                                      // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_Text;                                          // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClicked;                                               // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FText                                                Text;                                                    // 0x02B0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void GetText(class FText* Text);
		void InitStamp(int32_t StampId);
		void InitText(const class FString& inString);
		void BndEvt__WBP_PhotoModeStamp_SBSelectableButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void SetAlpha(float Alpha);
		void SetReverse(bool bReverse);
		void SetSelected(bool bSelect);
		void Construct();
		void OnPrepareScreenshot(class UObject* Sender, class UObject* Param);
		void OnFinishScreenshot(class UObject* Sender, class UObject* Param);
		void Destruct();
		void UpdateButtonSize();
		void InitVisibility(bool bIsImage);
		void ExecuteUbergraph_WBP_PhotoModeStamp(int32_t EntryPoint);
		void OnClicked__DelegateSignature(class UWBP_PhotoModeStamp_C* Sender);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

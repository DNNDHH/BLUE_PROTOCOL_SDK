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
	 * WidgetBlueprintGeneratedClass MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C
	 * Size -> 0x00B1 (FullSize[0x0329] - InheritedSize[0x0278])
	 */
	class UMapWidget_MapPinnedPin_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             Button_1;                                                // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_1;                                                 // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBMultiLineEditableTextBox*                         MultiLineTextBox;                                        // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            TextInputGrp;                                            // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMapWidget_IconTooltip3_C*                           ToolTip;                                                 // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FMapPinInfo                                         PinInfo;                                                 // 0x02A8(0x0040) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnTextCommitted;                                         // 0x02E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    MaxWordCountPerLine;                                     // 0x02F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxLineCount;                                            // 0x02FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              Comment;                                                 // 0x0300(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       IsToolTipEnable;                                         // 0x0310(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OBHE[0x7];                                   // 0x0311(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPinBtnClicked;                                         // 0x0318(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsShiftKeyPressed;                                       // 0x0328(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void SplitStringsByWordNumber(const class FString& inString, int32_t InWordNumber, TArray<class FString>* OutSplitedStrings);
		void FormatStringBySpecifiedLineCntAndWordNum(const class FString& inString, int32_t InLineNumMax, int32_t InWordNumMaxPerLine, class FString* OutFormatedString);
		void SetInputToTextBox();
		void SetTextToTextBox(const class FText& InText);
		void SetTooltipEnable(bool IsEnable);
		class UWidget* GetToolTipWidget_1();
		void GetComment(class FString* Comment);
		void GetPinIconSize(struct FVector2D* OutSize);
		void SetPinInfo(const struct FMapPinInfo& InPinInfo);
		void GetPinInfo(struct FMapPinInfo* OutPinInfo);
		void SetTextBoxVisibility(bool IsVisible);
		void Construct();
		void BndEvt__Button_0_K2Node_ComponentBoundEvent_213_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__MultiLineEditableTextBox_0_K2Node_ComponentBoundEvent_79_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void ForceTextCommit(const class FText& InText);
		void HasNgWords();
		void DoFormatText(const class FText& InText);
		void ExecuteUbergraph_MapWidget_MapPinnedPin(int32_t EntryPoint);
		void OnPinBtnClicked__DelegateSignature(class UMapWidget_MapPinnedPin_C* InPinnedPin);
		void OnTextCommitted__DelegateSignature(class UMapWidget_MapPinnedPin_C* InPinnedPin);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

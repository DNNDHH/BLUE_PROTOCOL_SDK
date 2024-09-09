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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.OnKeyUp
	 */
	struct UMapWidget_MapPinnedPin_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.OnKeyDown
	 */
	struct UMapWidget_MapPinnedPin_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.OnPreviewKeyDown
	 */
	struct UMapWidget_MapPinnedPin_C_OnPreviewKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.SplitStringsByWordNumber
	 */
	struct UMapWidget_MapPinnedPin_C_SplitStringsByWordNumber_Params
	{
	public:
		class FString                                              inString;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    InWordNumber;                                            // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Y8P7[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      OutSplitedStrings;                                       // 0x0018(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.FormatStringBySpecifiedLineCntAndWordNum
	 */
	struct UMapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum_Params
	{
	public:
		class FString                                              inString;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    InLineNumMax;                                            // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InWordNumMaxPerLine;                                     // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              OutFormatedString;                                       // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.SetInputToTextBox
	 */
	struct UMapWidget_MapPinnedPin_C_SetInputToTextBox_Params
	{	};

	/**
	 * Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.SetTextToTextBox
	 */
	struct UMapWidget_MapPinnedPin_C_SetTextToTextBox_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.SetTooltipEnable
	 */
	struct UMapWidget_MapPinnedPin_C_SetTooltipEnable_Params
	{
	public:
		bool                                                       IsEnable;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.GetToolTipWidget_1
	 */
	struct UMapWidget_MapPinnedPin_C_GetToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.GetComment
	 */
	struct UMapWidget_MapPinnedPin_C_GetComment_Params
	{
	public:
		class FString                                              Comment;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.GetPinIconSize
	 */
	struct UMapWidget_MapPinnedPin_C_GetPinIconSize_Params
	{
	public:
		struct FVector2D                                           OutSize;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.SetPinInfo
	 */
	struct UMapWidget_MapPinnedPin_C_SetPinInfo_Params
	{
	public:
		struct FMapPinInfo                                         InPinInfo;                                               // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.GetPinInfo
	 */
	struct UMapWidget_MapPinnedPin_C_GetPinInfo_Params
	{
	public:
		struct FMapPinInfo                                         OutPinInfo;                                              // 0x0000(0x0040)  (Parm, OutParm)
	};

	/**
	 * Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.SetTextBoxVisibility
	 */
	struct UMapWidget_MapPinnedPin_C_SetTextBoxVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.Construct
	 */
	struct UMapWidget_MapPinnedPin_C_Construct_Params
	{	};

	/**
	 * Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_213_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMapWidget_MapPinnedPin_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_213_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.BndEvt__MultiLineEditableTextBox_0_K2Node_ComponentBoundEvent_79_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UMapWidget_MapPinnedPin_C_BndEvt__MultiLineEditableTextBox_0_K2Node_ComponentBoundEvent_79_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.ForceTextCommit
	 */
	struct UMapWidget_MapPinnedPin_C_ForceTextCommit_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.HasNgWords
	 */
	struct UMapWidget_MapPinnedPin_C_HasNgWords_Params
	{	};

	/**
	 * Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.DoFormatText
	 */
	struct UMapWidget_MapPinnedPin_C_DoFormatText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.ExecuteUbergraph_MapWidget_MapPinnedPin
	 */
	struct UMapWidget_MapPinnedPin_C_ExecuteUbergraph_MapWidget_MapPinnedPin_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QG0J[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.OnPinBtnClicked__DelegateSignature
	 */
	struct UMapWidget_MapPinnedPin_C_OnPinBtnClicked__DelegateSignature_Params
	{
	public:
		class UMapWidget_MapPinnedPin_C*                           InPinnedPin;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.OnTextCommitted__DelegateSignature
	 */
	struct UMapWidget_MapPinnedPin_C_OnTextCommitted__DelegateSignature_Params
	{
	public:
		class UMapWidget_MapPinnedPin_C*                           InPinnedPin;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

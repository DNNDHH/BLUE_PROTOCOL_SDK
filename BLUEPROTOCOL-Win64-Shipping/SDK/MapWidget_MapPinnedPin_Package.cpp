/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.OnKeyUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UMapWidget_MapPinnedPin_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.OnKeyUp");
		
		UMapWidget_MapPinnedPin_C_OnKeyUp_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.OnKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UMapWidget_MapPinnedPin_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.OnKeyDown");
		
		UMapWidget_MapPinnedPin_C_OnKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.OnPreviewKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UMapWidget_MapPinnedPin_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.OnPreviewKeyDown");
		
		UMapWidget_MapPinnedPin_C_OnPreviewKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.SplitStringsByWordNumber
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      inString                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            InWordNumber                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FString>                              OutSplitedStrings                                          (Parm, OutParm)
	 */
	void UMapWidget_MapPinnedPin_C::SplitStringsByWordNumber(const class FString& inString, int32_t InWordNumber, TArray<class FString>* OutSplitedStrings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.SplitStringsByWordNumber");
		
		UMapWidget_MapPinnedPin_C_SplitStringsByWordNumber_Params params {};
		params.inString = inString;
		params.InWordNumber = InWordNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSplitedStrings != nullptr)
			*OutSplitedStrings = params.OutSplitedStrings;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.FormatStringBySpecifiedLineCntAndWordNum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      inString                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            InLineNumMax                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InWordNumMaxPerLine                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      OutFormatedString                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMapWidget_MapPinnedPin_C::FormatStringBySpecifiedLineCntAndWordNum(const class FString& inString, int32_t InLineNumMax, int32_t InWordNumMaxPerLine, class FString* OutFormatedString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.FormatStringBySpecifiedLineCntAndWordNum");
		
		UMapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum_Params params {};
		params.inString = inString;
		params.InLineNumMax = InLineNumMax;
		params.InWordNumMaxPerLine = InWordNumMaxPerLine;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutFormatedString != nullptr)
			*OutFormatedString = params.OutFormatedString;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.SetInputToTextBox
	 * 		Flags  -> ()
	 */
	void UMapWidget_MapPinnedPin_C::SetInputToTextBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.SetInputToTextBox");
		
		UMapWidget_MapPinnedPin_C_SetInputToTextBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.SetTextToTextBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UMapWidget_MapPinnedPin_C::SetTextToTextBox(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.SetTextToTextBox");
		
		UMapWidget_MapPinnedPin_C_SetTextToTextBox_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.SetTooltipEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnable                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapWidget_MapPinnedPin_C::SetTooltipEnable(bool IsEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.SetTooltipEnable");
		
		UMapWidget_MapPinnedPin_C_SetTooltipEnable_Params params {};
		params.IsEnable = IsEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.GetToolTipWidget_1
	 * 		Flags  -> ()
	 */
	class UWidget* UMapWidget_MapPinnedPin_C::GetToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.GetToolTipWidget_1");
		
		UMapWidget_MapPinnedPin_C_GetToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.GetComment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Comment                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMapWidget_MapPinnedPin_C::GetComment(class FString* Comment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.GetComment");
		
		UMapWidget_MapPinnedPin_C_GetComment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Comment != nullptr)
			*Comment = params.Comment;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.GetPinIconSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   OutSize                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_MapPinnedPin_C::GetPinIconSize(struct FVector2D* OutSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.GetPinIconSize");
		
		UMapWidget_MapPinnedPin_C_GetPinIconSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSize != nullptr)
			*OutSize = params.OutSize;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.SetPinInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMapPinInfo                                 InPinInfo                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UMapWidget_MapPinnedPin_C::SetPinInfo(const struct FMapPinInfo& InPinInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.SetPinInfo");
		
		UMapWidget_MapPinnedPin_C_SetPinInfo_Params params {};
		params.InPinInfo = InPinInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.GetPinInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMapPinInfo                                 OutPinInfo                                                 (Parm, OutParm)
	 */
	void UMapWidget_MapPinnedPin_C::GetPinInfo(struct FMapPinInfo* OutPinInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.GetPinInfo");
		
		UMapWidget_MapPinnedPin_C_GetPinInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPinInfo != nullptr)
			*OutPinInfo = params.OutPinInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.SetTextBoxVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapWidget_MapPinnedPin_C::SetTextBoxVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.SetTextBoxVisibility");
		
		UMapWidget_MapPinnedPin_C_SetTextBoxVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.Construct
	 * 		Flags  -> ()
	 */
	void UMapWidget_MapPinnedPin_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.Construct");
		
		UMapWidget_MapPinnedPin_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_213_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMapWidget_MapPinnedPin_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_213_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_213_OnButtonClickedEvent__DelegateSignature");
		
		UMapWidget_MapPinnedPin_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_213_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.BndEvt__MultiLineEditableTextBox_0_K2Node_ComponentBoundEvent_79_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_MapPinnedPin_C::BndEvt__MultiLineEditableTextBox_0_K2Node_ComponentBoundEvent_79_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.BndEvt__MultiLineEditableTextBox_0_K2Node_ComponentBoundEvent_79_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature");
		
		UMapWidget_MapPinnedPin_C_BndEvt__MultiLineEditableTextBox_0_K2Node_ComponentBoundEvent_79_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.ForceTextCommit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UMapWidget_MapPinnedPin_C::ForceTextCommit(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.ForceTextCommit");
		
		UMapWidget_MapPinnedPin_C_ForceTextCommit_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.HasNgWords
	 * 		Flags  -> ()
	 */
	void UMapWidget_MapPinnedPin_C::HasNgWords()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.HasNgWords");
		
		UMapWidget_MapPinnedPin_C_HasNgWords_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.DoFormatText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UMapWidget_MapPinnedPin_C::DoFormatText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.DoFormatText");
		
		UMapWidget_MapPinnedPin_C_DoFormatText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.ExecuteUbergraph_MapWidget_MapPinnedPin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_MapPinnedPin_C::ExecuteUbergraph_MapWidget_MapPinnedPin(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.ExecuteUbergraph_MapWidget_MapPinnedPin");
		
		UMapWidget_MapPinnedPin_C_ExecuteUbergraph_MapWidget_MapPinnedPin_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.OnPinBtnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMapWidget_MapPinnedPin_C*                   InPinnedPin                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_MapPinnedPin_C::OnPinBtnClicked__DelegateSignature(class UMapWidget_MapPinnedPin_C* InPinnedPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.OnPinBtnClicked__DelegateSignature");
		
		UMapWidget_MapPinnedPin_C_OnPinBtnClicked__DelegateSignature_Params params {};
		params.InPinnedPin = InPinnedPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.OnTextCommitted__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMapWidget_MapPinnedPin_C*                   InPinnedPin                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_MapPinnedPin_C::OnTextCommitted__DelegateSignature(class UMapWidget_MapPinnedPin_C* InPinnedPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.OnTextCommitted__DelegateSignature");
		
		UMapWidget_MapPinnedPin_C_OnTextCommitted__DelegateSignature_Params params {};
		params.InPinnedPin = InPinnedPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapWidget_MapPinnedPin_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapWidget_MapPinnedPin_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C");
		return ptr;
	}

}



#pragma once

 

// Package: MapWidget_MapPinnedPin

#include "Basic.hpp"

#include "MapWidget_MapPinnedPin_classes.hpp"
#include "MapWidget_MapPinnedPin_parameters.hpp"


namespace SDK
{

// Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.OnTextCommitted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMapWidget_MapPinnedPin_C*        InPinnedPin                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_MapPinnedPin_C::OnTextCommitted__DelegateSignature(class UMapWidget_MapPinnedPin_C* InPinnedPin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_MapPinnedPin_C", "OnTextCommitted__DelegateSignature");

	Params::MapWidget_MapPinnedPin_C_OnTextCommitted__DelegateSignature Parms{};

	Parms.InPinnedPin = InPinnedPin;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.OnPinBtnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMapWidget_MapPinnedPin_C*        InPinnedPin                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_MapPinnedPin_C::OnPinBtnClicked__DelegateSignature(class UMapWidget_MapPinnedPin_C* InPinnedPin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_MapPinnedPin_C", "OnPinBtnClicked__DelegateSignature");

	Params::MapWidget_MapPinnedPin_C_OnPinBtnClicked__DelegateSignature Parms{};

	Parms.InPinnedPin = InPinnedPin;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.ExecuteUbergraph_MapWidget_MapPinnedPin
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_MapPinnedPin_C::ExecuteUbergraph_MapWidget_MapPinnedPin(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_MapPinnedPin_C", "ExecuteUbergraph_MapWidget_MapPinnedPin");

	Params::MapWidget_MapPinnedPin_C_ExecuteUbergraph_MapWidget_MapPinnedPin Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.DoFormatText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UMapWidget_MapPinnedPin_C::DoFormatText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_MapPinnedPin_C", "DoFormatText");

	Params::MapWidget_MapPinnedPin_C_DoFormatText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.HasNgWords
// (BlueprintCallable, BlueprintEvent)

void UMapWidget_MapPinnedPin_C::HasNgWords()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_MapPinnedPin_C", "HasNgWords");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.ForceTextCommit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UMapWidget_MapPinnedPin_C::ForceTextCommit(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_MapPinnedPin_C", "ForceTextCommit");

	Params::MapWidget_MapPinnedPin_C_ForceTextCommit Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.BndEvt__MultiLineEditableTextBox_0_K2Node_ComponentBoundEvent_79_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ETextCommit                             CommitMethod                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_MapPinnedPin_C::BndEvt__MultiLineEditableTextBox_0_K2Node_ComponentBoundEvent_79_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_MapPinnedPin_C", "BndEvt__MultiLineEditableTextBox_0_K2Node_ComponentBoundEvent_79_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature");

	Params::MapWidget_MapPinnedPin_C_BndEvt__MultiLineEditableTextBox_0_K2Node_ComponentBoundEvent_79_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_213_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMapWidget_MapPinnedPin_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_213_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_MapPinnedPin_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_213_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMapWidget_MapPinnedPin_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_MapPinnedPin_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.SetTextBoxVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_MapPinnedPin_C::SetTextBoxVisibility(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_MapPinnedPin_C", "SetTextBoxVisibility");

	Params::MapWidget_MapPinnedPin_C_SetTextBoxVisibility Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.SetPinInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapPinInfo                      InPinInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UMapWidget_MapPinnedPin_C::SetPinInfo(const struct FMapPinInfo& InPinInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_MapPinnedPin_C", "SetPinInfo");

	Params::MapWidget_MapPinnedPin_C_SetPinInfo Parms{};

	Parms.InPinInfo = std::move(InPinInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.GetToolTipWidget_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UMapWidget_MapPinnedPin_C::GetToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_MapPinnedPin_C", "GetToolTipWidget_0");

	Params::MapWidget_MapPinnedPin_C_GetToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.SetTooltipEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_MapPinnedPin_C::SetTooltipEnable(bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_MapPinnedPin_C", "SetTooltipEnable");

	Params::MapWidget_MapPinnedPin_C_SetTooltipEnable Parms{};

	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.SetTextToTextBox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UMapWidget_MapPinnedPin_C::SetTextToTextBox(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_MapPinnedPin_C", "SetTextToTextBox");

	Params::MapWidget_MapPinnedPin_C_SetTextToTextBox Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.SetInputToTextBox
// (Public, BlueprintCallable, BlueprintEvent)

void UMapWidget_MapPinnedPin_C::SetInputToTextBox()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_MapPinnedPin_C", "SetInputToTextBox");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.FormatStringBySpecifiedLineCntAndWordNum
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InString                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   InLineNumMax                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InWordNumMaxPerLine                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           OutFormatedString                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UMapWidget_MapPinnedPin_C::FormatStringBySpecifiedLineCntAndWordNum(const class FString& InString, int32 InLineNumMax, int32 InWordNumMaxPerLine, class FString* OutFormatedString)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_MapPinnedPin_C", "FormatStringBySpecifiedLineCntAndWordNum");

	Params::MapWidget_MapPinnedPin_C_FormatStringBySpecifiedLineCntAndWordNum Parms{};

	Parms.InString = std::move(InString);
	Parms.InLineNumMax = InLineNumMax;
	Parms.InWordNumMaxPerLine = InWordNumMaxPerLine;

	UObject::ProcessEvent(Func, &Parms);

	if (OutFormatedString != nullptr)
		*OutFormatedString = std::move(Parms.OutFormatedString);
}


// Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.SplitStringsByWordNumber
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InString                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   InWordNumber                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>                   OutSplitedStrings                                      (Parm, OutParm)

void UMapWidget_MapPinnedPin_C::SplitStringsByWordNumber(const class FString& InString, int32 InWordNumber, TArray<class FString>* OutSplitedStrings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_MapPinnedPin_C", "SplitStringsByWordNumber");

	Params::MapWidget_MapPinnedPin_C_SplitStringsByWordNumber Parms{};

	Parms.InString = std::move(InString);
	Parms.InWordNumber = InWordNumber;

	UObject::ProcessEvent(Func, &Parms);

	if (OutSplitedStrings != nullptr)
		*OutSplitedStrings = std::move(Parms.OutSplitedStrings);
}


// Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.OnPreviewKeyDown
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UMapWidget_MapPinnedPin_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_MapPinnedPin_C", "OnPreviewKeyDown");

	Params::MapWidget_MapPinnedPin_C_OnPreviewKeyDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UMapWidget_MapPinnedPin_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_MapPinnedPin_C", "OnKeyDown");

	Params::MapWidget_MapPinnedPin_C_OnKeyDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UMapWidget_MapPinnedPin_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_MapPinnedPin_C", "OnKeyUp");

	Params::MapWidget_MapPinnedPin_C_OnKeyUp Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.GetPinInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FMapPinInfo                      OutPinInfo                                             (Parm, OutParm)

void UMapWidget_MapPinnedPin_C::GetPinInfo(struct FMapPinInfo* OutPinInfo) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_MapPinnedPin_C", "GetPinInfo");

	Params::MapWidget_MapPinnedPin_C_GetPinInfo Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutPinInfo != nullptr)
		*OutPinInfo = std::move(Parms.OutPinInfo);
}


// Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.GetPinIconSize
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D                        OutSize                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_MapPinnedPin_C::GetPinIconSize(struct FVector2D* OutSize) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_MapPinnedPin_C", "GetPinIconSize");

	Params::MapWidget_MapPinnedPin_C_GetPinIconSize Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutSize != nullptr)
		*OutSize = std::move(Parms.OutSize);
}


// Function MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C.GetComment
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FString                           Param_Comment                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UMapWidget_MapPinnedPin_C::GetComment(class FString* Param_Comment) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_MapPinnedPin_C", "GetComment");

	Params::MapWidget_MapPinnedPin_C_GetComment Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Comment != nullptr)
		*Param_Comment = std::move(Parms.Param_Comment);
}

}


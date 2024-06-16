#pragma once

 

// Package: WBP_ToolTipDetailsDateTime

#include "Basic.hpp"

#include "WBP_ToolTipDetailsDateTime_classes.hpp"
#include "WBP_ToolTipDetailsDateTime_parameters.hpp"


namespace SDK
{

// Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.ExecuteUbergraph_WBP_ToolTipDetailsDateTime
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ToolTipDetailsDateTime_C::ExecuteUbergraph_WBP_ToolTipDetailsDateTime(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ToolTipDetailsDateTime_C", "ExecuteUbergraph_WBP_ToolTipDetailsDateTime");

	Params::WBP_ToolTipDetailsDateTime_C_ExecuteUbergraph_WBP_ToolTipDetailsDateTime Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.SetExpiryDateTimeEndDisplay
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDateTime                        ExpiryDateTime                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UWBP_ToolTipDetailsDateTime_C::SetExpiryDateTimeEndDisplay(const struct FDateTime& ExpiryDateTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ToolTipDetailsDateTime_C", "SetExpiryDateTimeEndDisplay");

	Params::WBP_ToolTipDetailsDateTime_C_SetExpiryDateTimeEndDisplay Parms{};

	Parms.ExpiryDateTime = std::move(ExpiryDateTime);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ToolTipDetailsDateTime_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ToolTipDetailsDateTime_C", "PreConstruct");

	Params::WBP_ToolTipDetailsDateTime_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.SetDataAndVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           EventTermId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   DurationMinutes                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EItemType                               Param_ItemType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ToolTipDetailsDateTime_C::SetDataAndVisibility(const class FString& EventTermId, int32 DurationMinutes, EItemType Param_ItemType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ToolTipDetailsDateTime_C", "SetDataAndVisibility");

	Params::WBP_ToolTipDetailsDateTime_C_SetDataAndVisibility Parms{};

	Parms.EventTermId = std::move(EventTermId);
	Parms.DurationMinutes = DurationMinutes;
	Parms.Param_ItemType = Param_ItemType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.SetExpiryDateTime
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDateTime                        ExpiryDateTime                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UWBP_ToolTipDetailsDateTime_C::SetExpiryDateTime(const struct FDateTime& ExpiryDateTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ToolTipDetailsDateTime_C", "SetExpiryDateTime");

	Params::WBP_ToolTipDetailsDateTime_C_SetExpiryDateTime Parms{};

	Parms.ExpiryDateTime = std::move(ExpiryDateTime);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           EventTermId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   DurationMinutes                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EItemType                               Param_ItemType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ToolTipDetailsDateTime_C::SetData(const class FString& EventTermId, int32 DurationMinutes, EItemType Param_ItemType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ToolTipDetailsDateTime_C", "SetData");

	Params::WBP_ToolTipDetailsDateTime_C_SetData Parms{};

	Parms.EventTermId = std::move(EventTermId);
	Parms.DurationMinutes = DurationMinutes;
	Parms.Param_ItemType = Param_ItemType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.SetEventTermId
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           EventTermId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_ToolTipDetailsDateTime_C::SetEventTermId(const class FString& EventTermId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ToolTipDetailsDateTime_C", "SetEventTermId");

	Params::WBP_ToolTipDetailsDateTime_C_SetEventTermId Parms{};

	Parms.EventTermId = std::move(EventTermId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.SetDurationMinutes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   DurationMinutes                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ToolTipDetailsDateTime_C::SetDurationMinutes(int32 DurationMinutes)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ToolTipDetailsDateTime_C", "SetDurationMinutes");

	Params::WBP_ToolTipDetailsDateTime_C_SetDurationMinutes Parms{};

	Parms.DurationMinutes = DurationMinutes;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.SetMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EItemType                               InItemType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ToolTipDetailsDateTime_C::SetMessage(EItemType InItemType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ToolTipDetailsDateTime_C", "SetMessage");

	Params::WBP_ToolTipDetailsDateTime_C_SetMessage Parms{};

	Parms.InItemType = InItemType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.SetMessageTextColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                      LimitTime                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateColor                      Desc                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_ToolTipDetailsDateTime_C::SetMessageTextColor(const struct FSlateColor& LimitTime, const struct FSlateColor& Desc)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ToolTipDetailsDateTime_C", "SetMessageTextColor");

	Params::WBP_ToolTipDetailsDateTime_C_SetMessageTextColor Parms{};

	Parms.LimitTime = std::move(LimitTime);
	Parms.Desc = std::move(Desc);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.SetLimitTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDateTime                        InDateTime                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ToolTipDetailsDateTime_C::SetLimitTimer(const struct FDateTime& InDateTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ToolTipDetailsDateTime_C", "SetLimitTimer");

	Params::WBP_ToolTipDetailsDateTime_C_SetLimitTimer Parms{};

	Parms.InDateTime = std::move(InDateTime);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.SwitchingRecipeHeader
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_ToolTipDetailsDateTime_C::SwitchingRecipeHeader()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ToolTipDetailsDateTime_C", "SwitchingRecipeHeader");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.SetEndDisplay
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_ToolTipDetailsDateTime_C::SetEndDisplay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ToolTipDetailsDateTime_C", "SetEndDisplay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.SetRecepiType
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_ToolTipDetailsDateTime_C::SetRecepiType()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ToolTipDetailsDateTime_C", "SetRecepiType");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.SetCommunicationSettingMenuAchievement
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDateTime                        InDateTime                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ToolTipDetailsDateTime_C::SetCommunicationSettingMenuAchievement(const struct FDateTime& InDateTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ToolTipDetailsDateTime_C", "SetCommunicationSettingMenuAchievement");

	Params::WBP_ToolTipDetailsDateTime_C_SetCommunicationSettingMenuAchievement Parms{};

	Parms.InDateTime = std::move(InDateTime);

	UObject::ProcessEvent(Func, &Parms);
}

}


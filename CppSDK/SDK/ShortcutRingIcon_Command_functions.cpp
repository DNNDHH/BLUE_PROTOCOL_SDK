#pragma once

 

// Package: ShortcutRingIcon_Command

#include "Basic.hpp"

#include "ShortcutRingIcon_Command_classes.hpp"
#include "ShortcutRingIcon_Command_parameters.hpp"


namespace SDK
{

// Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.ExecuteUbergraph_ShortcutRingIcon_Command
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShortcutRingIcon_Command_C::ExecuteUbergraph_ShortcutRingIcon_Command(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRingIcon_Command_C", "ExecuteUbergraph_ShortcutRingIcon_Command");

	Params::ShortcutRingIcon_Command_C_ExecuteUbergraph_ShortcutRingIcon_Command Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UShortcutRingIcon_Command_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRingIcon_Command_C", "OnMouseLeave");

	Params::ShortcutRingIcon_Command_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UShortcutRingIcon_Command_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRingIcon_Command_C", "OnMouseEnter");

	Params::ShortcutRingIcon_Command_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.PlayAnimPressed
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UShortcutRingIcon_Command_C::PlayAnimPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRingIcon_Command_C", "PlayAnimPressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.GetToolTip
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UShortcutRingIcon_Command_C::GetToolTip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRingIcon_Command_C", "GetToolTip");

	Params::ShortcutRingIcon_Command_C_GetToolTip Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.OnSetEnableToolTip
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShortcutRingIcon_Command_C::OnSetEnableToolTip(bool InEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRingIcon_Command_C", "OnSetEnableToolTip");

	Params::ShortcutRingIcon_Command_C_OnSetEnableToolTip Parms{};

	Parms.InEnable = InEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.OnExecuteError
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UShortcutRingIcon_Command_C::OnExecuteError()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRingIcon_Command_C", "OnExecuteError");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.CommandIDToKeyconfigItems
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EShortcutIconCommandID                  InId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EConfig_KeyconfigItems                  KeyConfigItems                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShortcutRingIcon_Command_C::CommandIDToKeyconfigItems(EShortcutIconCommandID InId, EConfig_KeyconfigItems* KeyConfigItems) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRingIcon_Command_C", "CommandIDToKeyconfigItems");

	Params::ShortcutRingIcon_Command_C_CommandIDToKeyconfigItems Parms{};

	Parms.InId = InId;

	UObject::ProcessEvent(Func, &Parms);

	if (KeyConfigItems != nullptr)
		*KeyConfigItems = Parms.KeyConfigItems;
}


// Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.GetKeyconfigItemsTextID
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EConfig_KeyconfigItems                  Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   TextId                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShortcutRingIcon_Command_C::GetKeyconfigItemsTextID(EConfig_KeyconfigItems Type, int32* TextId) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRingIcon_Command_C", "GetKeyconfigItemsTextID");

	Params::ShortcutRingIcon_Command_C_GetKeyconfigItemsTextID Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

	if (TextId != nullptr)
		*TextId = Parms.TextId;
}


// Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.GetKeyconfigItemsStr
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// EShortcutIconCommandID                  CommandID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           OutString                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UShortcutRingIcon_Command_C::GetKeyconfigItemsStr(EShortcutIconCommandID CommandID, class FString* OutString) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRingIcon_Command_C", "GetKeyconfigItemsStr");

	Params::ShortcutRingIcon_Command_C_GetKeyconfigItemsStr Parms{};

	Parms.CommandID = CommandID;

	UObject::ProcessEvent(Func, &Parms);

	if (OutString != nullptr)
		*OutString = std::move(Parms.OutString);

	return Parms.ReturnValue;
}


// Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.GetBookmarkFieldStr
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// EShortcutIconCommandID                  CommandID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           OutString                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UShortcutRingIcon_Command_C::GetBookmarkFieldStr(EShortcutIconCommandID CommandID, class FString* OutString) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRingIcon_Command_C", "GetBookmarkFieldStr");

	Params::ShortcutRingIcon_Command_C_GetBookmarkFieldStr Parms{};

	Parms.CommandID = CommandID;

	UObject::ProcessEvent(Func, &Parms);

	if (OutString != nullptr)
		*OutString = std::move(Parms.OutString);

	return Parms.ReturnValue;
}


// Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.GetBookmarkFieldAbbrStr
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// EShortcutIconCommandID                  CommandID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           OutString                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UShortcutRingIcon_Command_C::GetBookmarkFieldAbbrStr(EShortcutIconCommandID CommandID, class FString* OutString) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRingIcon_Command_C", "GetBookmarkFieldAbbrStr");

	Params::ShortcutRingIcon_Command_C_GetBookmarkFieldAbbrStr Parms{};

	Parms.CommandID = CommandID;

	UObject::ProcessEvent(Func, &Parms);

	if (OutString != nullptr)
		*OutString = std::move(Parms.OutString);

	return Parms.ReturnValue;
}

}


#pragma once

 

// Package: WBP_CommandMenuBookmarkRegister

#include "Basic.hpp"

#include "WBP_CommandMenuBookmarkRegister_classes.hpp"
#include "WBP_CommandMenuBookmarkRegister_parameters.hpp"


namespace SDK
{

// Function WBP_CommandMenuBookmarkRegister.WBP_CommandMenuBookmarkRegister_C.UpdateFinish__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBBookMarkerSlot                       BookmarkSlot                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           KeyString                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_CommandMenuBookmarkRegister_C::UpdateFinish__DelegateSignature(ESBBookMarkerSlot BookmarkSlot, const class FString& KeyString)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommandMenuBookmarkRegister_C", "UpdateFinish__DelegateSignature");

	Params::WBP_CommandMenuBookmarkRegister_C_UpdateFinish__DelegateSignature Parms{};

	Parms.BookmarkSlot = BookmarkSlot;
	Parms.KeyString = std::move(KeyString);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CommandMenuBookmarkRegister.WBP_CommandMenuBookmarkRegister_C.ExecuteUbergraph_WBP_CommandMenuBookmarkRegister
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CommandMenuBookmarkRegister_C::ExecuteUbergraph_WBP_CommandMenuBookmarkRegister(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommandMenuBookmarkRegister_C", "ExecuteUbergraph_WBP_CommandMenuBookmarkRegister");

	Params::WBP_CommandMenuBookmarkRegister_C_ExecuteUbergraph_WBP_CommandMenuBookmarkRegister Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CommandMenuBookmarkRegister.WBP_CommandMenuBookmarkRegister_C.BndEvt__WBP_CommandMenuBookmarkRegister_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature
// (BlueprintEvent)

void UWBP_CommandMenuBookmarkRegister_C::BndEvt__WBP_CommandMenuBookmarkRegister_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommandMenuBookmarkRegister_C", "BndEvt__WBP_CommandMenuBookmarkRegister_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CommandMenuBookmarkRegister.WBP_CommandMenuBookmarkRegister_C.BndEvt__Button2_1_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_CommandMenuBookmarkRegister_C::BndEvt__Button2_1_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommandMenuBookmarkRegister_C", "BndEvt__Button2_1_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CommandMenuBookmarkRegister.WBP_CommandMenuBookmarkRegister_C.BndEvt__Button1_1_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_CommandMenuBookmarkRegister_C::BndEvt__Button1_1_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommandMenuBookmarkRegister_C", "BndEvt__Button1_1_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CommandMenuBookmarkRegister.WBP_CommandMenuBookmarkRegister_C.BndEvt__Button2_1_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_CommandMenuBookmarkRegister_C::BndEvt__Button2_1_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommandMenuBookmarkRegister_C", "BndEvt__Button2_1_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CommandMenuBookmarkRegister.WBP_CommandMenuBookmarkRegister_C.BndEvt__Button1_1_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_CommandMenuBookmarkRegister_C::BndEvt__Button1_1_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommandMenuBookmarkRegister_C", "BndEvt__Button1_1_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CommandMenuBookmarkRegister.WBP_CommandMenuBookmarkRegister_C.BndEvt__Button1_2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_CommandMenuBookmarkRegister_C::BndEvt__Button1_2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommandMenuBookmarkRegister_C", "BndEvt__Button1_2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CommandMenuBookmarkRegister.WBP_CommandMenuBookmarkRegister_C.BndEvt__Button1_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_CommandMenuBookmarkRegister_C::BndEvt__Button1_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommandMenuBookmarkRegister_C", "BndEvt__Button1_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CommandMenuBookmarkRegister.WBP_CommandMenuBookmarkRegister_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_CommandMenuBookmarkRegister_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommandMenuBookmarkRegister_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CommandMenuBookmarkRegister.WBP_CommandMenuBookmarkRegister_C.UpdateKey
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_CommandMenuBookmarkRegister_C::UpdateKey(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommandMenuBookmarkRegister_C", "UpdateKey");

	Params::WBP_CommandMenuBookmarkRegister_C_UpdateKey Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CommandMenuBookmarkRegister.WBP_CommandMenuBookmarkRegister_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_CommandMenuBookmarkRegister_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommandMenuBookmarkRegister_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CommandMenuBookmarkRegister.WBP_CommandMenuBookmarkRegister_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_CommandMenuBookmarkRegister_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommandMenuBookmarkRegister_C", "OnKeyDown");

	Params::WBP_CommandMenuBookmarkRegister_C_OnKeyDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_CommandMenuBookmarkRegister.WBP_CommandMenuBookmarkRegister_C.IsTestKeyUse
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_CommandMenuBookmarkRegister_C::IsTestKeyUse(const struct FKey& Key, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommandMenuBookmarkRegister_C", "IsTestKeyUse");

	Params::WBP_CommandMenuBookmarkRegister_C_IsTestKeyUse Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function WBP_CommandMenuBookmarkRegister.WBP_CommandMenuBookmarkRegister_C.NewFunction_0
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_CommandMenuBookmarkRegister_C::NewFunction_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommandMenuBookmarkRegister_C", "NewFunction_0");

	UObject::ProcessEvent(Func, nullptr);
}

}


#pragma once

 

// Package: BookmarkDelete

#include "Basic.hpp"

#include "BookmarkDelete_classes.hpp"
#include "BookmarkDelete_parameters.hpp"


namespace SDK
{

// Function BookmarkDelete.BookmarkDelete_C.BndEvt__Btn_Clear_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBookmarkDelete_C::BndEvt__Btn_Clear_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BookmarkDelete_C", "BndEvt__Btn_Clear_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BookmarkDelete.BookmarkDelete_C.BndEvt__Btn_Clear_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBookmarkDelete_C::BndEvt__Btn_Clear_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BookmarkDelete_C", "BndEvt__Btn_Clear_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BookmarkDelete.BookmarkDelete_C.BndEvt__Btn_Clear_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBookmarkDelete_C::BndEvt__Btn_Clear_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BookmarkDelete_C", "BndEvt__Btn_Clear_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BookmarkDelete.BookmarkDelete_C.ExecuteUbergraph_BookmarkDelete
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBookmarkDelete_C::ExecuteUbergraph_BookmarkDelete(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BookmarkDelete_C", "ExecuteUbergraph_BookmarkDelete");

	Params::BookmarkDelete_C_ExecuteUbergraph_BookmarkDelete Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BookmarkDelete.BookmarkDelete_C.OnRequestBookmarkClear__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBookmarkDelete_C::OnRequestBookmarkClear__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BookmarkDelete_C", "OnRequestBookmarkClear__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}


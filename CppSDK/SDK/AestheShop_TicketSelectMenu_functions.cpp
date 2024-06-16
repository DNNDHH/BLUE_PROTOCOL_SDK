#pragma once

 

// Package: AestheShop_TicketSelectMenu

#include "Basic.hpp"

#include "AestheShop_TicketSelectMenu_classes.hpp"
#include "AestheShop_TicketSelectMenu_parameters.hpp"


namespace SDK
{

// Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsCourseDecided                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   InTicketTokenId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InUseTicketNum                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAestheShop_TicketSelectMenu_C::OnClose__DelegateSignature(bool InIsCourseDecided, int32 InTicketTokenId, int32 InUseTicketNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AestheShop_TicketSelectMenu_C", "OnClose__DelegateSignature");

	Params::AestheShop_TicketSelectMenu_C_OnClose__DelegateSignature Parms{};

	Parms.InIsCourseDecided = InIsCourseDecided;
	Parms.InTicketTokenId = InTicketTokenId;
	Parms.InUseTicketNum = InUseTicketNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.ExecuteUbergraph_AestheShop_TicketSelectMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAestheShop_TicketSelectMenu_C::ExecuteUbergraph_AestheShop_TicketSelectMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AestheShop_TicketSelectMenu_C", "ExecuteUbergraph_AestheShop_TicketSelectMenu");

	Params::AestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.AdventureBoardError_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAestheShop_TicketSelectMenu_C::AdventureBoardError_Event(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AestheShop_TicketSelectMenu_C", "AdventureBoardError_Event");

	Params::AestheShop_TicketSelectMenu_C_AdventureBoardError_Event Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.OnCheckStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAestheShop_TicketSelectMenu_C::OnCheckStatus(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AestheShop_TicketSelectMenu_C", "OnCheckStatus");

	Params::AestheShop_TicketSelectMenu_C_OnCheckStatus Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UAestheShop_TicketSelectMenu_C::BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AestheShop_TicketSelectMenu_C", "BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.BndEvt__CmnBtnBack_K2Node_ComponentBoundEvent_4_EventClicked__DelegateSignature
// (BlueprintEvent)

void UAestheShop_TicketSelectMenu_C::BndEvt__CmnBtnBack_K2Node_ComponentBoundEvent_4_EventClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AestheShop_TicketSelectMenu_C", "BndEvt__CmnBtnBack_K2Node_ComponentBoundEvent_4_EventClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.OnCourseListItemSelected����
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InCourseId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InTicketTokenId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InHoldTicketTokenAmount                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAestheShop_TicketSelectMenu_C::OnCourseListItemSelected____(int32 InCourseId, int32 InTicketTokenId, int32 InHoldTicketTokenAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AestheShop_TicketSelectMenu_C", "OnCourseListItemSelected����");

	Params::AestheShop_TicketSelectMenu_C_OnCourseListItemSelected____ Parms{};

	Parms.InCourseId = InCourseId;
	Parms.InTicketTokenId = InTicketTokenId;
	Parms.InHoldTicketTokenAmount = InHoldTicketTokenAmount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.OnCourseDecided
// (BlueprintCallable, BlueprintEvent)

void UAestheShop_TicketSelectMenu_C::OnCourseDecided()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AestheShop_TicketSelectMenu_C", "OnCourseDecided");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.BndEvt__Btn_Decide_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UAestheShop_TicketSelectMenu_C::BndEvt__Btn_Decide_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AestheShop_TicketSelectMenu_C", "BndEvt__Btn_Decide_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.BndEvt__Btn_Decide_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UAestheShop_TicketSelectMenu_C::BndEvt__Btn_Decide_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AestheShop_TicketSelectMenu_C", "BndEvt__Btn_Decide_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.OnPress_Cancel
// (Event, Public, BlueprintEvent)

void UAestheShop_TicketSelectMenu_C::OnPress_Cancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AestheShop_TicketSelectMenu_C", "OnPress_Cancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.OnEndLastConfirmDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAestheShop_TicketSelectMenu_C::OnEndLastConfirmDialog(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AestheShop_TicketSelectMenu_C", "OnEndLastConfirmDialog");

	Params::AestheShop_TicketSelectMenu_C_OnEndLastConfirmDialog Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.OpenLastConfirmDialog
// (BlueprintCallable, BlueprintEvent)

void UAestheShop_TicketSelectMenu_C::OpenLastConfirmDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AestheShop_TicketSelectMenu_C", "OpenLastConfirmDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.BndEvt__Btn_Decide_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UAestheShop_TicketSelectMenu_C::BndEvt__Btn_Decide_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AestheShop_TicketSelectMenu_C", "BndEvt__Btn_Decide_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAestheShop_TicketSelectMenu_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AestheShop_TicketSelectMenu_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAestheShop_TicketSelectMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AestheShop_TicketSelectMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAestheShop_TicketSelectMenu_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AestheShop_TicketSelectMenu_C", "PreConstruct");

	Params::AestheShop_TicketSelectMenu_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.Close
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAestheShop_TicketSelectMenu_C::Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AestheShop_TicketSelectMenu_C", "Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.SetListItemSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InTicketTokenId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIsSelected                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAestheShop_TicketSelectMenu_C::SetListItemSelected(int32 InTicketTokenId, bool InIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AestheShop_TicketSelectMenu_C", "SetListItemSelected");

	Params::AestheShop_TicketSelectMenu_C_SetListItemSelected Parms{};

	Parms.InTicketTokenId = InTicketTokenId;
	Parms.InIsSelected = InIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.CreateCourseItemList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAestheShop_TicketSelectMenu_C::CreateCourseItemList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AestheShop_TicketSelectMenu_C", "CreateCourseItemList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.CheckIfCourseIsUsable
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InTicketTokenId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InHoldTicketNum                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutIsUsable                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAestheShop_TicketSelectMenu_C::CheckIfCourseIsUsable(int32 InTicketTokenId, int32 InHoldTicketNum, bool* OutIsUsable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AestheShop_TicketSelectMenu_C", "CheckIfCourseIsUsable");

	Params::AestheShop_TicketSelectMenu_C_CheckIfCourseIsUsable Parms{};

	Parms.InTicketTokenId = InTicketTokenId;
	Parms.InHoldTicketNum = InHoldTicketNum;

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsUsable != nullptr)
		*OutIsUsable = Parms.OutIsUsable;
}


// Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.GetHoldTicketTokenAmount
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FSBCharacterToken>        InHoldTicketTokens                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   InTicketTokenId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutIsValid                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   OutAmount                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAestheShop_TicketSelectMenu_C::GetHoldTicketTokenAmount(TArray<struct FSBCharacterToken>& InHoldTicketTokens, int32 InTicketTokenId, bool* OutIsValid, int32* OutAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AestheShop_TicketSelectMenu_C", "GetHoldTicketTokenAmount");

	Params::AestheShop_TicketSelectMenu_C_GetHoldTicketTokenAmount Parms{};

	Parms.InHoldTicketTokens = std::move(InHoldTicketTokens);
	Parms.InTicketTokenId = InTicketTokenId;

	UObject::ProcessEvent(Func, &Parms);

	InHoldTicketTokens = std::move(Parms.InHoldTicketTokens);

	if (OutIsValid != nullptr)
		*OutIsValid = Parms.OutIsValid;

	if (OutAmount != nullptr)
		*OutAmount = Parms.OutAmount;
}


// Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.SetupCourseDetail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InCourseId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAestheShop_TicketSelectMenu_C::SetupCourseDetail(int32 InCourseId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AestheShop_TicketSelectMenu_C", "SetupCourseDetail");

	Params::AestheShop_TicketSelectMenu_C_SetupCourseDetail Parms{};

	Parms.InCourseId = InCourseId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.SetCourseDetailVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAestheShop_TicketSelectMenu_C::SetCourseDetailVisibility(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AestheShop_TicketSelectMenu_C", "SetCourseDetailVisibility");

	Params::AestheShop_TicketSelectMenu_C_SetCourseDetailVisibility Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.GetTicketTokenNameTextId
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FMasterToken>             InTokenMasterDataArray                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   InTicketTokenId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutIsValid                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSBTextTableHash                 OutTextId                                              (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UAestheShop_TicketSelectMenu_C::GetTicketTokenNameTextId(TArray<struct FMasterToken>& InTokenMasterDataArray, int32 InTicketTokenId, bool* OutIsValid, struct FSBTextTableHash* OutTextId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AestheShop_TicketSelectMenu_C", "GetTicketTokenNameTextId");

	Params::AestheShop_TicketSelectMenu_C_GetTicketTokenNameTextId Parms{};

	Parms.InTokenMasterDataArray = std::move(InTokenMasterDataArray);
	Parms.InTicketTokenId = InTicketTokenId;

	UObject::ProcessEvent(Func, &Parms);

	InTokenMasterDataArray = std::move(Parms.InTokenMasterDataArray);

	if (OutIsValid != nullptr)
		*OutIsValid = Parms.OutIsValid;

	if (OutTextId != nullptr)
		*OutTextId = std::move(Parms.OutTextId);
}

}


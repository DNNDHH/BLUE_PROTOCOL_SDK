#pragma once

 

// Package: AwardIconItemList

#include "Basic.hpp"

#include "AwardIconItemList_classes.hpp"
#include "AwardIconItemList_parameters.hpp"


namespace SDK
{

// Function AwardIconItemList.AwardIconItemList_C.ClickedBtnAwardItemIcon__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   AwardId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAwardIconItemList_C::ClickedBtnAwardItemIcon__DelegateSignature(int32 AwardId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AwardIconItemList_C", "ClickedBtnAwardItemIcon__DelegateSignature");

	Params::AwardIconItemList_C_ClickedBtnAwardItemIcon__DelegateSignature Parms{};

	Parms.AwardId = AwardId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AwardIconItemList.AwardIconItemList_C.OnClickEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UAwardIconItemList_C::OnClickEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AwardIconItemList_C", "OnClickEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AwardIconItemList.AwardIconItemList_C.OnHover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UAwardIconItemList_C::OnHover__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AwardIconItemList_C", "OnHover__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AwardIconItemList.AwardIconItemList_C.OnUnhover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UAwardIconItemList_C::OnUnhover__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AwardIconItemList_C", "OnUnhover__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AwardIconItemList.AwardIconItemList_C.ExecuteUbergraph_AwardIconItemList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAwardIconItemList_C::ExecuteUbergraph_AwardIconItemList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AwardIconItemList_C", "ExecuteUbergraph_AwardIconItemList");

	Params::AwardIconItemList_C_ExecuteUbergraph_AwardIconItemList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AwardIconItemList.AwardIconItemList_C.BndEvt__AwardIconItemList_Button_263_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UAwardIconItemList_C::BndEvt__AwardIconItemList_Button_263_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AwardIconItemList_C", "BndEvt__AwardIconItemList_Button_263_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AwardIconItemList.AwardIconItemList_C.BndEvt__AwardIconItemList_Button_263_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UAwardIconItemList_C::BndEvt__AwardIconItemList_Button_263_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AwardIconItemList_C", "BndEvt__AwardIconItemList_Button_263_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AwardIconItemList.AwardIconItemList_C.BndEvt__AwardIconItemList_Button_263_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UAwardIconItemList_C::BndEvt__AwardIconItemList_Button_263_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AwardIconItemList_C", "BndEvt__AwardIconItemList_Button_263_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AwardIconItemList.AwardIconItemList_C.BndEvt__AwardIconItemList_Button_263_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UAwardIconItemList_C::BndEvt__AwardIconItemList_Button_263_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AwardIconItemList_C", "BndEvt__AwardIconItemList_Button_263_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AwardIconItemList.AwardIconItemList_C.SetBtnEnable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAwardIconItemList_C::SetBtnEnable(bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AwardIconItemList_C", "SetBtnEnable");

	Params::AwardIconItemList_C_SetBtnEnable Parms{};

	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AwardIconItemList.AwardIconItemList_C.SetData
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                           InAwardIdList                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAwardIconItemList_C::SetData(const TArray<int32>& InAwardIdList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AwardIconItemList_C", "SetData");

	Params::AwardIconItemList_C_SetData Parms{};

	Parms.InAwardIdList = std::move(InAwardIdList);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AwardIconItemList.AwardIconItemList_C.BndEvt__AwardIconItemList_AwardIconItem_2_K2Node_ComponentBoundEvent_2_ClickedBtnAwardList__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   OutAwardId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAwardIconItemList_C::BndEvt__AwardIconItemList_AwardIconItem_2_K2Node_ComponentBoundEvent_2_ClickedBtnAwardList__DelegateSignature(int32 OutAwardId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AwardIconItemList_C", "BndEvt__AwardIconItemList_AwardIconItem_2_K2Node_ComponentBoundEvent_2_ClickedBtnAwardList__DelegateSignature");

	Params::AwardIconItemList_C_BndEvt__AwardIconItemList_AwardIconItem_2_K2Node_ComponentBoundEvent_2_ClickedBtnAwardList__DelegateSignature Parms{};

	Parms.OutAwardId = OutAwardId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AwardIconItemList.AwardIconItemList_C.BndEvt__AwardIconItemList_AwardIconItem_1_K2Node_ComponentBoundEvent_1_ClickedBtnAwardList__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   OutAwardId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAwardIconItemList_C::BndEvt__AwardIconItemList_AwardIconItem_1_K2Node_ComponentBoundEvent_1_ClickedBtnAwardList__DelegateSignature(int32 OutAwardId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AwardIconItemList_C", "BndEvt__AwardIconItemList_AwardIconItem_1_K2Node_ComponentBoundEvent_1_ClickedBtnAwardList__DelegateSignature");

	Params::AwardIconItemList_C_BndEvt__AwardIconItemList_AwardIconItem_1_K2Node_ComponentBoundEvent_1_ClickedBtnAwardList__DelegateSignature Parms{};

	Parms.OutAwardId = OutAwardId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AwardIconItemList.AwardIconItemList_C.BndEvt__AwardIconItemList_AwardIconItem_K2Node_ComponentBoundEvent_0_ClickedBtnAwardList__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   OutAwardId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAwardIconItemList_C::BndEvt__AwardIconItemList_AwardIconItem_K2Node_ComponentBoundEvent_0_ClickedBtnAwardList__DelegateSignature(int32 OutAwardId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AwardIconItemList_C", "BndEvt__AwardIconItemList_AwardIconItem_K2Node_ComponentBoundEvent_0_ClickedBtnAwardList__DelegateSignature");

	Params::AwardIconItemList_C_BndEvt__AwardIconItemList_AwardIconItem_K2Node_ComponentBoundEvent_0_ClickedBtnAwardList__DelegateSignature Parms{};

	Parms.OutAwardId = OutAwardId;

	UObject::ProcessEvent(Func, &Parms);
}

}


#pragma once

 

// Package: AwardIconItem

#include "Basic.hpp"

#include "AwardIconItem_classes.hpp"
#include "AwardIconItem_parameters.hpp"


namespace SDK
{

// Function AwardIconItem.AwardIconItem_C.ClickedBtnAwardList__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   OutAwardId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAwardIconItem_C::ClickedBtnAwardList__DelegateSignature(int32 OutAwardId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AwardIconItem_C", "ClickedBtnAwardList__DelegateSignature");

	Params::AwardIconItem_C_ClickedBtnAwardList__DelegateSignature Parms{};

	Parms.OutAwardId = OutAwardId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AwardIconItem.AwardIconItem_C.ExecuteUbergraph_AwardIconItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAwardIconItem_C::ExecuteUbergraph_AwardIconItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AwardIconItem_C", "ExecuteUbergraph_AwardIconItem");

	Params::AwardIconItem_C_ExecuteUbergraph_AwardIconItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AwardIconItem.AwardIconItem_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAwardIconItem_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AwardIconItem_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AwardIconItem.AwardIconItem_C.IconLoadRequestCheckStart
// (BlueprintCallable, BlueprintEvent)

void UAwardIconItem_C::IconLoadRequestCheckStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AwardIconItem_C", "IconLoadRequestCheckStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AwardIconItem.AwardIconItem_C.IconLoadStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>        Param_NowLoadTexture                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UAwardIconItem_C::IconLoadStart(TSoftObjectPtr<class UTexture2D> Param_NowLoadTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AwardIconItem_C", "IconLoadStart");

	Params::AwardIconItem_C_IconLoadStart Parms{};

	Parms.Param_NowLoadTexture = Param_NowLoadTexture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AwardIconItem.AwardIconItem_C.IconLoadRequest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>        TextureReference                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UAwardIconItem_C::IconLoadRequest(TSoftObjectPtr<class UTexture2D> TextureReference)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AwardIconItem_C", "IconLoadRequest");

	Params::AwardIconItem_C_IconLoadRequest Parms{};

	Parms.TextureReference = TextureReference;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AwardIconItem.AwardIconItem_C.BndEvt__AwardIconItem_AwardIconBtn_Hide_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UAwardIconItem_C::BndEvt__AwardIconItem_AwardIconBtn_Hide_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AwardIconItem_C", "BndEvt__AwardIconItem_AwardIconBtn_Hide_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AwardIconItem.AwardIconItem_C.BndEvt__AwardIconItem_AwardIconBtn_SetData_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UAwardIconItem_C::BndEvt__AwardIconItem_AwardIconBtn_SetData_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AwardIconItem_C", "BndEvt__AwardIconItem_AwardIconBtn_SetData_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AwardIconItem.AwardIconItem_C.BndEvt__AwardIconItem_AwardIconBtn_SetData_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UAwardIconItem_C::BndEvt__AwardIconItem_AwardIconBtn_SetData_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AwardIconItem_C", "BndEvt__AwardIconItem_AwardIconBtn_SetData_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AwardIconItem.AwardIconItem_C.BndEvt__AwardIconItem_AwardIconBtn_Hide_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UAwardIconItem_C::BndEvt__AwardIconItem_AwardIconBtn_Hide_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AwardIconItem_C", "BndEvt__AwardIconItem_AwardIconBtn_Hide_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AwardIconItem.AwardIconItem_C.BndEvt__AwardIconItem_AwardIconBtn_SetData_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UAwardIconItem_C::BndEvt__AwardIconItem_AwardIconBtn_SetData_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AwardIconItem_C", "BndEvt__AwardIconItem_AwardIconBtn_SetData_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AwardIconItem.AwardIconItem_C.BndEvt__AwardIconItem_AwardIconBtn_SetData_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UAwardIconItem_C::BndEvt__AwardIconItem_AwardIconBtn_SetData_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AwardIconItem_C", "BndEvt__AwardIconItem_AwardIconBtn_SetData_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AwardIconItem.AwardIconItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAwardIconItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AwardIconItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AwardIconItem.AwardIconItem_C.BndEvt__AwardIconItem_Button_148_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UAwardIconItem_C::BndEvt__AwardIconItem_Button_148_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AwardIconItem_C", "BndEvt__AwardIconItem_Button_148_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AwardIconItem.AwardIconItem_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAwardIconItem_C::SetData(int32 InId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AwardIconItem_C", "SetData");

	Params::AwardIconItem_C_SetData Parms{};

	Parms.InId = InId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AwardIconItem.AwardIconItem_C.SetIsBtnEnable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInIsEnabled                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAwardIconItem_C::SetIsBtnEnable(bool bInIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AwardIconItem_C", "SetIsBtnEnable");

	Params::AwardIconItem_C_SetIsBtnEnable Parms{};

	Parms.bInIsEnabled = bInIsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AwardIconItem.AwardIconItem_C.OnLoaded_DF1405EB4B765EAB9E4E3880C6A49640
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAwardIconItem_C::OnLoaded_DF1405EB4B765EAB9E4E3880C6A49640(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AwardIconItem_C", "OnLoaded_DF1405EB4B765EAB9E4E3880C6A49640");

	Params::AwardIconItem_C_OnLoaded_DF1405EB4B765EAB9E4E3880C6A49640 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AwardIconItem.AwardIconItem_C.Get_AwardIconBtn_SetData_ToolTipWidget_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWBP_CommonToolTipDetail_Fixed_C* ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWBP_CommonToolTipDetail_Fixed_C* UAwardIconItem_C::Get_AwardIconBtn_SetData_ToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AwardIconItem_C", "Get_AwardIconBtn_SetData_ToolTipWidget_0");

	Params::AwardIconItem_C_Get_AwardIconBtn_SetData_ToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


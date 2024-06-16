#pragma once

 

// Package: StampCategoryButton

#include "Basic.hpp"

#include "StampCategoryButton_classes.hpp"
#include "StampCategoryButton_parameters.hpp"


namespace SDK
{

// Function StampCategoryButton.StampCategoryButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStampCategoryButton_C::OnClicked__DelegateSignature(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StampCategoryButton_C", "OnClicked__DelegateSignature");

	Params::StampCategoryButton_C_OnClicked__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StampCategoryButton.StampCategoryButton_C.ExecuteUbergraph_StampCategoryButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStampCategoryButton_C::ExecuteUbergraph_StampCategoryButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StampCategoryButton_C", "ExecuteUbergraph_StampCategoryButton");

	Params::StampCategoryButton_C_ExecuteUbergraph_StampCategoryButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StampCategoryButton.StampCategoryButton_C.BndEvt__CategoryButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStampCategoryButton_C::BndEvt__CategoryButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StampCategoryButton_C", "BndEvt__CategoryButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StampCategoryButton.StampCategoryButton_C.BndEvt__CategoryButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStampCategoryButton_C::BndEvt__CategoryButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StampCategoryButton_C", "BndEvt__CategoryButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StampCategoryButton.StampCategoryButton_C.BndEvt__CategoryButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UStampCategoryButton_C::BndEvt__CategoryButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StampCategoryButton_C", "BndEvt__CategoryButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StampCategoryButton.StampCategoryButton_C.UpdateTexture
// (BlueprintCallable, BlueprintEvent)

void UStampCategoryButton_C::UpdateTexture()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StampCategoryButton_C", "UpdateTexture");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StampCategoryButton.StampCategoryButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UStampCategoryButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StampCategoryButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StampCategoryButton.StampCategoryButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UStampCategoryButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StampCategoryButton_C", "PreConstruct");

	Params::StampCategoryButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StampCategoryButton.StampCategoryButton_C.OnLoaded_7BD3D73A4506A9148F4DAABAF78E8083
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStampCategoryButton_C::OnLoaded_7BD3D73A4506A9148F4DAABAF78E8083(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StampCategoryButton_C", "OnLoaded_7BD3D73A4506A9148F4DAABAF78E8083");

	Params::StampCategoryButton_C_OnLoaded_7BD3D73A4506A9148F4DAABAF78E8083 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StampCategoryButton.StampCategoryButton_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBStampCategoryMasterData       InStampCategoryMasterData                              (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   InIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStampCategoryButton_C::Update(const struct FSBStampCategoryMasterData& InStampCategoryMasterData, int32 InIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StampCategoryButton_C", "Update");

	Params::StampCategoryButton_C_Update Parms{};

	Parms.InStampCategoryMasterData = std::move(InStampCategoryMasterData);
	Parms.InIndex = InIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StampCategoryButton.StampCategoryButton_C.SetEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bEnabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UStampCategoryButton_C::SetEnabled(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StampCategoryButton_C", "SetEnabled");

	Params::StampCategoryButton_C_SetEnabled Parms{};

	Parms.bEnabled = bEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StampCategoryButton.StampCategoryButton_C.SetLimitedItemNumber
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Number                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStampCategoryButton_C::SetLimitedItemNumber(int32 Number)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StampCategoryButton_C", "SetLimitedItemNumber");

	Params::StampCategoryButton_C_SetLimitedItemNumber Parms{};

	Parms.Number = Number;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StampCategoryButton.StampCategoryButton_C.SetIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStampCategoryButton_C::SetIndex(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StampCategoryButton_C", "SetIndex");

	Params::StampCategoryButton_C_SetIndex Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StampCategoryButton.StampCategoryButton_C.SetAlpha
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    BMax                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UStampCategoryButton_C::SetAlpha(bool BMax)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StampCategoryButton_C", "SetAlpha");

	Params::StampCategoryButton_C_SetAlpha Parms{};

	Parms.BMax = BMax;

	UObject::ProcessEvent(Func, &Parms);
}

}


#pragma once

 

// Package: CostumeIcon

#include "Basic.hpp"

#include "CostumeIcon_classes.hpp"
#include "CostumeIcon_parameters.hpp"


namespace SDK
{

// Function CostumeIcon.CostumeIcon_C.OnClickedCostumeIcon__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   OutItemIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           OutUniqueId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCostumeIcon_C::OnClickedCostumeIcon__DelegateSignature(int32 OutItemIndex, const class FString& OutUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CostumeIcon_C", "OnClickedCostumeIcon__DelegateSignature");

	Params::CostumeIcon_C_OnClickedCostumeIcon__DelegateSignature Parms{};

	Parms.OutItemIndex = OutItemIndex;
	Parms.OutUniqueId = std::move(OutUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CostumeIcon.CostumeIcon_C.ExecuteUbergraph_CostumeIcon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCostumeIcon_C::ExecuteUbergraph_CostumeIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CostumeIcon_C", "ExecuteUbergraph_CostumeIcon");

	Params::CostumeIcon_C_ExecuteUbergraph_CostumeIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CostumeIcon.CostumeIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCostumeIcon_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CostumeIcon_C", "PreConstruct");

	Params::CostumeIcon_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CostumeIcon.CostumeIcon_C.BndEvt__CostumeIcon_CommonIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonIcon_C*                    Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCostumeIcon_C::BndEvt__CostumeIcon_CommonIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature(class UCommonIcon_C* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CostumeIcon_C", "BndEvt__CostumeIcon_CommonIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");

	Params::CostumeIcon_C_BndEvt__CostumeIcon_CommonIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CostumeIcon.CostumeIcon_C.SetMountImagineData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InItemIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           InUniqueId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           Param_MountImagineId                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCostumeIcon_C::SetMountImagineData(int32 InItemIndex, const class FString& InUniqueId, const class FString& Param_MountImagineId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CostumeIcon_C", "SetMountImagineData");

	Params::CostumeIcon_C_SetMountImagineData Parms{};

	Parms.InItemIndex = InItemIndex;
	Parms.InUniqueId = std::move(InUniqueId);
	Parms.Param_MountImagineId = std::move(Param_MountImagineId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CostumeIcon.CostumeIcon_C.SetCostumeData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_ItemIndex                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Param_UniqueId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FCostumeData                     CostumeData                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UCostumeIcon_C::SetCostumeData(int32 Param_ItemIndex, const class FString& Param_UniqueId, const struct FCostumeData& CostumeData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CostumeIcon_C", "SetCostumeData");

	Params::CostumeIcon_C_SetCostumeData Parms{};

	Parms.Param_ItemIndex = Param_ItemIndex;
	Parms.Param_UniqueId = std::move(Param_UniqueId);
	Parms.CostumeData = std::move(CostumeData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CostumeIcon.CostumeIcon_C.SetColorIconBage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCostumeData                     CostumeData                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UCostumeIcon_C::SetColorIconBage(const struct FCostumeData& CostumeData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CostumeIcon_C", "SetColorIconBage");

	Params::CostumeIcon_C_SetColorIconBage Parms{};

	Parms.CostumeData = std::move(CostumeData);

	UObject::ProcessEvent(Func, &Parms);
}

}


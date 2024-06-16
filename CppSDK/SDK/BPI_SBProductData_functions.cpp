#pragma once

 

// Package: BPI_SBProductData

#include "Basic.hpp"

#include "BPI_SBProductData_classes.hpp"
#include "BPI_SBProductData_parameters.hpp"


namespace SDK
{

// Function BPI_SBProductData.BPI_SBProductData_C.SetScrollOffset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_SBProductData_C::SetScrollOffset(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_SBProductData_C", "SetScrollOffset");

	Params::BPI_SBProductData_C_SetScrollOffset Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_SBProductData.BPI_SBProductData_C.GetSelectedData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SBProductItemData_C*          Data                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_SBProductData_C::GetSelectedData(class UBP_SBProductItemData_C** Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_SBProductData_C", "GetSelectedData");

	Params::BPI_SBProductData_C_GetSelectedData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = Parms.Data;
}


// Function BPI_SBProductData.BPI_SBProductData_C.SetSelectedData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SBProductItemData_C*          Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_SBProductData_C::SetSelectedData(class UBP_SBProductItemData_C* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_SBProductData_C", "SetSelectedData");

	Params::BPI_SBProductData_C_SetSelectedData Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_SBProductData.BPI_SBProductData_C.GetDetailType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_SBProductDetailType                   DetailType                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_SBProductData_C::GetDetailType(E_SBProductDetailType* DetailType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_SBProductData_C", "GetDetailType");

	Params::BPI_SBProductData_C_GetDetailType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (DetailType != nullptr)
		*DetailType = Parms.DetailType;
}


// Function BPI_SBProductData.BPI_SBProductData_C.IsCostumeSet
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bReturnValue                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_SBProductData_C::IsCostumeSet(bool* bReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_SBProductData_C", "IsCostumeSet");

	Params::BPI_SBProductData_C_IsCostumeSet Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bReturnValue != nullptr)
		*bReturnValue = Parms.bReturnValue;
}


// Function BPI_SBProductData.BPI_SBProductData_C.GetIconItemData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SBProductItemData_C*          ItemData                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_SBProductData_C::GetIconItemData(class UBP_SBProductItemData_C** ItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_SBProductData_C", "GetIconItemData");

	Params::BPI_SBProductData_C_GetIconItemData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ItemData != nullptr)
		*ItemData = Parms.ItemData;
}


// Function BPI_SBProductData.BPI_SBProductData_C.IsItemBox
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bReturnValue                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_SBProductData_C::IsItemBox(bool* bReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_SBProductData_C", "IsItemBox");

	Params::BPI_SBProductData_C_IsItemBox Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bReturnValue != nullptr)
		*bReturnValue = Parms.bReturnValue;
}


// Function BPI_SBProductData.BPI_SBProductData_C.GetItemBoxDepthIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_SBProductData_C::GetItemBoxDepthIndex(int32* Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_SBProductData_C", "GetItemBoxDepthIndex");

	Params::BPI_SBProductData_C_GetItemBoxDepthIndex Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Index != nullptr)
		*Param_Index = Parms.Param_Index;
}


// Function BPI_SBProductData.BPI_SBProductData_C.GetParentData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                                    bIsValid                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_SBProductData_C>ParentData                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_SBProductData_C::GetParentData(bool* bIsValid, TScriptInterface<class IBPI_SBProductData_C>* ParentData) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_SBProductData_C", "GetParentData");

	Params::BPI_SBProductData_C_GetParentData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bIsValid != nullptr)
		*bIsValid = Parms.bIsValid;

	if (ParentData != nullptr)
		*ParentData = Parms.ParentData;
}


// Function BPI_SBProductData.BPI_SBProductData_C.GetScrollOffset
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float IBPI_SBProductData_C::GetScrollOffset() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_SBProductData_C", "GetScrollOffset");

	Params::BPI_SBProductData_C_GetScrollOffset Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPI_SBProductData.BPI_SBProductData_C.GetItemDataList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<class UBP_SBProductItemData_C*>  ReturnValue                                            (Parm, OutParm, ReturnParm)

TArray<class UBP_SBProductItemData_C*> IBPI_SBProductData_C::GetItemDataList() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_SBProductData_C", "GetItemDataList");

	Params::BPI_SBProductData_C_GetItemDataList Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


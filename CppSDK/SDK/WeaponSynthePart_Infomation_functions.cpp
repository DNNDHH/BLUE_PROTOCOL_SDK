#pragma once

 

// Package: WeaponSynthePart_Infomation

#include "Basic.hpp"

#include "WeaponSynthePart_Infomation_classes.hpp"
#include "WeaponSynthePart_Infomation_parameters.hpp"


namespace SDK
{

// Function WeaponSynthePart_Infomation.WeaponSynthePart_Infomation_C.ExecuteUbergraph_WeaponSynthePart_Infomation
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthePart_Infomation_C::ExecuteUbergraph_WeaponSynthePart_Infomation(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_Infomation_C", "ExecuteUbergraph_WeaponSynthePart_Infomation");

	Params::WeaponSynthePart_Infomation_C_ExecuteUbergraph_WeaponSynthePart_Infomation Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_Infomation.WeaponSynthePart_Infomation_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthePart_Infomation_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_Infomation_C", "PreConstruct");

	Params::WeaponSynthePart_Infomation_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_Infomation.WeaponSynthePart_Infomation_C.SetText1Visible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthePart_Infomation_C::SetText1Visible(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_Infomation_C", "SetText1Visible");

	Params::WeaponSynthePart_Infomation_C_SetText1Visible Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_Infomation.WeaponSynthePart_Infomation_C.SetText1Table
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBTextTableAsset*                In_Text_Table                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthePart_Infomation_C::SetText1Table(class USBTextTableAsset* In_Text_Table)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_Infomation_C", "SetText1Table");

	Params::WeaponSynthePart_Infomation_C_SetText1Table Parms{};

	Parms.In_Text_Table = In_Text_Table;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_Infomation.WeaponSynthePart_Infomation_C.SetText1ID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   In_Text_Id                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthePart_Infomation_C::SetText1ID(int32 In_Text_Id)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_Infomation_C", "SetText1ID");

	Params::WeaponSynthePart_Infomation_C_SetText1ID Parms{};

	Parms.In_Text_Id = In_Text_Id;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_Infomation.WeaponSynthePart_Infomation_C.SetText2Visible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthePart_Infomation_C::SetText2Visible(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_Infomation_C", "SetText2Visible");

	Params::WeaponSynthePart_Infomation_C_SetText2Visible Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_Infomation.WeaponSynthePart_Infomation_C.SetText2Table
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBTextTableAsset*                In_Text_Table                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthePart_Infomation_C::SetText2Table(class USBTextTableAsset* In_Text_Table)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_Infomation_C", "SetText2Table");

	Params::WeaponSynthePart_Infomation_C_SetText2Table Parms{};

	Parms.In_Text_Table = In_Text_Table;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_Infomation.WeaponSynthePart_Infomation_C.SetText2ID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   In_Text_Id                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthePart_Infomation_C::SetText2ID(int32 In_Text_Id)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_Infomation_C", "SetText2ID");

	Params::WeaponSynthePart_Infomation_C_SetText2ID Parms{};

	Parms.In_Text_Id = In_Text_Id;

	UObject::ProcessEvent(Func, &Parms);
}

}


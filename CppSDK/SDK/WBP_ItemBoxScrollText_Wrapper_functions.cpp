#pragma once

 

// Package: WBP_ItemBoxScrollText_Wrapper

#include "Basic.hpp"

#include "WBP_ItemBoxScrollText_Wrapper_classes.hpp"
#include "WBP_ItemBoxScrollText_Wrapper_parameters.hpp"


namespace SDK
{

// Function WBP_ItemBoxScrollText_Wrapper.WBP_ItemBoxScrollText_Wrapper_C.ExecuteUbergraph_WBP_ItemBoxScrollText_Wrapper
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ItemBoxScrollText_Wrapper_C::ExecuteUbergraph_WBP_ItemBoxScrollText_Wrapper(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxScrollText_Wrapper_C", "ExecuteUbergraph_WBP_ItemBoxScrollText_Wrapper");

	Params::WBP_ItemBoxScrollText_Wrapper_C_ExecuteUbergraph_WBP_ItemBoxScrollText_Wrapper Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ItemBoxScrollText_Wrapper.WBP_ItemBoxScrollText_Wrapper_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ItemBoxScrollText_Wrapper_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxScrollText_Wrapper_C", "PreConstruct");

	Params::WBP_ItemBoxScrollText_Wrapper_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ItemBoxScrollText_Wrapper.WBP_ItemBoxScrollText_Wrapper_C.SetDestination
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Over                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             OverText                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_ItemBoxScrollText_Wrapper_C::SetDestination(const class FText& InText, int32 Param_Index, bool Over, const class FText& OverText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxScrollText_Wrapper_C", "SetDestination");

	Params::WBP_ItemBoxScrollText_Wrapper_C_SetDestination Parms{};

	Parms.InText = std::move(InText);
	Parms.Param_Index = Param_Index;
	Parms.Over = Over;
	Parms.OverText = std::move(OverText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ItemBoxScrollText_Wrapper.WBP_ItemBoxScrollText_Wrapper_C.SetItemStorageSingle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             ItemName                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   NowNum                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MaxNum                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ExpectationNam                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bCanNotLost                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ItemBoxScrollText_Wrapper_C::SetItemStorageSingle(const class FText& ItemName, int32 NowNum, int32 MaxNum, int32 ExpectationNam, bool bCanNotLost)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxScrollText_Wrapper_C", "SetItemStorageSingle");

	Params::WBP_ItemBoxScrollText_Wrapper_C_SetItemStorageSingle Parms{};

	Parms.ItemName = std::move(ItemName);
	Parms.NowNum = NowNum;
	Parms.MaxNum = MaxNum;
	Parms.ExpectationNam = ExpectationNam;
	Parms.bCanNotLost = bCanNotLost;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ItemBoxScrollText_Wrapper.WBP_ItemBoxScrollText_Wrapper_C.SetItemStorageRange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             ItemName                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   NowNum                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MaxNum                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ExpectationNamMin                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ExpectationNamMax                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bCanNotLost                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ItemBoxScrollText_Wrapper_C::SetItemStorageRange(const class FText& ItemName, int32 NowNum, int32 MaxNum, int32 ExpectationNamMin, int32 ExpectationNamMax, bool bCanNotLost)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxScrollText_Wrapper_C", "SetItemStorageRange");

	Params::WBP_ItemBoxScrollText_Wrapper_C_SetItemStorageRange Parms{};

	Parms.ItemName = std::move(ItemName);
	Parms.NowNum = NowNum;
	Parms.MaxNum = MaxNum;
	Parms.ExpectationNamMin = ExpectationNamMin;
	Parms.ExpectationNamMax = ExpectationNamMax;
	Parms.bCanNotLost = bCanNotLost;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ItemBoxScrollText_Wrapper.WBP_ItemBoxScrollText_Wrapper_C.SetBagSingle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NowNum                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MaxNum                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ExpectationNam                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ItemBoxScrollText_Wrapper_C::SetBagSingle(int32 NowNum, int32 MaxNum, int32 ExpectationNam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxScrollText_Wrapper_C", "SetBagSingle");

	Params::WBP_ItemBoxScrollText_Wrapper_C_SetBagSingle Parms{};

	Parms.NowNum = NowNum;
	Parms.MaxNum = MaxNum;
	Parms.ExpectationNam = ExpectationNam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ItemBoxScrollText_Wrapper.WBP_ItemBoxScrollText_Wrapper_C.SetBagRange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NowNum                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MaxNum                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ExpectationNamMax                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ExpectationNamMin                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ItemBoxScrollText_Wrapper_C::SetBagRange(int32 NowNum, int32 MaxNum, int32 ExpectationNamMax, int32 ExpectationNamMin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxScrollText_Wrapper_C", "SetBagRange");

	Params::WBP_ItemBoxScrollText_Wrapper_C_SetBagRange Parms{};

	Parms.NowNum = NowNum;
	Parms.MaxNum = MaxNum;
	Parms.ExpectationNamMax = ExpectationNamMax;
	Parms.ExpectationNamMin = ExpectationNamMin;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ItemBoxScrollText_Wrapper.WBP_ItemBoxScrollText_Wrapper_C.SetBagRange_Random
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NowNum                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MaxNum                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MaxAdd                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ItemBoxScrollText_Wrapper_C::SetBagRange_Random(int32 NowNum, int32 MaxNum, int32 MaxAdd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxScrollText_Wrapper_C", "SetBagRange_Random");

	Params::WBP_ItemBoxScrollText_Wrapper_C_SetBagRange_Random Parms{};

	Parms.NowNum = NowNum;
	Parms.MaxNum = MaxNum;
	Parms.MaxAdd = MaxAdd;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ItemBoxScrollText_Wrapper.WBP_ItemBoxScrollText_Wrapper_C.SetTypeOtherOne
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InNameText                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    bOverlapping                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ItemBoxScrollText_Wrapper_C::SetTypeOtherOne(const class FText& InNameText, bool bOverlapping)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxScrollText_Wrapper_C", "SetTypeOtherOne");

	Params::WBP_ItemBoxScrollText_Wrapper_C_SetTypeOtherOne Parms{};

	Parms.InNameText = std::move(InNameText);
	Parms.bOverlapping = bOverlapping;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ItemBoxScrollText_Wrapper.WBP_ItemBoxScrollText_Wrapper_C.SetTypeOtherMultiple
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InNameText                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             InNumText                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    bOverlapping                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ItemBoxScrollText_Wrapper_C::SetTypeOtherMultiple(const class FText& InNameText, const class FText& InNumText, bool bOverlapping)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxScrollText_Wrapper_C", "SetTypeOtherMultiple");

	Params::WBP_ItemBoxScrollText_Wrapper_C_SetTypeOtherMultiple Parms{};

	Parms.InNameText = std::move(InNameText);
	Parms.InNumText = std::move(InNumText);
	Parms.bOverlapping = bOverlapping;

	UObject::ProcessEvent(Func, &Parms);
}

}


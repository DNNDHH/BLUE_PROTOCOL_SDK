#pragma once

 

// Package: MyCharaMenu_Other

#include "Basic.hpp"

#include "MyCharaMenu_Other_classes.hpp"
#include "MyCharaMenu_Other_parameters.hpp"


namespace SDK
{

// Function MyCharaMenu_Other.MyCharaMenu_Other_C.ExecuteUbergraph_MyCharaMenu_Other
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_Other_C::ExecuteUbergraph_MyCharaMenu_Other(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Other_C", "ExecuteUbergraph_MyCharaMenu_Other");

	Params::MyCharaMenu_Other_C_ExecuteUbergraph_MyCharaMenu_Other Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_Other.MyCharaMenu_Other_C.Update
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_Other_C::Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Other_C", "Update");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_Other.MyCharaMenu_Other_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMyCharaMenu_Other_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Other_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_Other.MyCharaMenu_Other_C.UpdateActiveOutGameBuff
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_Other_C::UpdateActiveOutGameBuff()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Other_C", "UpdateActiveOutGameBuff");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_Other.MyCharaMenu_Other_C.UpdateActiveNetCafeBuff
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_Other_C::UpdateActiveNetCafeBuff()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Other_C", "UpdateActiveNetCafeBuff");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_Other.MyCharaMenu_Other_C.CreateStockOutGameBuff
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_Other_C::CreateStockOutGameBuff()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Other_C", "CreateStockOutGameBuff");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_Other.MyCharaMenu_Other_C.GetBuffValue
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   BaseValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsRate                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// EOutGameBuffType                        InBuffType                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UMyCharaMenu_Other_C::GetBuffValue(int32 BaseValue, bool IsRate, const EOutGameBuffType InBuffType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Other_C", "GetBuffValue");

	Params::MyCharaMenu_Other_C_GetBuffValue Parms{};

	Parms.BaseValue = BaseValue;
	Parms.IsRate = IsRate;
	Parms.InBuffType = InBuffType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function MyCharaMenu_Other.MyCharaMenu_Other_C.TryGetActiveListItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEffect_Other_C*                  Item                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_Other_C::TryGetActiveListItem(class UEffect_Other_C** Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Other_C", "TryGetActiveListItem");

	Params::MyCharaMenu_Other_C_TryGetActiveListItem Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Item != nullptr)
		*Item = Parms.Item;
}


// Function MyCharaMenu_Other.MyCharaMenu_Other_C.FixActiveList
// (Public, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_Other_C::FixActiveList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Other_C", "FixActiveList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_Other.MyCharaMenu_Other_C.UpdateFreeBuff
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_Other_C::UpdateFreeBuff()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Other_C", "UpdateFreeBuff");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_Other.MyCharaMenu_Other_C.Get Free Buff Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBFreeBuffPointType                    Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Text                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// struct FSBStatusAlimentConfig           Out_Row                                                (Parm, OutParm)

void UMyCharaMenu_Other_C::Get_Free_Buff_Text(ESBFreeBuffPointType Type, class FString* Text, struct FSBStatusAlimentConfig* Out_Row)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Other_C", "Get Free Buff Text");

	Params::MyCharaMenu_Other_C_Get_Free_Buff_Text Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = std::move(Parms.Text);

	if (Out_Row != nullptr)
		*Out_Row = std::move(Parms.Out_Row);
}

}


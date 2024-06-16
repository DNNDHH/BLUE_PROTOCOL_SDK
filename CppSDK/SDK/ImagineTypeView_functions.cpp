#pragma once

 

// Package: ImagineTypeView

#include "Basic.hpp"

#include "ImagineTypeView_classes.hpp"
#include "ImagineTypeView_parameters.hpp"


namespace SDK
{

// Function ImagineTypeView.ImagineTypeView_C.ExecuteUbergraph_ImagineTypeView
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UImagineTypeView_C::ExecuteUbergraph_ImagineTypeView(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineTypeView_C", "ExecuteUbergraph_ImagineTypeView");

	Params::ImagineTypeView_C_ExecuteUbergraph_ImagineTypeView Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineTypeView.ImagineTypeView_C.Set Enable Flat Style
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bEnableFlatStyle                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UImagineTypeView_C::Set_Enable_Flat_Style(bool Param_bEnableFlatStyle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineTypeView_C", "Set Enable Flat Style");

	Params::ImagineTypeView_C_Set_Enable_Flat_Style Parms{};

	Parms.Param_bEnableFlatStyle = Param_bEnableFlatStyle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineTypeView.ImagineTypeView_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UImagineTypeView_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineTypeView_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineTypeView.ImagineTypeView_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UImagineTypeView_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineTypeView_C", "PreConstruct");

	Params::ImagineTypeView_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineTypeView.ImagineTypeView_C.ApplyBattleImagineParam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterImagine                 ImagineMaster                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UImagineTypeView_C::ApplyBattleImagineParam(const struct FSBMasterImagine& ImagineMaster)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineTypeView_C", "ApplyBattleImagineParam");

	Params::ImagineTypeView_C_ApplyBattleImagineParam Parms{};

	Parms.ImagineMaster = std::move(ImagineMaster);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineTypeView.ImagineTypeView_C.SetEquipPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterImagine                 ImagineData                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UImagineTypeView_C::SetEquipPosition(const struct FSBMasterImagine& ImagineData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineTypeView_C", "SetEquipPosition");

	Params::ImagineTypeView_C_SetEquipPosition Parms{};

	Parms.ImagineData = std::move(ImagineData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineTypeView.ImagineTypeView_C.ApplyInnerImagineParam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterImagine                 MasterData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   Level                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UImagineTypeView_C::ApplyInnerImagineParam(const struct FSBMasterImagine& MasterData, int32 Level)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineTypeView_C", "ApplyInnerImagineParam");

	Params::ImagineTypeView_C_ApplyInnerImagineParam Parms{};

	Parms.MasterData = std::move(MasterData);
	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineTypeView.ImagineTypeView_C.ApplyImagineParam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterImagine                 ImagineMaster                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   Level                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UImagineTypeView_C::ApplyImagineParam(const struct FSBMasterImagine& ImagineMaster, int32 Level)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineTypeView_C", "ApplyImagineParam");

	Params::ImagineTypeView_C_ApplyImagineParam Parms{};

	Parms.ImagineMaster = std::move(ImagineMaster);
	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineTypeView.ImagineTypeView_C.Set Development View
// (Private, BlueprintCallable, BlueprintEvent)

void UImagineTypeView_C::Set_Development_View()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineTypeView_C", "Set Development View");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineTypeView.ImagineTypeView_C.ApplyData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     OwnItemInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UImagineTypeView_C::ApplyData(const struct FOwnItemInfo& OwnItemInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineTypeView_C", "ApplyData");

	Params::ImagineTypeView_C_ApplyData Parms{};

	Parms.OwnItemInfo = std::move(OwnItemInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineTypeView.ImagineTypeView_C.ApplyBattleImagineData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     Info                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UImagineTypeView_C::ApplyBattleImagineData(const struct FOwnItemInfo& Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineTypeView_C", "ApplyBattleImagineData");

	Params::ImagineTypeView_C_ApplyBattleImagineData Parms{};

	Parms.Info = std::move(Info);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineTypeView.ImagineTypeView_C.ApplyBattleImagineStackParam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterImagine                 ImagineMaster                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                           StackBText                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FOwnItemInfo                     Info                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UImagineTypeView_C::ApplyBattleImagineStackParam(const struct FSBMasterImagine& ImagineMaster, const class FString& StackBText, const struct FOwnItemInfo& Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineTypeView_C", "ApplyBattleImagineStackParam");

	Params::ImagineTypeView_C_ApplyBattleImagineStackParam Parms{};

	Parms.ImagineMaster = std::move(ImagineMaster);
	Parms.StackBText = std::move(StackBText);
	Parms.Info = std::move(Info);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineTypeView.ImagineTypeView_C.Set Diff Show
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bShow                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UImagineTypeView_C::Set_Diff_Show(bool Param_bShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineTypeView_C", "Set Diff Show");

	Params::ImagineTypeView_C_Set_Diff_Show Parms{};

	Parms.Param_bShow = Param_bShow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineTypeView.ImagineTypeView_C.ApplyDataMaxStackB
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UImagineTypeView_C::ApplyDataMaxStackB(int32 ItemId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineTypeView_C", "ApplyDataMaxStackB");

	Params::ImagineTypeView_C_ApplyDataMaxStackB Parms{};

	Parms.ItemId = ItemId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineTypeView.ImagineTypeView_C.InitUIStackBMaxMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UImagineTypeView_C::InitUIStackBMaxMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineTypeView_C", "InitUIStackBMaxMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineTypeView.ImagineTypeView_C.ApplyBattleImagineDataByMaster
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterImagine                 ImagineMaster                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UImagineTypeView_C::ApplyBattleImagineDataByMaster(const struct FSBMasterImagine& ImagineMaster)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineTypeView_C", "ApplyBattleImagineDataByMaster");

	Params::ImagineTypeView_C_ApplyBattleImagineDataByMaster Parms{};

	Parms.ImagineMaster = std::move(ImagineMaster);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineTypeView.ImagineTypeView_C.ApplyBattleImagineStackParamByMaster
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterImagine                 ImagineMaster                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                           StackBText                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UImagineTypeView_C::ApplyBattleImagineStackParamByMaster(const struct FSBMasterImagine& ImagineMaster, const class FString& StackBText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineTypeView_C", "ApplyBattleImagineStackParamByMaster");

	Params::ImagineTypeView_C_ApplyBattleImagineStackParamByMaster Parms{};

	Parms.ImagineMaster = std::move(ImagineMaster);
	Parms.StackBText = std::move(StackBText);

	UObject::ProcessEvent(Func, &Parms);
}

}


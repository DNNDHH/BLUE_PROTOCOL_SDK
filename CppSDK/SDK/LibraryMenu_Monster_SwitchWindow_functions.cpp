#pragma once

 

// Package: LibraryMenu_Monster_SwitchWindow

#include "Basic.hpp"

#include "LibraryMenu_Monster_SwitchWindow_classes.hpp"
#include "LibraryMenu_Monster_SwitchWindow_parameters.hpp"


namespace SDK
{

// Function LibraryMenu_Monster_SwitchWindow.LibraryMenu_Monster_SwitchWindow_C.OnAreaListVisibleChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_Monster_SwitchWindow_C::OnAreaListVisibleChange__DelegateSignature(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_SwitchWindow_C", "OnAreaListVisibleChange__DelegateSignature");

	Params::LibraryMenu_Monster_SwitchWindow_C_OnAreaListVisibleChange__DelegateSignature Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Monster_SwitchWindow.LibraryMenu_Monster_SwitchWindow_C.OnAreaListSelect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             EnemyId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Monster_SwitchWindow_C::OnAreaListSelect__DelegateSignature(int32 Param_Index, class FName EnemyId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_SwitchWindow_C", "OnAreaListSelect__DelegateSignature");

	Params::LibraryMenu_Monster_SwitchWindow_C_OnAreaListSelect__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;
	Parms.EnemyId = EnemyId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Monster_SwitchWindow.LibraryMenu_Monster_SwitchWindow_C.ExecuteUbergraph_LibraryMenu_Monster_SwitchWindow
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Monster_SwitchWindow_C::ExecuteUbergraph_LibraryMenu_Monster_SwitchWindow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_SwitchWindow_C", "ExecuteUbergraph_LibraryMenu_Monster_SwitchWindow");

	Params::LibraryMenu_Monster_SwitchWindow_C_ExecuteUbergraph_LibraryMenu_Monster_SwitchWindow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Monster_SwitchWindow.LibraryMenu_Monster_SwitchWindow_C.AreaListSelect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             EnemyId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Monster_SwitchWindow_C::AreaListSelect(int32 Param_Index, class FName EnemyId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_SwitchWindow_C", "AreaListSelect");

	Params::LibraryMenu_Monster_SwitchWindow_C_AreaListSelect Parms{};

	Parms.Param_Index = Param_Index;
	Parms.EnemyId = EnemyId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Monster_SwitchWindow.LibraryMenu_Monster_SwitchWindow_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULibraryMenu_Monster_SwitchWindow_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_SwitchWindow_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Monster_SwitchWindow.LibraryMenu_Monster_SwitchWindow_C.AreaListVisibleChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_Monster_SwitchWindow_C::AreaListVisibleChange(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_SwitchWindow_C", "AreaListVisibleChange");

	Params::LibraryMenu_Monster_SwitchWindow_C_AreaListVisibleChange Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Monster_SwitchWindow.LibraryMenu_Monster_SwitchWindow_C.BndEvt__LibraryMenu_Monster_SwitchWindow_ExplainTabButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_Monster_SwitchWindow_C::BndEvt__LibraryMenu_Monster_SwitchWindow_ExplainTabButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_SwitchWindow_C", "BndEvt__LibraryMenu_Monster_SwitchWindow_ExplainTabButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Monster_SwitchWindow.LibraryMenu_Monster_SwitchWindow_C.BndEvt__LibraryMenu_Monster_SwitchWindow_DetailTabButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_Monster_SwitchWindow_C::BndEvt__LibraryMenu_Monster_SwitchWindow_DetailTabButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_SwitchWindow_C", "BndEvt__LibraryMenu_Monster_SwitchWindow_DetailTabButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Monster_SwitchWindow.LibraryMenu_Monster_SwitchWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULibraryMenu_Monster_SwitchWindow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_SwitchWindow_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Monster_SwitchWindow.LibraryMenu_Monster_SwitchWindow_C.SetActiveTab
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Monster_SwitchWindow_C::SetActiveTab(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_SwitchWindow_C", "SetActiveTab");

	Params::LibraryMenu_Monster_SwitchWindow_C_SetActiveTab Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Monster_SwitchWindow.LibraryMenu_Monster_SwitchWindow_C.SetEnemyData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBLibraryEnemyData              EnemyData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void ULibraryMenu_Monster_SwitchWindow_C::SetEnemyData(const struct FSBLibraryEnemyData& EnemyData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_SwitchWindow_C", "SetEnemyData");

	Params::LibraryMenu_Monster_SwitchWindow_C_SetEnemyData Parms{};

	Parms.EnemyData = std::move(EnemyData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Monster_SwitchWindow.LibraryMenu_Monster_SwitchWindow_C.ChangeEnemyType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Monster_SwitchWindow_C::ChangeEnemyType(int32 Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_SwitchWindow_C", "ChangeEnemyType");

	Params::LibraryMenu_Monster_SwitchWindow_C_ChangeEnemyType Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Monster_SwitchWindow.LibraryMenu_Monster_SwitchWindow_C.CloseAreaList
// (Public, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Monster_SwitchWindow_C::CloseAreaList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_SwitchWindow_C", "CloseAreaList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Monster_SwitchWindow.LibraryMenu_Monster_SwitchWindow_C.UpdateReadMarkCount
// (Public, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_Monster_SwitchWindow_C::UpdateReadMarkCount()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_SwitchWindow_C", "UpdateReadMarkCount");

	UObject::ProcessEvent(Func, nullptr);
}

}


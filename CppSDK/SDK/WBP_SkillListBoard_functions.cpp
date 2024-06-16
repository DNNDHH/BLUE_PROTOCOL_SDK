#pragma once

 

// Package: WBP_SkillListBoard

#include "Basic.hpp"

#include "WBP_SkillListBoard_classes.hpp"
#include "WBP_SkillListBoard_parameters.hpp"


namespace SDK
{

// Function WBP_SkillListBoard.WBP_SkillListBoard_C.OnSubMenuChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SkillListBoard_C::OnSubMenuChanged__DelegateSignature(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillListBoard_C", "OnSubMenuChanged__DelegateSignature");

	Params::WBP_SkillListBoard_C_OnSubMenuChanged__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SkillListBoard.WBP_SkillListBoard_C.ExecuteUbergraph_WBP_SkillListBoard
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SkillListBoard_C::ExecuteUbergraph_WBP_SkillListBoard(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillListBoard_C", "ExecuteUbergraph_WBP_SkillListBoard");

	Params::WBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SkillListBoard.WBP_SkillListBoard_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_SkillListBoard_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillListBoard_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_SkillListBoard.WBP_SkillListBoard_C.OnCharaSkillMasteryOthersComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SkillListBoard_C::OnCharaSkillMasteryOthersComplete(const int32 Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillListBoard_C", "OnCharaSkillMasteryOthersComplete");

	Params::WBP_SkillListBoard_C_OnCharaSkillMasteryOthersComplete Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SkillListBoard.WBP_SkillListBoard_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void UWBP_SkillListBoard_C::CustomEvent_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillListBoard_C", "CustomEvent_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_SkillListBoard.WBP_SkillListBoard_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBClassType                            Typr                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SkillListBoard_C::CustomEvent_0(ESBClassType Typr)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillListBoard_C", "CustomEvent_0");

	Params::WBP_SkillListBoard_C_CustomEvent_0 Parms{};

	Parms.Typr = Typr;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SkillListBoard.WBP_SkillListBoard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_SkillListBoard_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillListBoard_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_SkillListBoard.WBP_SkillListBoard_C.OpenSkillTree
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBSkillDataMasterData           Skill                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_SkillListBoard_C::OpenSkillTree(const struct FSBSkillDataMasterData& Skill)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillListBoard_C", "OpenSkillTree");

	Params::WBP_SkillListBoard_C_OpenSkillTree Parms{};

	Parms.Skill = std::move(Skill);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SkillListBoard.WBP_SkillListBoard_C.BoardUpdate
// (BlueprintCallable, BlueprintEvent)

void UWBP_SkillListBoard_C::BoardUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillListBoard_C", "BoardUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_SkillListBoard.WBP_SkillListBoard_C.Get Now Select Class
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBClassType                            Output                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SkillListBoard_C::Get_Now_Select_Class(ESBClassType* Output)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillListBoard_C", "Get Now Select Class");

	Params::WBP_SkillListBoard_C_Get_Now_Select_Class Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = Parms.Output;
}


// Function WBP_SkillListBoard.WBP_SkillListBoard_C.Skill List Setting
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_SkillListBoard_C::Skill_List_Setting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillListBoard_C", "Skill List Setting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_SkillListBoard.WBP_SkillListBoard_C.PassiveSkillListSetting
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_SkillListBoard_C::PassiveSkillListSetting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillListBoard_C", "PassiveSkillListSetting");

	UObject::ProcessEvent(Func, nullptr);
}

}


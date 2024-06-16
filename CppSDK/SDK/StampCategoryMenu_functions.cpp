#pragma once

 

// Package: StampCategoryMenu

#include "Basic.hpp"

#include "StampCategoryMenu_classes.hpp"
#include "StampCategoryMenu_parameters.hpp"


namespace SDK
{

// Function StampCategoryMenu.StampCategoryMenu_C.OnUpdateStamp__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBStampCategoryMasterData       Param_StampCategoryMasterData                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UStampCategoryMenu_C::OnUpdateStamp__DelegateSignature(const struct FSBStampCategoryMasterData& Param_StampCategoryMasterData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StampCategoryMenu_C", "OnUpdateStamp__DelegateSignature");

	Params::StampCategoryMenu_C_OnUpdateStamp__DelegateSignature Parms{};

	Parms.Param_StampCategoryMasterData = std::move(Param_StampCategoryMasterData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function StampCategoryMenu.StampCategoryMenu_C.ExecuteUbergraph_StampCategoryMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStampCategoryMenu_C::ExecuteUbergraph_StampCategoryMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StampCategoryMenu_C", "ExecuteUbergraph_StampCategoryMenu");

	Params::StampCategoryMenu_C_ExecuteUbergraph_StampCategoryMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryButton10_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStampCategoryMenu_C::BndEvt__StampCategoryButton10_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StampCategoryMenu_C", "BndEvt__StampCategoryButton10_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	Params::StampCategoryMenu_C_BndEvt__StampCategoryButton10_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryButton9_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStampCategoryMenu_C::BndEvt__StampCategoryButton9_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StampCategoryMenu_C", "BndEvt__StampCategoryButton9_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	Params::StampCategoryMenu_C_BndEvt__StampCategoryButton9_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryButton8_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStampCategoryMenu_C::BndEvt__StampCategoryButton8_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StampCategoryMenu_C", "BndEvt__StampCategoryButton8_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	Params::StampCategoryMenu_C_BndEvt__StampCategoryButton8_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryButton7_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStampCategoryMenu_C::BndEvt__StampCategoryButton7_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StampCategoryMenu_C", "BndEvt__StampCategoryButton7_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	Params::StampCategoryMenu_C_BndEvt__StampCategoryButton7_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryHistoryButton_K2Node_ComponentBoundEvent_181_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStampCategoryMenu_C::BndEvt__StampCategoryHistoryButton_K2Node_ComponentBoundEvent_181_OnClicked__DelegateSignature(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StampCategoryMenu_C", "BndEvt__StampCategoryHistoryButton_K2Node_ComponentBoundEvent_181_OnClicked__DelegateSignature");

	Params::StampCategoryMenu_C_BndEvt__StampCategoryHistoryButton_K2Node_ComponentBoundEvent_181_OnClicked__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StampCategoryMenu.StampCategoryMenu_C.Show
// (BlueprintCallable, BlueprintEvent)

void UStampCategoryMenu_C::Show()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StampCategoryMenu_C", "Show");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryButton6_K2Node_ComponentBoundEvent_226_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStampCategoryMenu_C::BndEvt__StampCategoryButton6_K2Node_ComponentBoundEvent_226_OnClicked__DelegateSignature(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StampCategoryMenu_C", "BndEvt__StampCategoryButton6_K2Node_ComponentBoundEvent_226_OnClicked__DelegateSignature");

	Params::StampCategoryMenu_C_BndEvt__StampCategoryButton6_K2Node_ComponentBoundEvent_226_OnClicked__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryButton5_K2Node_ComponentBoundEvent_218_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStampCategoryMenu_C::BndEvt__StampCategoryButton5_K2Node_ComponentBoundEvent_218_OnClicked__DelegateSignature(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StampCategoryMenu_C", "BndEvt__StampCategoryButton5_K2Node_ComponentBoundEvent_218_OnClicked__DelegateSignature");

	Params::StampCategoryMenu_C_BndEvt__StampCategoryButton5_K2Node_ComponentBoundEvent_218_OnClicked__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryButton4_K2Node_ComponentBoundEvent_726_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStampCategoryMenu_C::BndEvt__StampCategoryButton4_K2Node_ComponentBoundEvent_726_OnClicked__DelegateSignature(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StampCategoryMenu_C", "BndEvt__StampCategoryButton4_K2Node_ComponentBoundEvent_726_OnClicked__DelegateSignature");

	Params::StampCategoryMenu_C_BndEvt__StampCategoryButton4_K2Node_ComponentBoundEvent_726_OnClicked__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryButton3_K2Node_ComponentBoundEvent_720_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStampCategoryMenu_C::BndEvt__StampCategoryButton3_K2Node_ComponentBoundEvent_720_OnClicked__DelegateSignature(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StampCategoryMenu_C", "BndEvt__StampCategoryButton3_K2Node_ComponentBoundEvent_720_OnClicked__DelegateSignature");

	Params::StampCategoryMenu_C_BndEvt__StampCategoryButton3_K2Node_ComponentBoundEvent_720_OnClicked__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryButton2_K2Node_ComponentBoundEvent_715_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStampCategoryMenu_C::BndEvt__StampCategoryButton2_K2Node_ComponentBoundEvent_715_OnClicked__DelegateSignature(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StampCategoryMenu_C", "BndEvt__StampCategoryButton2_K2Node_ComponentBoundEvent_715_OnClicked__DelegateSignature");

	Params::StampCategoryMenu_C_BndEvt__StampCategoryButton2_K2Node_ComponentBoundEvent_715_OnClicked__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategoryButton1_K2Node_ComponentBoundEvent_711_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStampCategoryMenu_C::BndEvt__StampCategoryButton1_K2Node_ComponentBoundEvent_711_OnClicked__DelegateSignature(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StampCategoryMenu_C", "BndEvt__StampCategoryButton1_K2Node_ComponentBoundEvent_711_OnClicked__DelegateSignature");

	Params::StampCategoryMenu_C_BndEvt__StampCategoryButton1_K2Node_ComponentBoundEvent_711_OnClicked__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategorySelectRightButton_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UStampCategoryMenu_C::BndEvt__StampCategorySelectRightButton_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StampCategoryMenu_C", "BndEvt__StampCategorySelectRightButton_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StampCategoryMenu.StampCategoryMenu_C.BndEvt__StampCategorySelectLeftButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UStampCategoryMenu_C::BndEvt__StampCategorySelectLeftButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StampCategoryMenu_C", "BndEvt__StampCategorySelectLeftButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StampCategoryMenu.StampCategoryMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UStampCategoryMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StampCategoryMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StampCategoryMenu.StampCategoryMenu_C.GetMyStampDataList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UStampCategoryMenu_C::GetMyStampDataList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StampCategoryMenu_C", "GetMyStampDataList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StampCategoryMenu.StampCategoryMenu_C.Update Button
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UStampCategoryMenu_C::Update_Button()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StampCategoryMenu_C", "Update Button");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StampCategoryMenu.StampCategoryMenu_C.UpdateEnableButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UStampCategoryMenu_C::UpdateEnableButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StampCategoryMenu_C", "UpdateEnableButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StampCategoryMenu.StampCategoryMenu_C.Set History Mode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSet                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UStampCategoryMenu_C::Set_History_Mode(bool bSet)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StampCategoryMenu_C", "Set History Mode");

	Params::StampCategoryMenu_C_Set_History_Mode Parms{};

	Parms.bSet = bSet;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StampCategoryMenu.StampCategoryMenu_C.UpdateMyStampDataList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   StampId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStampCategoryMenu_C::UpdateMyStampDataList(int32 StampId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StampCategoryMenu_C", "UpdateMyStampDataList");

	Params::StampCategoryMenu_C_UpdateMyStampDataList Parms{};

	Parms.StampId = StampId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StampCategoryMenu.StampCategoryMenu_C.FindStampCategoryMasterData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   InCategoryId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsFind                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSBStampCategoryMasterData       RetData                                                (Parm, OutParm)

void UStampCategoryMenu_C::FindStampCategoryMasterData(int32 InCategoryId, bool* IsFind, struct FSBStampCategoryMasterData* RetData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StampCategoryMenu_C", "FindStampCategoryMasterData");

	Params::StampCategoryMenu_C_FindStampCategoryMasterData Parms{};

	Parms.InCategoryId = InCategoryId;

	UObject::ProcessEvent(Func, &Parms);

	if (IsFind != nullptr)
		*IsFind = Parms.IsFind;

	if (RetData != nullptr)
		*RetData = std::move(Parms.RetData);
}


// Function StampCategoryMenu.StampCategoryMenu_C.LoadStampHistoryIdsData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UStampCategoryMenu_C::LoadStampHistoryIdsData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StampCategoryMenu_C", "LoadStampHistoryIdsData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StampCategoryMenu.StampCategoryMenu_C.SaveStampHisoryIdsData
// (Public, BlueprintCallable, BlueprintEvent)

void UStampCategoryMenu_C::SaveStampHisoryIdsData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StampCategoryMenu_C", "SaveStampHisoryIdsData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StampCategoryMenu.StampCategoryMenu_C.CheckLimitedTimeStamp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   StampId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UStampCategoryMenu_C::CheckLimitedTimeStamp(int32 StampId, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StampCategoryMenu_C", "CheckLimitedTimeStamp");

	Params::StampCategoryMenu_C_CheckLimitedTimeStamp Parms{};

	Parms.StampId = StampId;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function StampCategoryMenu.StampCategoryMenu_C.GetSelectButtonIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   Param_SelectButtonIndex                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStampCategoryMenu_C::GetSelectButtonIndex(int32* Param_SelectButtonIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StampCategoryMenu_C", "GetSelectButtonIndex");

	Params::StampCategoryMenu_C_GetSelectButtonIndex Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_SelectButtonIndex != nullptr)
		*Param_SelectButtonIndex = Parms.Param_SelectButtonIndex;
}


// Function StampCategoryMenu.StampCategoryMenu_C.GetSelectStampCategoryMasterData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FSBStampCategoryMasterData       Output                                                 (Parm, OutParm)

void UStampCategoryMenu_C::GetSelectStampCategoryMasterData(struct FSBStampCategoryMasterData* Output) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StampCategoryMenu_C", "GetSelectStampCategoryMasterData");

	Params::StampCategoryMenu_C_GetSelectStampCategoryMasterData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = std::move(Parms.Output);
}


// Function StampCategoryMenu.StampCategoryMenu_C.IsValidSelectStampCategoryMasterData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UStampCategoryMenu_C::IsValidSelectStampCategoryMasterData() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StampCategoryMenu_C", "IsValidSelectStampCategoryMasterData");

	Params::StampCategoryMenu_C_IsValidSelectStampCategoryMasterData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


#pragma once

 

// Package: Imagine_StorageSelector

#include "Basic.hpp"

#include "Imagine_StorageSelector_classes.hpp"
#include "Imagine_StorageSelector_parameters.hpp"


namespace SDK
{

// Function Imagine_StorageSelector.Imagine_StorageSelector_C.ExecuteUbergraph_Imagine_StorageSelector
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UImagine_StorageSelector_C::ExecuteUbergraph_Imagine_StorageSelector(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Imagine_StorageSelector_C", "ExecuteUbergraph_Imagine_StorageSelector");

	Params::Imagine_StorageSelector_C_ExecuteUbergraph_Imagine_StorageSelector Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Imagine_StorageSelector.Imagine_StorageSelector_C.BndEvt__Imagine_StorageSelector_Btn_Change_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UImagine_StorageSelector_C::BndEvt__Imagine_StorageSelector_Btn_Change_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Imagine_StorageSelector_C", "BndEvt__Imagine_StorageSelector_Btn_Change_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Imagine_StorageSelector.Imagine_StorageSelector_C.BndEvt__Imagine_StorageSelector_Btn_Change_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UImagine_StorageSelector_C::BndEvt__Imagine_StorageSelector_Btn_Change_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Imagine_StorageSelector_C", "BndEvt__Imagine_StorageSelector_Btn_Change_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Imagine_StorageSelector.Imagine_StorageSelector_C.Set RecepiData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharacterCraftRecepi            RecepiData                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UImagine_StorageSelector_C::Set_RecepiData(const struct FCharacterCraftRecepi& RecepiData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Imagine_StorageSelector_C", "Set RecepiData");

	Params::Imagine_StorageSelector_C_Set_RecepiData Parms{};

	Parms.RecepiData = std::move(RecepiData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Imagine_StorageSelector.Imagine_StorageSelector_C.BndEvt__Craft_StorageSelector_Btn_Change_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UImagine_StorageSelector_C::BndEvt__Craft_StorageSelector_Btn_Change_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Imagine_StorageSelector_C", "BndEvt__Craft_StorageSelector_Btn_Change_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Imagine_StorageSelector.Imagine_StorageSelector_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UImagine_StorageSelector_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Imagine_StorageSelector_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Imagine_StorageSelector.Imagine_StorageSelector_C.UpdateStorageView
// (Public, BlueprintCallable, BlueprintEvent)

void UImagine_StorageSelector_C::UpdateStorageView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Imagine_StorageSelector_C", "UpdateStorageView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Imagine_StorageSelector.Imagine_StorageSelector_C.IsStorage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    Param_CurrentIsStorage                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UImagine_StorageSelector_C::IsStorage(bool* Param_CurrentIsStorage) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Imagine_StorageSelector_C", "IsStorage");

	Params::Imagine_StorageSelector_C_IsStorage Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_CurrentIsStorage != nullptr)
		*Param_CurrentIsStorage = Parms.Param_CurrentIsStorage;
}


// Function Imagine_StorageSelector.Imagine_StorageSelector_C.GetSelectStorageNo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   StorageNo                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UImagine_StorageSelector_C::GetSelectStorageNo(int32* StorageNo) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Imagine_StorageSelector_C", "GetSelectStorageNo");

	Params::Imagine_StorageSelector_C_GetSelectStorageNo Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (StorageNo != nullptr)
		*StorageNo = Parms.StorageNo;
}

}

